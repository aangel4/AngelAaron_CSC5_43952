/* 
 * File:   main.cpp
 * Author: Aaron Angel
 *
 * Created on March 28, 2015, 9:41 PM
 *      //Purpose: Body Mass Index Problem
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
float BMI,weight,height;//BMI=body mass index
    //Prompt the user for inputs
    cout<<"Input your weight in lbs to calculate body mass index"<<endl;
    cin>>weight;
    cout<<"Input your height in inches to calculate body mass index"<<endl;
    cin>>height;
    //calculations
    BMI=(weight*703)/(height*height);
    //if statement
    if (BMI<=25&&BMI>=18.5)
        cout<<"You have optimal weight "<<endl;
    else if (BMI<18.5)
        cout<<"You are underweight "<<endl;
    else if (BMI>25)
        cout<<"You are overweight "<<endl;
    
    return 0;
}

