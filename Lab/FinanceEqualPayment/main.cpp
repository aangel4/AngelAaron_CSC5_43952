/* 
 * File:   main.cpp
 * Author: Aaron Angel
 * Created on April 27, 2015, 9:05 AM
 */

//System Libraries
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

float blnPmnt(float,float,int,float);//for-loop
float eqlPmnt(float,float,int,float);//For -loop 
float eqlPmnt1(float,float,int);
//Execution Begins Here!!
int main(int argc, char** argv) {
    //Declare Variables
    float purPrce=1e4f;//$10k
    float dwnPymt=1e-1f;//Down Payment % of purchase price
    float intRate=3.29e-2;//Interest Rate /yr
    int nMnths=60;//Number of months
    float penny=0.01f;//Value of a penny
    float halfPny=0.005f;// value of half a penny
    //Calculate the amount to finance
    float finance=purPrce*(1-dwnPymt);
    //Output all the initial conditions
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Purchase Price    = $"<<purPrce<<endl;\
    cout<<"Down Payment      = $"<<purPrce*dwnPymt<<endl;
    cout<<"Interest Rate     =  "<<intRate*100<<"%"<<endl;
    cout<<"Months to Finance =  "<<nMnths<<endl;
    cout<<"Amount Financed   =  "<<finance<<endl;
    //Calculate the Monthly Payment without interest
    float mnPmnt=finance/nMnths;//Payment without inerest
    //Calculate the Balloon Payment which tending to zero
    float bln=0,incrmnt=0;
    do{
        mnPmnt+=incrmnt;
        mnPmnt=static_cast<int>((mnPmnt+halfPny)*100)/penny;//Exact Pennies
        bln=blnPmnt(finance,intRate/12,nMnths,mnPmnt);
        incrmnt=bln/nMnths;    
    }while(incrmnt>penny||incrmnt<-penny);
    //Balloon Payment and Monthly Payment
    cout<<"Monthly Payment   = $"<<mnPmnt<<endl;
    cout<<"Balloon Payment   = $"<<bln<<endl;
    //Balloon Payment and Monthly Payment
    cout<<"Monthly Payment   = $"<<eqlPmnt(finance,intRate/12,nMnths,mnPmnt)<<endl;
    cout<<"Balloon Payment   = $"<<eqlPmnt1(finance,intRate/12,nMnths)<<endl;
    //Exit Stage right
    return 0;
}

//Balloon Payment Function
//Input
//f->Financed Amount $'s
//i->Interest Rate/month
//n->Number of months
//p->Monthly payment
//Output
//  bln->Balloon Payment $'s
float blnPmnt(float f,float i,int n,float p){
    for(int month=1;month<n;month++){
        f*=(1+i);//Increase due to the interest rate
        f-=p;    //Decrease due to payment
    }
    return f;//Balloon Payment
}

float eqlPmnt(float f,float i,int n){
    //Calculate the Monthly Payment without interest
    float mnPmnt=f/n;//Payment without inerest
    float penny=0.01f;//Value of a penny
    float halfPny=0.005f;// value of half a penny
    //Calculate the Balloon Payment which tending to zero
    float bln=0,incrmnt=0;
    do{
        mnPmnt+=incrmnt;
        mnPmnt=static_cast<int>((mnPmnt+halfPny)*100)/penny;//Exact Pennies
        bln=blnPmnt(f,i,n,mnPmnt);
        incrmnt=bln/n;    
    }while(incrmnt>penny||incrmnt<-penny);
    return mnPmnt;
}

float eqlPmnt1 (float f, float i, int n){
    float temp=pow((1+i),n);
    return i*temp*f/(temp-1);
}