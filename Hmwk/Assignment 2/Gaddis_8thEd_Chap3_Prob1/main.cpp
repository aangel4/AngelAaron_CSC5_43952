/* 
 * File:   main.cpp
 * Author: Aaron Angel
 *
 * Created on March 16, 2015, 10:13 AM
 *      Purpose: Miles Per Gallon Problem
 */
//System Libraries
#include <iostream>
#include <iomanip>

using namespace std;

//User Libraries
//Global Constants
//Function Prototypes
//Execution Starts Here!
int main(int argc, char** argv) {
    //Declare Variables
    float GalTank;//Gallons of Gallons of gas the Car can hold
    float Miles;
    float MPG;
 //Prompt the user for inputs
    cout<<"Enter the number of gas the car can hold"<<endl;
    cin>>GalTank;
    cout<<"Enter the number of miles used per full tank"<<endl;
    cin>>Miles;
 //Calculate variable
    MPG = Miles/GalTank;
 //Output Results
    cout<<"Total Miles Per Gallons is "<<MPG<<endl;
    

    return 0;
}

