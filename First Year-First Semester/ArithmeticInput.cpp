#include<iostream>
using namespace std;

int main(){
    //These are the data types and variables
    int num1, num2;
    int Addition, Subtraction, Multiplication, Division, Modulus;

    //cin is used to GET input from the user and store it inside a variable
    //cout is used to SHOW output on the screen
    //The symbol >> is for cin (arrow pointing INTO the variable)
    //The symbol << is for cout (arrow pointing OUT to the screen)

    //These part of code asks the user for two numbers
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    //Now that we have num1 and num2, we can use them in arithmetic operators

    //These part of code is about addition
    Addition = num1 + num2;
    cout << "Addition: " << Addition << endl;

    //These part of code is about subtraction
    Subtraction = num1 - num2;
    cout << "Subtraction: " << Subtraction << endl;

    //These part of code is about multiplication
    Multiplication = num1 * num2;
    cout << "Multiplication: " << Multiplication << endl;

    //These part of code is about division
    //Take note: if num1 and num2 are both int, the decimal part gets dropped
    Division = num1 / num2;
    cout << "Division: " << Division << endl;

    //These part of code is about modulus
    //Modulus gives the REMAINDER left over after dividing num1 by num2
    Modulus = num1 % num2;
    cout << "Modulus: " << Modulus << endl;

    return 0;
}