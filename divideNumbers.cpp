/* Program written by Ryan Sullivan

This is practice problem 3 from chapter 3 of the book Jumping into C++ by Alex Allain

Write a program that performs division of two numbers read from the user and prints out an exact result.
Make sure to test your program with integers and decimal inputs.
*/

#include <iostream>
using namespace std;

int main(){

    //Division with int
    int wholeNumerator=0;
    int wholeDenominator=0;

    cout<<"This is a program for dividing. \nPlease input a whole numerator: ";
    cin>>wholeNumerator;
    cout<<"Please input a whole denominator: ";
    cin>>wholeDenominator;
    cout<<wholeNumerator<<"/"<<wholeDenominator<<"="<<wholeNumerator/wholeDenominator<<endl;

    //division with float
    float decimalNumerator=0.0;
    float decimalDenominator=0.0;

    cout<<"Please input a decimal numerator: ";
    cin>>decimalNumerator;
    cout<<"Please input a decimal denominator: ";
    cin>>decimalDenominator;
    cout<<decimalNumerator<<"/"<<decimalDenominator<<"="<<decimalNumerator/decimalDenominator;


}
