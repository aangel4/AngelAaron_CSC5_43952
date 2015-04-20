/* 
 * File:   main.cpp
 * Author: Aaron Angel
 * Purpose: Pennies for pay Problem
 * Created on April 8, 2015, 11:57 AM
 */

//System Libraries

#include <iostream>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!!
int main(int argc, char** argv) {
//Declare Variables
    unsigned short Idays;//input days
    float pennies=.01;//pennies
    //Prompt the user for inputs
    cout<<"Input the number of days worked this pay period"<<endl;
    cin>>Idays;
    //Input validation
    while (Idays<1)
    {
        cout<<"Error, Please input a number greater than 0 "<<endl;
        cin>>Idays;
    }
    //Header Table
    cout<<"Days     Salary"<<endl;
    cout<<"--------------"<<endl;
    //For loop
    for(unsigned short Sday=1;Sday<=Idays;Sday++)
    {
        cout<<Sday<<"\t$"<<pennies<<endl;
        pennies*=2;
    }
    
        return 0;
}

