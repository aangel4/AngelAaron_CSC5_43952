/* 
 * File:   main.cpp
 * Author: Aaron Angel
 *
 * Created on March 16, 2015, 11:28 AM
 *      Purpose: Stadium Seating Problem
 */
//System Libraries
#include <iostream>
#include <iomanip>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!!
int main(int argc, char** argv) {
    //Declare Variables
    char ClassA =15; //Class A Seats
    char ClassB =12; //Class B Seats
    char ClassC =9; //Class C Seats
    unsigned short stA,stB,stC;
    float t1,t2,t3;// Totals ticket 1,2,3
    float TtlSale;//Total ticket sales
    //Prompt the user for inputs
    cout<<"How many tickets for class A seats were sold "<<endl;
    cin>>stA;
    t1=stA*ClassA;
    cout<<"How many tickets for class B seats were sold "<<endl;
    cin>>stB;
    t2=stB*ClassB;
    cout<<"How many tickets for class C seats were sold "<<endl;
    cin>>stC;
    t3=stB*ClassB;
    //Calculate variables
    TtlSale =t1+t2+t3;
    //Output Results
    cout<<setprecision(2)<<fixed;
    cout<<"Total income generated from ticket sales $"<<TtlSale<<endl;
    return 0;
}

