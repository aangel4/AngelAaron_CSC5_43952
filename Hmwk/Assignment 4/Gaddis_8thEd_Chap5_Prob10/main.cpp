/* 
 * File:   main.cpp
 * Author: Aaron
 *
 * Created on April 8, 2015, 4:14 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
//Declare Variables
    unsigned short yrs,months,rainF;
    //Prompt the user for inputs
   cout<<"Input number of years to average the rainfall "<<endl;
   cin>>yrs;
   //Input validation
   while (yrs<1)
   {
       cout"Error, Please input a number greater than 1 for years"<<endl;
       cin>>yrs;
   }
       for (char Smos=1;Smos<=12;Smos++)
       {
           cout<<"Input the number in inches of rainfall for the month"<<endl;
           
           
           
    return 0;
}

