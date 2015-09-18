#include "Parser.h"
#include "calculator.h"
     void Calculator::add(const double a, const double b) {
        result = a + b;
        std::cout << "Result:" << result <<std:: endl;
    }
     void Calculator::subtract(const double a, const double b) {
        result = a - b;
        std::cout << "Result:" << result <<std:: endl;
    }
     void Calculator::mult(const double a, const double b) {
        result = a * b;
        std::cout << "Result:" << result <<std:: endl;
    }
     void Calculator::divide(const double a, const double b) {
        result = a / b;
        std::cout << "Result:" << result <<std:: endl;
    }
     void Calculator::modulus(const int a, const int b) {
        result = a % b;
        std::cout << "Result:" << result <<std:: endl;
    }

     void Calculator::menu() {
        std::cout<<"===============================================================\n";
        std::cout<<"                         MENU                                  \n";
        std::cout<<"===============================================================\n";
        std::cout<<"     1. Add\n";
        std::cout<<"     2. Subtract\n";
        std::cout<<"     3. Multiply\n";
        std::cout<<"     4. Divide\n";
        std::cout<<"     5. Modulus\n";
        std::cout<<"===============================================================\n\n";
        std::cout<<"===============================================================\n\n\n";
    }



     void Calculator::driver() {
            std::cout << "Enter your Operation" << std::endl;
	    //Get the desired operation from user
            operation=GetInput(false,true);
           // make sure that operation is supported
	   if(operation >= 1 && operation <= 5)
           {
            std::cout << "Enter first number" << std::endl;
	    //unset the flags before getting input
            NotNumberFlag = 0;
	    NoInputFlag   = 0;
	    //get the first number
            x=GetInput(true,true);
            //make sure that is a valid input
	   if(NotNumberFlag||NoInputFlag)
           return;
            std::cout << "Enter second number" << std::endl;
            //unset the flags before getting input
            NotNumberFlag = 0;
	    NoInputFlag   = 0;
            //get the second number
            y=GetInput(true,true);
            //make sure that is a valid input
	  if(NotNumberFlag||NoInputFlag)
            return;
        //do the operation
        switch(operation){
            case Add: add(x,y); break;
            case Subtract: subtract(x,y); break;
            case Multiply: mult(x,y); break;
            case Divide: divide(x,y); break;
            case Modulus: modulus(x,y); break;
        }
    }
   else     
   std::cout << "Invalid input. Try Again!" <<std::endl;

}
    void Calculator::driver2() {
        do {
            driver();
        std::cout << "Do you want to continue? 1->Yes/Otherwise -> NO" << std::endl;
	    //update the choise , no printing needed
            choice=GetInput(false,false);
        }
        while(choice == 1 );
    }
