/* 
 * File:   main.cpp
 * Author: Aaron Angel
 * Purpose: Calculate Distance Travled
 * Created on April 8, 2015, 9:18 AM
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
    unsigned short speed,iTime,acu=0;//Distance
    //Prompt the User for input
    cout<<"Input the speed in miles per hour "<<endl;
    cin>>speed;
    //Input Validation
    while (speed<0)
        {
            cout<<"Error, Please input a number greater than or equal to 0 "<<endl;
            cin>>speed;
        }
    //Prompt User for time in hours
    cout<<"Input the time in hours traveled "<<endl;
    cin>>iTime;
    //Input validation
    while (iTime<1)
        {
            cout<<"Error Please input a number greater than or equal to 1"<<endl;
            cin>>iTime;
        }
    //Calculations
    
    
    //Header Table
    cout<<"Hour     Distance Traveled "<<endl;
    cout<<"--------------------------"<<endl;
    for (unsigned short time=1;time<=iTime;time++)
    {
        acu+=speed;
        cout<<time<<"\t\t"<<acu<<endl;
    }
    return 0;
}

