/* 
 * File:   main.cpp
 * Author: Aaron Angel
 *
 * Created on March 29, 2015, 10:21 AM
 *      //Purpose: Time Calculator Problem
 */
//System Libraries
#include <iostream>
#include <iomanip>

using namespace std;

//User Libraries

//Global Constants
unsigned char Min=60;
unsigned short Hr=3600;
unsigned int Day=86400;
//Function Prototypes

//Execution Begins Here!!
int main(int argc, char** argv) {
    //Declare Variables
    float sec,min,hr,day;//Seconds,minutes,hours,days
    //Prompt the user for inputs
    cout<<"Input a number of seconds"<<endl;
    cin>>sec;
    //calculations
    min=sec/Min,hr=sec/Hr,day=sec/static_cast<float>(Day);
    //If else statement
    cout<<setprecision(2)<<fixed;
    if (sec>=60&&sec<=3600)
            cout<<min<<" Minutes in seconds"<<endl;
    else if (sec>=3600&&sec<=86400)
        cout<<hr<<" Hours in seconds"<<endl;
    else if (sec>=86400)
        cout<<day<<" Days in seconds"<<endl;
    else
        cout<<"Pleas input a value more than 60 seconds"<<endl;
    
    return 0;
}

