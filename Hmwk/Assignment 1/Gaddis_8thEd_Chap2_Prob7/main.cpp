/* 
 * File:   main.cpp
 * Author: Aaron Angel
 *
 * Created on March 9, 2015, 12:20 AM
 *      //Purpose: 7th Homework Problem
 */

#include <iostream>

using namespace std;

//User Libraries
//Ocean Levels


int main(int argc, char** argv) {

    //Declare Variables
float Mil_yr; //Rising Ocean Level in Millimeters Per Year
float MiL5yr; //Rising Ocean Level in Millimeter for 5 years
float MiL7yr; //Rising Ocean Level in Millimeter for 7 years
float MiL10yr; //Rising Ocean Level in Millimeter for 10 years
 
    //Assigned Values
Mil_yr = 1.5;
MiL5yr = 5;
MiL7yr = 7;
MiL10yr = 10;    
        
    //Calculate
MiL5yr = MiL5yr * Mil_yr;
MiL7yr = MiL7yr * Mil_yr;
MiL10yr = MiL10yr * Mil_yr;
        
        //Output Everything
cout<<"Ocean Levels Problem"<<endl;
cout<<"Known/Given Known Values: "<<endl;
cout<<"Rising Ocean Lever Per year = "<<Mil_yr<<" millimeter"<<endl;
cout<<"Calculated Values"<<endl;
cout<<"Rising Ocean Level in 5 years = "<<MiL5yr<<" Millimeters"<<endl;
cout<<"Rising Ocean Level in 7 years = "<<MiL7yr<<" Millimeters"<<endl;
cout<<"Rising Ocean Level in 10 years = "<<MiL10yr<<" Millimeters"<<endl;

    return 0;
}

