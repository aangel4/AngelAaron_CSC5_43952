/* 
 * File:   main.cpp
 * Author: Aaron Angel
 *      //Purpose: 6th Homework Problem
 *
 * Created on March 8, 2015, 11:33 PM
 */

#include <iostream>

using namespace std;

//User Libraries
//Global Constants
//Function Prototypes
//Distance Per Tank of Gas

int main(int argc, char** argv) {
    
    //Declare Variables
unsigned short Gal_Tnk;//Gallons of Gasoline in Tank
float MPGcity; //Miles Per Gallon in town Driving
float MPGhway; //Miles Per Gallon in Highway Driving
float DisCity; // Distance car can travel in one tank of gas in town
float DisHway; //Distance car can travel in one tank of gas in Highway

    //Assigned Values
Gal_Tnk = 20;
MPGcity = 23.5;
MPGhway = 28.9;

    //Calculate
DisCity = Gal_Tnk * MPGcity;
DisHway = Gal_Tnk * MPGhway;

    //Output Everything
cout<<"Distance Per Tank of Gas Problem"<<endl;
cout<<"Known/Given Values:"<<endl;
cout<<"Gallons of Gasoline in vehicles Tank = "<<Gal_Tnk<<endl;
cout<<"Miles Per Gallon in Town Driving = "<<MPGcity<<endl;
cout<<"Miles Per Gallon in Highway Driving = "<<MPGhway<<endl;
cout<<"Calculated Values"<<endl;
cout<<"Distance Car can Travel on One Tank of Gas in town = "<<DisCity<<endl;
cout<<"Distance Car can Travel on One Tank of Gas in Highway = "<<DisHway<<endl;




    return 0;
}

