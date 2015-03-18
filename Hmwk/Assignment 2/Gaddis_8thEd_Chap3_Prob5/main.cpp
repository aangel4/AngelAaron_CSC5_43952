/* 
 * File:   main.cpp
 * Author: Aaron Angel
 *
 * Created on March 16, 2015, 2:14 PM
 *      Purpose: Male and Female Percentages Problem
 */
//system Libraries
#include <iostream>
#include <iomanip>

using namespace std;

//User Libraries

//Global Constants

//Function Prototype

//Execution Begins Here!!
int main(int argc, char** argv) {
//Declare Variables
float males;//number of males
float females;//number of females
float Pmales,Pfemale;// percentage of males and females
//Prompt the user for inputs
cout<<"Input total male students registered in a class"<<endl;
cin>>males;
cout<<"Input total female student registered in a class"<<endl;
cin>>females;
//Calculations
Pmales=(males/(males+females))*100;
Pfemale=(females/(males+females))*100;
//Output Results
cout<<setprecision(1)<<fixed;
cout<<"Percentage of males "<<Pmales<<"%"<<endl;
cout<<"Percentage of females "<<Pfemale<<"%"<<endl;
    return 0;
}

