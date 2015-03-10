/* 
 * File:   main.cpp
 * Author: Aaron Angel
 *
 * Created on March 8, 2015, 7:31 PM
 *      Purpose: 3rd Homework Problem
 */

#include <iostream>

using namespace std;

//User Libraries

//Global Constants
//Function Prototypes
//Sales Tax

int main(int argc, char** argv) {
    
    //set floating point output
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    
    //Declare Variables
 float Pprice,TsaleP,TSST,TCST,
 SST,CST;

//Assigned Values
Pprice=95.00; //Total Purchase Price
SST=4; //State Sales Tax
CST=2; //County Sales Tax

//Calculate
TSST = (SST/100) * Pprice;//Total State Sale Tax
TCST = (CST/100) * Pprice;//Total County Sale Tax
TsaleP = TCST + TSST;//Total sale tax

//Output Everything
cout<<"Sales Tax Problem"<<endl;
cout<<"Known/Given Values:"<<endl;
cout<<"Total Purchase Price = $"<<Pprice<<endl;
cout<<"State Sales Tax "<<SST<<"%"<<endl;
cout<<"County Sales Tax "<<CST<<"%"<<endl;
cout<<"Calculated Values"<<endl;
cout<<"Total State Sales Tax $"<<TSST<<endl;
cout<<"Total County Sales Tax $"<<TCST<<endl;
cout<<"Total Sales Tax $"<<TsaleP<<endl;

    return 0;
}

