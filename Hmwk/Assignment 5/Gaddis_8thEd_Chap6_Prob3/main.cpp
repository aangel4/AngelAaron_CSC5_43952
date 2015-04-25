/* 
 * File:   main.cpp
 * Author: Aaron Angel
 * Purpose: Rectangle Area Problem
 * Created on April 20, 2015, 1:10 PM
 */

//System Libraries
#include <iostream>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
float getsale(float &);
void Findhi(float,float,float,float);
//Execution Begins Here!!
int main(int argc, char** argv) {
//This Program determines which of a company's four divisions had the greatest
//sales for a quarter.
    //Declare Variables
    float NE=0;
    float SE=0;
    float NW=0;
    float SW=0;
    //function prototypes
    cout<<"Enter NorthEast sales: $" ;
    cout<<getsale(NE)<<endl;
    cout<<"Enter SouthEast sales: $"; 
    cout<<getsale(SE)<<endl;
    cout<<"Enter NorthWest sales: $";
    cout<<getsale(NW)<<endl;
    cout<<"Enter SouthWest sales: $";
    cout<<getsale(SW)<<endl;
    
    Findhi(NE,SE,NW,SW);
    
    return 0;
}
//Function to get sales
float getsale(float & num)
{
    do
    {
        if(!cin)
        {
            cin.clear();
            cin.ignore(100, '\n');
        }
        cin>>num;
        cout<<"Number entered: ";
            
    }while(!cin||num<=0);
    return num;
}
//Function to show highest
void Findhi(float ne,float se,float nw,float sw) 
{
    const char *who="NorthEast";
    float high=ne;
    if(se>high)
    {
        who="SouthEast";
        high=se;
    }
    if(nw>high)
    {
        who="NorthWest";
        high=nw;
    }
    if(sw>high)
    {
        who="SouthWest";
        high=sw;
    }
    cout<<who<< " has the highest sale ("<<high<< ")"<<endl;
}

    

