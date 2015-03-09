/* 
 * File:   main.cpp
 * Author: Aaron Angel
 *
 * Created on March 8, 2015, 10:24 PM
 *      Purpose: 5th Homework Problem
 */

#include <iostream>

using namespace std;

// user Libraries
//Global Constants
//Function Prototypes
// Miles Per Gallon
// Execution Begins here!

int main(int argc, char** argv) {
    
    //Declare Variables
unsigned short Gal_Tnk; //Gallons of Gasoline in car tank
unsigned short Mile_D; //Miles Driven before Refueling
unsigned short MPG; //Miles Per Gallon the car gets

//Assigned Values
Gal_Tnk = 15; //Gallons in Tank
Mile_D = 375; 

//Calculate Everything
MPG = Mile_D / Gal_Tnk;

//Output Everything
cout<<"Miles Per Gallon Problem"<<endl;
cout<<"Known/Given Values:"<<endl;
cout<<"Gallons of Gasoline in Car Tank "<<Gal_Tnk<<endl;
cout<<"Miles Driven Before Refueling "<<Mile_D<<endl;
cout<<"Calculated Values"<<endl;
cout<<"Miles Per Gallon the car gets = "<<MPG<<endl;


    return 0;
}

