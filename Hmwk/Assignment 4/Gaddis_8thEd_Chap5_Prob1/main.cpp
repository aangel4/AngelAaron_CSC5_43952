/* 
 * File:   main.cpp
 * Author: Aaron Angel
 *Purpose: Sum of Numbers Problem
 * Created on April 6, 2015, 9:55 AM
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
int sum=0;
int InNumb;
//Prompt the user for inputs
        cout << "Input a number greater than 0 to calculate the sum"<<endl;
        cin >> InNumb;
//while loop
while(InNumb<0)
    cout<<InNumb<<"Error, please input a number greater than 0"<<endl;
//For loop
for (int counter=0; counter<=InNumb;counter++)
{	
        sum=sum+InNumb;
        counter++;
}
        cout << "The sum of numbers 1 - "<<InNumb<<" is "<<sum<<endl;
        
return 0;
}

