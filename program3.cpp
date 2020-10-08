/***
Name: Bekhzod
Student id: U2010280
Program Statement: It is the program to demonstrate the use of cin and cout statements" 
***/
#include <iostream> // Header file and library for out/in puts

using namespace std; // using namespace in order to not write the "std" all the time

int main() // main function header
{

    int id; // id is a  variable type of integer
    int pas; // pas is a  variable type of integer
    char letter; // letter is a variable type of char, it is used for writing any characters
    string name; // name is a variable type of string, it is used for writing words
    cout << "Welcome to our platform, sign in to continue !!! \n>"; // this output will be displaied in our cmd and "\n" is used to transfer the line to the next 
    cout << "Type yourname: \n>"; 
    cin >> name; // input the value of name through the keyboard
    cout << "Type your first ID letter: \n>"; 
    cin >> letter; // input the value of letter through the keyboard
    cout << "Type your ID numbers: \n>";
    cin >> id; // input the value of id through the keyboard
    cout << "Type your password: \n>";
    cin >> pas; // input the value of pas through the keyboard
    cout << "Password is correct, welcome back !!! \n"; "cout";// "cout" is used to print the statements and variables
    cout << "Your name is " << name << " and your id number is " << letter << id << endl; // "cout" is used to print the statements and variables, "endl" is used to transfer the line to the next

    system("pause"); // using for not closing the program as soon as it was opened
    return 0; // to end up the program

    


}

