//written by Jtaim
//date 19 Sept 2015
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

//C++ programs start by executing the function main
int main()
try
{
    cout << "Enter an operation (+, -, *, /, plus, minus, mul, and div) followed by 2 operands separated by spaces: " << endl;
    string operation;
    double val1 = 0;
    double val2 = 0;
    while(cin >> operation >> val1 >> val2)
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
                error("divide by zero");
            res = val1 / val2;
        }
        else
            error("bad operation: ", operation);
        
        cout << val1 << " " << operation << " " << val2 << " = " << res << endl;
        cout << "do another" << endl;
    }
    cout << "exit bad operands";
    return 0;
}
catch (runtime_error e) {	// this code is to producer error messages; it will be described in Chapter 5
	cout << e.what() << endl;
}