/* 
 * File:   main.cpp
 * Author: Aaron Angel
 *
 * Created on March 9, 2015, 1:10 PM
 *      Purpose: 10th Homework Problem
 */

#include <iostream>

using namespace std;

//User Libraries
//Global Constants
unsigned short CNVPCT=100;
//Function Prototypes

int main(int argc, char** argv) {
    
    //Declare variables
    float MealChg,TaxRte,Tip;
    float TaxAmt; //Total Tax Amount
    float TipAmt; //Total Tip Amount
    float TotalBl; //Total Bill

    //Assigned Values
    MealChg=88.67; //Cost for meal
    TaxRte=6.75; //Tax Rate
    Tip=20; //tip rate
    
    //Calculate
    TaxAmt=(MealChg/CNVPCT)*TaxRte;
    TipAmt=(MealChg/CNVPCT)*Tip+TaxAmt;
    TotalBl=MealChg+TaxAmt+TipAmt;
    
    //Output Everything
    cout<<"Restaurant Bill Problem"<<endl;
    cout<<"Total Tax Rate= "<<TaxRte<<"%"<<endl;
    cout<<"Total Tip Rate= "<<Tip<<"%"<<endl;
    cout<<"Total Meal Cost= $"<<MealChg<<endl;
    cout<<"Total Tax Amount= $"<<TaxAmt<<endl;
    cout<<"Total Tip Amount= $"<<TipAmt<<endl;
    cout<<"Total Bill Amount= $"<<TotalBl<<endl;
    return 0;
}

