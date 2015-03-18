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
unsigned char CNVPCT=100;
//Function Prototype
//Execution Begins here!!
int main(int argc, char** argv) {
    //Declare Variables
    string MovieN;//Movie name
    unsigned short adult;//Total adults
    unsigned short child;//Total child
    unsigned short adultT=10.00;//Amount of adult Ticket
    unsigned short childT=6.00;//Amount of child ticket
    float GBO;//Gross box office
    float NBO;//Net box office
    float AmtPd;//Amount paid to distributor
    
    //Prompt the user for inputs
    cout<<"Input the name of the movie "<<endl;
    getline(cin, MovieN);
    cout<<"Input the amount of adult tickets sold"<<endl;
    cin>>adult;
    cout<<"Input the amount of child tickets sold"<<endl;
    cin>>child;
    
    //Calculations
    GBO=(adult*adultT)+(child*childT);
    NBO=(GBO)*(20/static_cast<float>(CNVPCT));
    AmtPd=GBO-NBO;
    
    //Output Results
    
    cout<<"Movie Name "<<right<<setw(30)<<MovieN<<endl;
    cout<<"Adult Tickets Sold: "<<setw(15)<<adult<<endl;
    cout<<"Child Tickets Sold: "<<setw(15)<<child<<endl;
    cout<<setprecision(2)<<fixed;
    cout<<"Gross Box Office Profit:"<<setw(7)<<"$"<<GBO<<endl;
    cout<<"Net Box Office Profit:"<<setw(9)<<"$"<<setw(2)<<NBO<<endl;
    cout<<"Amount Paid to Distributor: "<<setw(3)<<"$"<<AmtPd<<endl;
    return 0;
}

