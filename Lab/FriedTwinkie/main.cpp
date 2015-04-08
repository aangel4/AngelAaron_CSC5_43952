/* 
 * File:   main.cpp
 * Author: Aaron Angel
 * Purpose: To gain weight, become a public health 
 * hazard, and 
 * Created on April 8, 2015, 7:53 AM
 */
//System Libararies

#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!!
int main(int argc, char** argv) {
//Declare Variables
    const int size=80;
    char input[size]="";
    unsigned short totChng=0,pTwnke=350;
    char nQtrs,nDimes,nNikels;
    //Prompt the user for input
    cout<<"This is a fried Twinkie Machine"<<endl;
    cout<<"Fried Twinkies Cost $3.50"<<endl;
    cout<<"Input your change as "<<endl;
    cout<<"Dollar, Quarter, Dime, Nickles"<<endl;
    do{
        cout<<"Input coins/change"<<endl;
        cin>>input;
        cout<<input<<endl;
        if (strcmp(input,"Dollar")==0){
            totChng+=100;
        }else if (strcmp(input,"Quarter")==0){
            totChng+=25;
        }else if (strcmp(input,"Dime")==0){
            totChng+=10;
        }else if (strcmp(input,"Nickle")==0){
            totChng+=5;
        }else{
            cout<<"No Slugs Allowed"<<endl;
        }
        cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Total Change = $"<<totChng/100.0f<<endl;
    }while(totChng<pTwnke);
    //Give Twinkie the change
    cout<<endl<<"Here is your Fried Twinkie"<<endl;
    totChng-=pTwnke;
    cout<<"Your change is = $"<<totChng/100.0f<<endl;
    //How Many Quarters
    nQtrs=totChng/25;
    if(nQtrs>0)cout<<static_cast<int>(nQtrs)<<" Quarters Change"<<endl;
    //How many dimes
    totChng-=nQtrs*25;
    nDimes=totChng/10;
    if(nDimes>0)cout<<static_cast<int>(nDimes)<<" Dimes Change"<<endl;
    //How Many Nickels
    totChng-=nDimes*10;
    nNikels=totChng/5;
    if(nNikels>0)cout<<static_cast<int>(nNikels)<<" Nickels Change"<<endl;
    //Exit Stage Right
    return 0;
}

