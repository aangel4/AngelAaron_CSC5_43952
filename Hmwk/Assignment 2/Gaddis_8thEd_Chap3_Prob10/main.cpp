/* 
 * File:   main.cpp
 * Author: Aaron Angel
 *
 * Created on March 18, 2015, 12:37 PM
 *      Purpose: How Much Insurance Problem
 */

//System Libraries
#include <iostream>
#include <iomanip>

using namespace std;

//User Libraries

//Global Constants
unsigned char CNVPCT=100;

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float Rcost;//Replacement cost
    float MinIns=80;//Minimum home insurance (%)
    float MinInsR;//Minimum Insurance to buy on property
    //Prompt the user for inputs
    cout<<"Input the replacement cost of building:"<<endl;
    cin>>Rcost;
    
    //Calculations
    MinInsR=Rcost/(static_cast<float>(CNVPCT)/MinIns);
    
    //Output Results
    cout<<setprecision(2)<<fixed;
    cout<<"Minimum Amount of Insurance that should be Purchased $"<<MinInsR<<endl;
            
        

    return 0;
}

