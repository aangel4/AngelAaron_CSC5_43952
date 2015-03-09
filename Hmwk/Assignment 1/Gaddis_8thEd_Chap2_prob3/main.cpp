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
unsigned char CNVPCT=100;
//Sales Tax

int main(int argc, char** argv) {
    
    //Declare Variables
 float Pprice,TsaleP,TSST,TCST,
 SST,CST;

//Assigned Values
Pprice=95.00; //Total Purchase Price
SST=4; //State Sales Tax
CST=2; //County Sales Tax

//Calculate
TSST = (SST/CNVPCT) * Pprice;
TCST = (CST/CNVPCT) * Pprice;
TsaleP = TCST + TSST;

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

