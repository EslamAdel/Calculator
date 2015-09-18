#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "Parser.h"

using namespace std;

int NotNumberFlag = 0;
int NoInputFlag   = 0;

int GetInput(bool printGet,bool printIsNum )
{
    char *line;
    int result = 0;
    //Read the Input from user
    if ((line = ReadLine(stdin)) != NULL) {
       //Parse the input
	if (IsNumber(line,printIsNum)) {
      //convert the input to be an Integer if success    
        result = atoi(line);
	} else {
            if(printGet)
	    cout << "it is not a number" << endl;
           //setting the error flag
	    NotNumberFlag = 1;
	}

    } else {
            if(printGet)
	cout << "No Input has been entered " << endl;
   //setting the error flag
   NoInputFlag=1; 
   }
return result;
}

char *ReadLine(FILE * f)
{
    char *line = NULL;
    char c;
    int len = 0;
    //get the input as character by character until the user press enter
    while (((c = fgetc(f)) != EOF) && c != '\n') {
        //alloc memory and fill the buffer
	line = (char *) realloc(line, sizeof(char) * (len + 2));
	line[len++] = c;
        //putting the null termination at the end of the line
	line[len] = '\0';
    }
    return line;
}

bool IsNumber(char *buf,bool print)
{
    //iterator
    int i;
    //counter used for negative sign 
    int negative = 0;
   //parse the buffer
    for (i = 0; i < strlen(buf); i++) {
        //check if there is a space in the input 
	if (buf[i] == ' ') {
	    //print massage if needed
            if(print)
	    cout << "spaces are not allowed" << endl;
	    return false;
	}
	//check if the input is not a number
	if (!IsDigit(buf[i]))
	    return false;
        //integers only are allowed
	if (buf[i] == '.') {
            //print massage if needed
 	    if(print)
	    cout << "you should enter an integer number" << endl;
	    return false;
	}
	//checking for negative numbers
	if (buf[i] == '-') {
         //make sure that the negative sign is at begining of the input
	 if(i==0)
	    negative++;
         else return false;
	}

    }
    //make sure that only one negative sign is found
    if (negative > 1) {
	return false;
    }
    return true;

}

int IsDigit(const int c)
{
	//ascii of digits (0,1,2,...,9) is from 0x30 to 0x39 
    	//0x2E is the  ascii of '.'
   	//0x2D is the ascii of '-'
    	return (c >= 0x30 && c <= 0x39 || c == 0x2E || c == 0x2D);
}
