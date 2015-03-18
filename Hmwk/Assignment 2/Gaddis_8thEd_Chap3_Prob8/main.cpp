/* 
 * File:   main.cpp
 * Author: Aaron Angel
 *
 * Created on March 17, 2015, 11:57 PM
 *      //Purpose: How Many Widgets Problem
 */
//System Libraries

#include <iostream>
#include <iomanip>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {
    //Declare Variables
    float pallet;//Pallet weight
    float wigtlbs=12.5;//widget weight in pounds
    float Pwidget;//total pallet and widget weight
    unsigned short widget;// amount of widgets
    //Prompt the user for inputs
    cout<<"Input Pallet Weight"<<endl;
    cin>>pallet;
    cout<<"Input Amount of Widgets"<<endl;
    cin>>widget;
    //Calculations
    Pwidget=pallet+(wigtlbs*widget);
    
    //Output Results
    cout<<setprecision(2)<<fixed;
    cout<<"Total Pallet and Widget Weight "<<Pwidget<<"Lbs"<<endl;
    

    return 0;
}

