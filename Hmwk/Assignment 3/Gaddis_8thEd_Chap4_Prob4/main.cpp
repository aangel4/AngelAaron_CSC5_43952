/* 
 * File:   main.cpp
 * Author: Aaron Angel
 *
 * Created on March 28, 2015, 9:00 PM
 *      //Purpose: Areas of Rectangles problem
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
float length1,length2;
float width1,width2;//length and width of two rectangles
float area1,area2; //area of two rectangles
    //Prompt the user for inputs
cout<<"Input the length of rectangle 1 "<<endl;
cin>>length1;
cout<<"Input the width of rectangle 1 "<<endl;
cin>>width1;
cout<<"Input the length of rectangle 2 "<<endl;
cin>>length2;
cout<<"Input the width of rectangle 2 "<<endl;
cin>>width2;
//Calculations
area1=length1*width1;
area2=length2*width2;
//if else statement
if (area1>area2)
    cout<<"rectangle 1 is greater than rectangle 2 "<<endl;
else if (area1<area2)
    cout<<"Rectangle 1 is less than rectangle 2 "<<endl;
else
    cout<<"Rectangle 1 is equal to rectangle 2 "<<endl;

    return 0;
}

