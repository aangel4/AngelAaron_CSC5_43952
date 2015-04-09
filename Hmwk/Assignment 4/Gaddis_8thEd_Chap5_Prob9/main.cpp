/* 
 * File:   main.cpp
 * Author: Aaron Angel
 * Purpose: Math Tutor Problem
 * Created on April 8, 2015, 12:57 PM
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
    unsigned short rooms,UnOcRms,OcpRms,floors;
    float TotRms,TotOcp;//Total rooms and total occupied rooms
    //Prompt the User for inputs
    cout<<"How many floors does the hotel have? "<<endl;
    cin>>floors;
    //Input validation
    while (floors<1)
    {
        cout<<"Please input a number greater than 0 for floors"<<endl;
        cin>>floors;
    }
    
    for(unsigned short Sfloor=1;Sfloor<=floors;Sfloor++)
    {
        if(Sfloor!=13){
            cout<<"How many rooms are in the floor "<<Sfloor<<"?"<<endl;
            cin>>rooms;
            cout<<"How many rooms are occupied in the floor "<<Sfloor<<"?"<<endl;
            cin>>OcpRms;
            TotRms+=rooms;
            TotOcp+=OcpRms;
            if(Sfloor>=floors){
                cout<<"Total floors the hotel has "<<floors<<endl;
                cout<<"Total rooms the hotel has "<<TotRms<<endl;
                cout<<"Total rooms occupied in the hotel "<<TotOcp<<endl;
                cout<<"Total rooms unoccupied in the hotel "<<(TotRms-TotOcp)<<endl;
                cout<<"There are %"<<(TotRms/TotOcp)*100<<" rooms occupied"<<endl;
            }
        }
        else if(Sfloor==13)
        {
                cout<<"Skip the 13th floor"<<endl;
        }
    }
        
    return 0;
}


