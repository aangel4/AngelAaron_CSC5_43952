/* 
 * File:   main.cpp
 * Author: Aaron Angel
 *
 * Created on March 17, 2015, 10:08 PM
 *      Purpose: Box Office Problem
 */
//System Libraries
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

//User Libraries
//Global Constants
//Function Prototype
//Execution Begins here!!
int main(int argc, char** argv) {
    //Declare Variables
    string MovieN;//Movie name
    float adult;//Total adults
    float child;//Total child
    float adultT=10.00;//Amount of adult Ticket
    float childT=6.00;//Amount of child ticket
    float GBO;//Gross box office
    float NBO;//Net box office
    float AmtPd;//Amount paid to distributor
    
    //Prompt the user for inputs
    cout<<"Input the name of the movie "<<endl;
    cin>>MovieN;
    cout<<"Input the amount of adult tickets sold"<<endl;
    cin>>adult;
    cout<<"Input the amount of child tickets sold"<<endl;
    cin>>child;
    
    //Calculations
    GBO=(adult*adultT)+(child*childT);
    NBO=GBO*.20;
    AmtPd=GBO-NBO;
    
    //Output Results
    
    cout<<"Movie Name"<<MovieN<<endl;
    cout<<"Adult Tickets Sold: "<<adult<<endl;
    cout<<"Child Tickets Sold: "<<child<<endl;
    cout<<setprecision(2)<<fixed;
    cout<<"Gross Box Office Profit: $"<<GBO<<endl;
    cout<<"Net Box Office Profit: $"<<NBO<<endl;
    cout<<"Amount Paid to Distributor: $"<<AmtPd<<endl;
    return 0;
}

