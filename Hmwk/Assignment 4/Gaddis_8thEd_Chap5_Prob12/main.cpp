/* 
 * File:   main.cpp
 * Author: Aaron Angel
 * Purpose: Celsius to Fahrenheit Table
 * Created on April 9, 2015, 7:29 PM
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
    const char Scel=1;//Starting Celsius 
    const unsigned char EndCel=20;//Ending Celsius
    cout<<"Table chart shows Celsius conversion to Fahrenheit "<<endl;
    unsigned short cel;//Celsius
//Table header
    cout<<"Celsius  Fahrenheit "<<endl;
    cout<<"---------------------"<<endl;
//For loop
    for(cel=Scel;cel<=EndCel;cel++)
        cout<<cel<<"\t\t"<<(cel*1.8)+32<<endl;
    
        
    return 0;
}
