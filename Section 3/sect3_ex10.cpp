//written by Jtaim
//date 19 Sept 2015
//updated 2 Dec 2016
//Programming: Principles and Practice Using C++ Second Edition
/*
Section 3 exercise 10.
a program that takes an operation followed by two operands and outputs the result. For example:
+ 100 3.14
* 4 5
Read the operation into a string called operation and use an if-statement to figure out which 
operation the user wants, for example, if (operation=="+"). Read the operands into variables 
of type double. Implement this for operations called +, –, *, /, plus, minus, mul, and div 
with their obvious meanings.
*/

#include "section3.h" //custom header

int main()
{
    std::cout << "Enter an operation (+, -, *, /, plus, minus, mul, and div) followed by 2 operands separated by spaces:\n";
    std::string operation;
    double val1 = 0;
    double val2 = 0;
    while(std::cin >> operation >> val1 >> val2)
    {
        double res = 0;
        if(operation == "+" || operation == "plus")
            res = val1 + val2;
        else if(operation == "-" || operation == "minus")
            res = val1 - val2;
        else if(operation == "*" || operation == "mul")
            res = val1 * val2;
        else if(operation == "/" || operation == "div")
        {
            if(val2 == 0)
                simple_error("divide by zero");
            res = val1 / val2;
        }
        else
            simple_error("bad operation: " + operation);
        
        std::cout << val1 << " " << operation << " " << val2 << " = " << res << std::endl;
        std::cout << "do another\n";
    }
    std::cout << "exit bad operands";
	keep_window_open();
    return 0;
}