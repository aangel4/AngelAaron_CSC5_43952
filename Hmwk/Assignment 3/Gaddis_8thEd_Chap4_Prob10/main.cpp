/* 
 * File:   main.cpp
 * Author: Aaron Angel
 * Created on March 29, 2015, 8:04 PM
 *      //Purpose: Days in Month Problem
 */
//System Libraries
#include <iostream>

using namespace std;

//User Libraries

//Global Constants

//Function Prototype

//Execution Begins Here!!
int main(int argc, char** argv) {
//Declare Variables
    unsigned short Rnum1=247,Rnum2=129;//Random number 1 and 2
    unsigned short Uans,Cans;//User Answer, Correct Answer
    //Prompt the user for inputs
    cout<<"Solve for this addition problem "<<endl;
    cout<<"   "<<Rnum1<<endl;
    cout<<"+  "<<Rnum2<<endl;
    cout <<"¯¯¯¯¯¯"<<endl;
    cin>>Uans;
//Calculations
    Cans=Rnum1+Rnum2;
    //If statement
    if (Uans==Cans)
        cout<<"Congratulations, the answer is correct "<<endl;
    else 
        cout<<"The correct answer is "<<Cans<<endl;
    
    return 0;
}

