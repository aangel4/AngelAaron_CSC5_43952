/* 
 * File:   main.cpp
 * Author: Aaron Angel
 *
 * Created on March 27, 2015, 10:47 PM
 *      Purpose: Minimum/Maximum Problem
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
    float Numb1,Numb2; //Numbers
    
    //Prompt the user for inputs
 cout<<"Input the first number "<<endl;
 cin>>Numb1;
 cout<<"Input the second Number "<<endl;
 cin>>Numb2;
 if (Numb1<Numb2)
     cout<<Numb1<<" is less than number 2 "<<Numb2<<endl;
 else if (Numb1>Numb2)
     cout<<Numb1<<" is greater than "<<Numb2<<endl;
 else if (Numb1==Numb2)
     cout<<Numb1<<" is equal to "<<Numb2<<endl;

    return 0;
}

