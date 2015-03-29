/* 
 * File:   main.cpp
 * Author: Aaron Angel
 *
 * Created on March 29, 2015, 9:39 AM
 *      //Purpose: Mass and weight problem
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
    float weight,mass;
//Prompt the User for inputs
    cout<<"Input an object's mass "<<endl;
    cin>>mass;
//Calculations
weight=mass*9.8;  
//If else statement
if (weight>1000)
    cout<<"The object is too heavy"<<endl;
else if (weight<10)
    cout<<"The object is too light"<<endl;
else
    cout<<"The object's weight is normal"<<endl;
         
    return 0;
}

