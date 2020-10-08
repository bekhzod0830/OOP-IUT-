/***
Name: Bekhzod
My id: U2010280
Program Statement: It is the program for Declaring Variable and Printing its value" 
***/
#include <iostream> // Header file and library for out/in puts

using namespace std; // using namespace in order to not write the "std" all the time

int main() // main function header
{
    // var1 is an integer variable, it is used for whole numbers
    int var1; // variable declaration 
    var1 = 10;  // variable definition

    // var1 is an variable of type float
    float var2;
    var2 = 5.7;

    // var1 is an variable of type char, it is used any characters
    char var3;
    var3 = '+';

    // var1 is an variable of type double, which is mainly used for floating numbers
    double var4;
    var4 = 170.25;

    cout << var1 << endl << var2 << endl << var3 << endl << var4 << endl; //  "cout" is used to print the statements and variables, "endl" is used to transfer the line to the next
    system("pause"); // it is used for not closing the program as soon as it was opened
    return 0; // to end up the program
}