/* 
 * File:   main.cpp
 * Author: Aaron Angel
 *
 * Created on March 16, 2015, 12:18 PM
 *      Purpose: Test Average Problem
 */

#include <iostream>
#include <iomanip>
//System Libraries

using namespace std;

//User Libraries
//Global Constants
//Function Prototypes
//Execution Begins here!!
int main(int argc, char** argv) {
//Declare Variables
    float TestS1;//Test score 1
    float TestS2;//Test score 2
    float TestS3;//Test score 3
    float TestS4;//Test score 4
    float TestS5;//Test Score 5
    float AVGtest;//Average Test score
//Prompt the user for inputs
    cout<<"Test score 1"<<endl;
    cin>>TestS1;
    cout<<"Test score 2"<<endl;
    cin>>TestS2;
    cout<<"Test Score 3"<<endl;
    cin>>TestS3;
    cout<<"Test Score 4"<<endl;
    cin>>TestS4;
    cout<<"Test Score 5"<<endl;
    cin>>TestS5;
//Calculations
    AVGtest=(TestS1+TestS2+TestS3+TestS4+TestS5)/5;
//Output Results
    cout<<setprecision(1)<<fixed;
    cout<<"Average Test Score %"<<AVGtest<<endl;
    
    return 0;
}

