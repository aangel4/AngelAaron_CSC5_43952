/* 
 * File:   main.cpp
 * Author: Aaron Angel
 * Created on March 29, 2015, 9:19 PM
 *      //Purpose: Software Sales Problem
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
unsigned short QtyPckg,Pckg=99,QtyP,QtyP1,QtyP2,QtyP3,QtyP4;//Software package
float Disc1=.20,Disc2=.30,Disc3=.40,Disc4=.50;//Discount in %
//Prompt the user for inputs
cout<<"Input the number of software units purchased "<<endl;
cin>>QtyPckg;
//Calculations
QtyP1=((QtyPckg*Pckg)-(QtyPckg*Pckg)*Disc1);
QtyP2=((QtyPckg*Pckg)-(QtyPckg*Pckg)*Disc2);
QtyP3=((QtyPckg*Pckg)-(QtyPckg*Pckg)*Disc3);
QtyP4=((QtyPckg*Pckg)-(QtyPckg*Pckg)*Disc4);
QtyP=QtyPckg*Pckg;
//If statements
if (QtyPckg>=100)
    cout<<"The total cost of the purchase is $"<<QtyP4<<endl;
else if (QtyPckg>=50&&QtyPckg<=99)
    cout<<"The total cost of the purchase is $"<<QtyP3<<endl;
else if (QtyPckg>=20&&QtyPckg<=49)
    cout<<"The Total cost of the purchase is $"<<QtyP2<<endl;
else if (QtyPckg>=10&&QtyPckg<=19)
    cout<<"The Total cost of the purchase is $"<<QtyP1<<endl;
else if (QtyPckg>=1&&QtyPckg<=9)
    cout<<"The total cost of the purchase is $"<<QtyP<<endl;
else
    cout<<"Please input a number greater than 0 "<<endl;


    return 0;
}

