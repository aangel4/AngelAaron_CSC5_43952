/* 
 * File:   main.cpp
 * Author: Aaron Angel
 *
 * Created on March 27, 2015, 11:54 PM
 *      Purpose: Roman Numeral Converter Problem
 */

#include <iostream>

//System Libraries

using namespace std;

//User Libraries

//Global Constants

//Function Prototype

//Execution Begins Here!!
int main(int argc, char** argv) {
//Declare Variables
   unsigned short number; //Number for conversion to Roman numeral

    //Prompt the user for inputs
    cout<<"Input a number from 1-10 to convert to Roman Numeral "<<endl;
    cin>>number;
    //switch statement
    switch (number)
    {
        case 1: cout<<" I "<<endl;
                  break;
        case 2: cout<<"II"<<endl;
                  break;
        case 3: cout<<"III"<<endl;
                  break; 
        case 4: cout<<"IV"<<endl;
                  break;
        case 5: cout<<" V"<<endl;
                  break;
        case 6: cout<<"VI"<<endl;
                  break;
        case 7: cout<<" VII"<<endl;
                  break;
        case 8: cout<<"VIII"<<endl;
                  break;
        case 9: cout<<"IX"<<endl;
                  break;
        case 10: cout<<"X"<<endl;
                  break;
        default: cout<<"You did not enter a number from 1-10"<<endl;
    }
    return 0;
}

