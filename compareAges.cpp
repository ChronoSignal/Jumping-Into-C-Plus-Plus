/*
This program was written by Ryan Sullivan

This is practice problem 1 of chapter 4 from the book Jumping into C++ by Alex Allain

Ask the user for two user's ages and indicate who is older; behave differently if they are over 100.
*/

#include <iostream>
using namespace std;


int main(){
    int ageUser1=0;
    int ageUser2=0;

    cout<<"Welcome to the age comparison program."<<endl;
    cout<<"Please put in the age of user1: ";
    cin>>ageUser1;

    cout<<"Please put in the age of user2: ";
    cin>>ageUser2;

    if(ageUser1>100 && ageUser2>100){
        cout<<"Wow, these guys are old!!!"<<endl;
    }
    else if(ageUser1>ageUser2){
        cout<<"User1 is older than user2"<<endl;
    }
    else{
        cout<<"User2 is older than User1"<<endl;
    }

    return 0;
}//end of main
