/* 
 * File:   main.cpp
 * Author: Aaron Angel
 * Purpose: Ocean Levels Problem
 * Created on April 6, 2015, 3:38 PM
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
    float OcnLvR=1.5;//Ocean Level rise Per year
    const char StrtYr=1;//Starting year
    const unsigned char EndYr=25;//Ending year
    unsigned short years;
//Table Header
        cout<<"Year Millimeters raised\n";
        cout<<"------------------------\n";
//For loop
    for (years=StrtYr;years<=EndYr;years++)
        
        cout<<years<<"\t\t"<<(OcnLvR*years)<<endl;
        
    return 0;
}

