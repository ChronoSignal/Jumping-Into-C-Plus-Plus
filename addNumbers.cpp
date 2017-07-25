/*
This program is written by Ryan Sullivan

This is practice problem 2 from the book Jumping into C++ by Alex Allain

Write a program that reads in two numbers and adds them together
*/

#include <iostream>
using namespace std;

int main(){
    cout<<"This program is designed to add two integers together\n";

    int number1=0;
    int number2=0;

    cout<<"Please enter the first integer: ";
    cin>>number1;

    cout<<"Please enter the second integer: ";
    cin>>number2;

    cout<<number1<<"+"<<number2<<"="<<number1+number2;
}
