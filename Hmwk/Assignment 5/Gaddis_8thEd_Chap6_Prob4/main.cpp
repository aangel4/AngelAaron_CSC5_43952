/* 
 * File:   main.cpp
 * Author: Aaron Angel
 * Purpose: Safest Driving Area Problem
 * Created on April 20, 2015, 2:50 PM
 */

//System Libraries

#include <iostream>
#include <string>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
int getNumAccidents(int)
void findLowest(int)
//Execution Begins Here!
int main(int argc, char** argv) {

int getNumAccidents(string);
 void findLowest(int[]);
 int main()
 {string region[]={"north","south","east","west","central"};
 int i,accident[5];
 for(i=0;i<5;i++)
    accident[i]=getNumAccidents(region[i]);
 findLowest(accident);
 system("pause");
 return 0;
 }
 int getNumAccidents(string r)
 {int num=0;
 do{
    cout<<"Enter number of accidents in the"<<r<<" region: ";
    cin>>num;
    if(num<0)
       cout<<"Invalid entry-reenter\n";
    }while(num<0);
 return num;
 }
 void findLowest(int a[])
 {string region[]={"north","south","east","west","central"};
 int i,low,lowind=0;
 low=a[0];
 for(i=1;i<5;i++)
    if(a[i]<low)
       {low=a[i];
       lowind=i;
       }
 cout<<"\nThe region with the least accidents is the"<<region[lowind]<<" with "<<a[lowind]<<"accidents\n";   
 }

