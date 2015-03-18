/* 
 * File:   main.cpp
 * Author: Aaron Angel
 *
 * Created on March 17, 2015, 8:48 PM
 *      //Purpose: Ingredient Adjuster Problem
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
    float Csgr=1.5; //Cups of Sugar
    float Cbtr=1;// Cup of butter
    float Cflr=2.75;//Cups of Flour
    float totalC=48;//Total Cookies
    float Cinput;//Cookie Input
    float Nsgr;//New Cups of sugar
    float Nbtr;//New cups of butter
    float Nflr;//New cups of flout
    
    //Prompt the User for inputs
    cout<<"Input amount of cookies to make"<<endl;
    cin>>Cinput;
    //Calculations
    Nsgr=(Csgr/totalC)*Cinput;
    Nbtr=(Cbtr/totalC)*Cinput;
    Nflr=(Cflr/totalC)*Cinput;
    //Output Results
    cout<<setprecision(2)<<fixed;
    cout<<"Number of cups of sugar needed for cookies "<<Nsgr<<"cups"<<endl;
    cout<<"Number of cups of butter needed for cookies "<<Nbtr<<"cups"<<endl;
    cout<<"Number of cups of flout needed for cookies "<<Nflr<<"cups"<<endl;
    

    return 0;
}

