/* 
 * File:   main.cpp
 * Author: Aaron Angel
 * Created on April 27, 2015, 8:13 AM
 */

//System Libraries
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

float rtirmnt(float ,float ,int , float );//for-loop

//Execution Begins Here!!
int main(int argc, char** argv) {
   
//Declare Variables
    float pv=0.0f;//Present Value $'s
    float ir=0.05f;//Interest Rate %/yr
    float fdep=0.2f;//Babylonians say 10%
    float salary=36000;//Salary $/year
    //calculate our savings required
    float savReq=salary/ir;//Savings require $'s
    //Ouput all initial conditions
     cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Investment Rate from MuniBonds ="<<ir*100<<"%"<<endl;
    cout<<"Salary = $"<<salary<<endl;
    cout<<"Yearly Retirement Save = $"<<salary*fdep<<endl;
    cout<<"Savings Required to Retire = $"<<savReq<<endl;
    cout<<"Year Ret Savings"<<endl;
    float retSave=0.0f;
//Output our yearly retirement savings
    for(int year=1;retSave<savReq;year++){
        retSave=rtirmnt(pv,ir,year,salary*fdep);
        
        cout<<setw(2)<<year<<setw(13)<<retSave<<endl;
    }
    //Exit stage right
    return 0;
}

//Functions for Future Value Calculation
//Inputs
//      p-> Present Value $'s
//      i-> Interest Rate %/Compounding Period
//      n-> Compounding Period yr's
//      d-> Deposit yearly 
//outputs
//      fv-> Future Values

    
    float rtirmnt(float p,float i,int n, float d){
        for(int year=1;year<=n;year++){
            p*=(1+i);
            p+=d;
        }
        return p;
    }
        
     
    