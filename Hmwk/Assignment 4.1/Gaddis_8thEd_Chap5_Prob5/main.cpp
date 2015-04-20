/* 
 * File:   main.cpp
 * Author: Aaron Angel
 * Purpose: Membership fees increase problem
 * Created on April 7, 2015, 10:17 PM
 */
//System Libraries

#include <iostream>
#include <iomanip>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!!
int main(int argc, char** argv) {
//Declare Variables
    unsigned short memship=2500;//yearly membership cost
    unsigned short Syear=1;//Starting year
    const char Eyear=6;//Ending year
    float IncsMem=.04;//Increase membership percentage
    unsigned short NewMem,NewInc;//New membership rate, New Increase 
    
//Table Header
    cout<<"Year New Projected Rate"<<endl;
    cout<<"--------------------------"<<endl;
//Calculation
    NewInc=(memship*IncsMem);
    NewMem=NewInc+memship;
    
//while loop
    while (Syear<=Eyear)
    {
        cout<<Syear<<"\t\t"<<NewMem<<endl;
        Syear++,NewMem+=NewInc;
    }  
    return 0;
}

