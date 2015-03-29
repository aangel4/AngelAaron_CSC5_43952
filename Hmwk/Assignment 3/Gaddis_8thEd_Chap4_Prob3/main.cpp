/* 
 * File:   main.cpp
 * Author: Aaron Angel
 *
 * Created on March 28, 2015, 7:16 PM
 *      //Purpose: Magic Dates Problem
 */
//User Libraries
#include <iostream>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    unsigned short month,day,year; 
    //Prompt the User for Inputs
    cout<<"Input a month in numeric form "<<endl;
    cin>>month;
    cout<<"Input a day of the month "<<endl;
    cin>>day;
    cout<<"Input a two-digit year "<<endl;
    cin>>year;
    //if else statement
    if (month*day==year)
        cout<<"The date is magic"<<endl;
    else 
        cout<<"The date is not magic"<<endl;
    
    return 0;
}

