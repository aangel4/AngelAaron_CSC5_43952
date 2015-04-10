/* 
 * File:   main.cpp
 * Author: Aaron Angel
 * Purpose: Population Problem
 * Created on April 9, 2015, 8:32 PM
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
    unsigned short AvgPop,numOrg,numday,inc=1;
    float CavgPop=.01;
    //Prompt the user for first input
    cout<<"Input the starting number of organisms "<<endl;
    cin>>numOrg;
    //first Input validation
    while (numOrg<2)
    {
        cout<<"Error, Please input a number greater than or equal to 2 "<<endl;
        cin>>numOrg;
    }
    //Prompt the user for second input
    cout<<"Input the average daily Population increase (as a percentage)"<<endl;
    cin>>AvgPop;
    //Second Input Validation
    while (AvgPop<0)
    {
        cout<<"Error, Please input a number greater than or equal to 0"<<endl;
        cin>>AvgPop;
    }
    //Prompt the user for third input
    cout<<"Input the number of days they will multiply "<<endl;
    cin>>numday;
    //Third Input Validation
    while (numday<1)
    {
        cout<<"Error, Please input a number greater than or equal to 1"<<endl;
        cin>>numday;
    }
    //Calculations
    CavgPop=AvgPop*CavgPop;
    //Table Header
    cout<<"Day     Size of Population"<<endl;
    cout<<"----------------------------"<<endl;
    //For loop
    for(unsigned short Sday=1;Sday<=numday;Sday++)
    {
        cout<<Sday<<"\t"<<((numOrg*CavgPop)+numOrg)*inc<<endl;
        inc++;
    }
    
        return 0;
}


