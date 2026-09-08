#include<iostream>
using namespace std;

int main(){
    //These are the data types and variables
    int Addition, Subtraction, Multiplication, Division, Modulus;

    // For arithmetic operators the data type you will use is int, float, and double

    //These part of code is about addition
    //First thing you do is call the variable(The variable is the name you assigned above)
    //Secondly is to put the equal sign then the numbers you want to add
    Addition = 1 + 1;
    cout << "Addition: " << Addition << endl;

    //These part of code is about subtraction
    //Same process as addition, but this time we use the minus sign
    Subtraction = 5 - 2;
    cout << "Subtraction: " << Subtraction << endl;

    //These part of code is about multiplication
    //In C++ we don't use "x" for multiply, we use the asterisk symbol (*)
    Multiplication = 4 * 3;
    cout << "Multiplication: " << Multiplication << endl;

    //These part of code is about division
    //We use the forward slash (/) for division
    //Take note: if both numbers are int, the answer will drop the decimal part
    Division = 10 / 2;
    cout << "Division: " << Division << endl;

    //These part of code is about modulus
    //Modulus uses the percent sign (%) and it gives you the REMAINDER after division
    //Example: 10 divided by 3 is 3 remainder 1, so 10 % 3 = 1
    Modulus = 10 % 3;
    cout << "Modulus: " << Modulus << endl;

    return 0;
}