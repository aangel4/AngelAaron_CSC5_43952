/* 
 * File:   main.cpp
 * Author: Aaron Angel
 *
 * Created on March 8, 2015, 5:10 PM
 *      Purpose: 2nd Homework Problem
 */

#include <iostream>

using namespace std;

//User Libraries

//Sales Prediction

//Execution Begins here!

int main(int argc, char** argv) {
    
//Declare Variables
int TYsales,TgSales;
float sales;

//Assigned Values
TYsales=8.6E6; //total sales this Year
sales=.58; //Percentage in sales

//Calculate
TgSales = sales * TYsales;
        
//Output Everything
cout<<"Sales Prediction Problem"<<endl;
cout<<"Known/Given Values:"<<endl;
cout<<"Total Sales this Year = "<<TYsales<<endl;
cout<<"Percentage in Sales "<<sales<<"%"<<endl;
cout<<"Calculated Value"<<endl;
cout<<"Total in sales "<<TgSales<<endl;
        
     return 0;
}

