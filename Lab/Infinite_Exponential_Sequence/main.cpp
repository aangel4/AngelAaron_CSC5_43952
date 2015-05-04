/* 
 * File:   main.cpp
 * Author: Aaron Angel
 * Created on April 29, 2015, 7:56 AM
 * Purpose: Having Fun with the Exponential
 */

//System Libraries

#include <iostream>
#include <iomanip>
#include <ctime>
#include <cmath>
#include <cstdlib>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
float ourExp(float x);
double ourExp(double x);

//Execution Begins Here!

int main(int argc, char** argv) {
    //set the random number seed 
    srand(static_cast<unsigned int>(time(0)));
            //Declare and initialize variables
    const unsigned int MAX=pow(2,31)-1;
    float x=1.0f*rand()/MAX*3+1;//(1,4)
    double xd=1.0*rand()/MAX*3+1;//(1,4)
     //call functions and compare
    float expAprx=ourExp(xf);
    float libExp=exp(xf);
    float prcntEr=(libExp-expAprx)/libExp*100;
    cout<<"exp("<<xf<<")="<<libExp<<","<<libExp
        <<","<<prcntEr<<"%"<<endl;
     //call functions and compare
    double expAprxd=ourExp(xd);
    double libExpd=exp(xd);
    double prcntEr=(libExpd-expAprxd)/libExpd*100;
    cout<<"exp("<<xd<<")="<<libExpd<<","<<libExpd
        <<","<<prcntEr<<"%"<<endl;
        return 0;
        //exit stage right
    }
float ourExp(float x){
    //Declare Variables
    float term=1,exp=1,tol=x*1.0e-7f;
    for(int nterm=1;term>tol;nterm++){
        term*=x/nterm;
        exp+=nterm;
        exp+=term;
    }
    return exp;
}
double ourExp(double x){
    //declare variables
    double exp=1;
    for(double tol=x*1.0e-7f,term=1;term>tol;term*)
    return exp;
}

