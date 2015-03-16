/* 
 * File:   main.cpp
 * Author: Aaron Angel
 *
 * Created on March 16, 2015, 12:55 PM
 *      Purpose: Average Rainfall Problem
 */
//System Libraries
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

//User Libraries
//Global Constants
//Function Prototypes
int main(int argc, char** argv) {
    //Declare Variables
   string name_1,name_2,name_3;//Month name
   float month1,month2,month3;//Rainfall in inches
   float AVGrain;//Average rainfall
    //Prompt the user for inputs
   cout<<"Input name of month 1"<<endl;
   cin>>name_1;
   cout<<"Input amount of rainfall (in inches) "<<endl;
   cin>>month1;
   cout<<"input name of month 2"<<endl;
   cin>>name_2;
   cout<<"input amount of rainfall (in inches)"<<endl;
   cin>>month2;
   cout<<"input name of month 3"<<endl;
   cin>>name_3;
   cout<<"input amount of rainfall (in inches)"<<endl;
   cin>>month3;
   //Calculations
   AVGrain=(month1+month2+month3)/3;
   //Output results
   cout<<setprecision(1)<<fixed;
   cout<<"The Average rainfall is "<<AVGrain<<" inches"<<endl;
   

    return 0;
}

