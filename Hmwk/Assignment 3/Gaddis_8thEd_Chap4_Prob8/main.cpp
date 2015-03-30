/* 
 * File:   main.cpp
 * Author: Aaron Angel
 *
 * Created on March 29, 2015, 11:30 AM
 *      //Purpose: Color Mixer Problem
 */
//System Libraries
#include <iostream>
#include <string>

using namespace std;

//System Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!!
int main(int argc, char** argv) {
//Declare Variables
    string str1="red";
    string str2="blue";
    string str3="yellow";
    string str4="purple";
    string str5="green";
    string str6="orange";
    //Prompt the user for inputs
    cout<<"There are three primary colors: red, blue, yellow "<<endl;
    cout<<"Input the first color "<<endl;
    getline(cin,str1<<str2<<str3);
    cout<<"Input the second color to convert to a secondary color"<<endl;
    getline(cin,str1>>str2>>str3);
     //Calculations
    str4=str1+str2,str5=str2+str3,str6=str1+str3;
    //If statement
    if (str1&&str2)
        cout<<"The primary colors creates "<<str4<<endl;
    else if (str2&&str3)
        cout<<"The primary colors creates "<<str5<<endl;
    else if (str1&&str3)
        cout<<"The Primary colors creates "<<str6<<endl;
    else 
        cout<<"Error, primary colors where not inputted "<<endl;
    
    return 0;
}

