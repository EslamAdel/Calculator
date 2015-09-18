#include<iostream>
#include<string.h>
#include <stdio.h>
#include <stdlib.h>

//Global variable to be Set when the user enters Invalid number
extern int NotNumberFlag;
//Global variable to be Set when the user didn't Enter an Input 
extern int NoInputFlag;

/**
 * @brief GetInput
 *   Read what the user has entered .
 *   Parsing the Input .
 *   Printing error massages if needed
 * @param printGet 
 * @param printIsNum
 * @return result of parsing 
 */
int GetInput(bool printGet,bool printIsNum);

/**
 * @brief ReadLine
 * @param fileName f
 * @return line
 */
char *ReadLine(FILE * f);

/**
 * @brief IsNumber
 * @param buf
 * @param print
 * @return 
 */

bool IsNumber(char *buf,bool print);

/**
 * @brief IsDigit
 * @param c
 * @return 
 */
int IsDigit(const int c);

