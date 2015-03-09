/* 
 * File:   main.cpp
 * Author: Aaron Angel
 *
 * Created on March 8, 2015, 8:18 PM
 *      Purpose: 4th Homework Problem
 */

#include <iostream>

using namespace std;

    //User Libraries
    //Global Constants
    unsigned char CNVPCT=100;
    //Total Purchase
int main(int argc, char** argv) {
    
     //Declare Variables
float Pitem_1, Pitem_2, Pitem_3, Pitem_4, Pitem_5,SaleTax;
float SbTotal; // Subtotal of Sale
float Total; //Grand Total
unsigned short TsleTax; //Total Sales Tax

//Assigned Values
Pitem_1 = 15.95; //Price of Item 1
Pitem_2 = 24.99; //Price of Item 2
Pitem_3 = 6.95;  //Price of Item 3
Pitem_4 = 12.95; //Price of Item 4
Pitem_5 = 3.95;  //Price of Item 5
SaleTax = 7;   //Sales Tax

//Calculate
SbTotal = Pitem_1+Pitem_2+Pitem_3+Pitem_4+Pitem_5;
TsleTax = SbTotal * (SaleTax/CNVPCT);
Total = SbTotal + TsleTax;

//Output Everything
cout<<"Total Purchase Problem"<<endl;
cout<<"Known/Given Values:"<<endl;
cout<<"Price of Item 1 = $"<<Pitem_1<<endl;
cout<<"Price of Item 2 = $"<<Pitem_2<<endl;
cout<<"Price of Item 3 = $"<<Pitem_3<<endl;
cout<<"Price of Item 4 = $"<<Pitem_4<<endl;
cout<<"price of Item 5 = $"<<Pitem_5<<endl;
cout<<"Sales Tax = "<<SaleTax<<"%"<<endl;
cout<<"Calculated Values"<<endl;
cout<<"Subtotal of Sale = $"<<SbTotal<<endl;
cout<<"Total Sales Tax $"<<TsleTax<<endl;
cout<<"Grand Total $"<<Total<<endl;

    return 0;
}

