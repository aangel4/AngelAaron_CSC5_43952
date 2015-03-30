/* 
 * File:   main.cpp
 * Author: Aaron Angel
 * Created on March 29, 2015, 5:37 PM
 *      //Purpose: Change for a dollar game
 */    
//System Libraries
#include <iostream>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!!
int main(int argc, char** argv) {
//Declare Variables
    char pen=1,nckls=5,dmes=10,qrtrs=25;
    unsigned char dllr=100;//coins
    unsigned short Tpen,Tnckls,Tdmes,Tqrtrs,Tcoins;
    //Prompt the user for inputs
    cout<<"Input coins to make exactly one dollar"<<endl;
    cout<<"Input number of pennies "<<endl;
    cin>>Tpen;
    cout<<"Input number of nickles "<<endl;
    cin>>Tnckls;
    cout<<"Input number of dimes "<<endl;
    cin>>Tdmes;
    cout<<"Input number of quarters "<<endl;
    cin>>Tqrtrs;
    //Calculations
    Tcoins=(pen*Tpen)+(nckls*Tnckls)+(dmes*Tdmes)+(qrtrs*Tqrtrs);
    //If statement
    if (Tcoins==dllr)  
        cout<<"Congratulations, you win"<<endl;
    else if (Tcoins>dllr)
        cout<<"Total coins is greater than one dollar "<<endl;
    else 
        cout<<"Total coins is less than one dollar "<<endl;
    
    return 0;
}

