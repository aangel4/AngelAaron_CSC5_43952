/* 
 * File:   main.cpp
 * Author: Aaron Angel
 *
 * Created on April 20, 2015, 10:04 AM
 */

//System Libraries
#include <iostream>
#include <cmath>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins here!!
int main(int argc, char** argv) {
//Declare Variables
    float sum1=0,sum2=0,exSum1,exSum2;
    float val1=0.1f,val2=0.5f;
    int nXSum=1e7;//10,000,000
    //Calculate the sum
    for(int i=1;i<=nXSum;i++){
        sum1+=val1;
        sum2+=val2;
    }
    //exact sums are
    exSum1=nXSum*val1;
    exSum2=nXSum*val2;
    //compare the results
    cout<<"Exact Sum 1 = "<<exSum1<<endl;
    cout<<"Summed Sum1 = "<<sum1<<endl;
    cout<<"Percentage Error = "<<(exSum1-sum1)/exSum1*100<<"%"<<endl;
    cout<<"Exact Sum2 = "<<exSum2<<endl;
    cout<<"Summed Sum2 = "<<sum2<<endl;
    cout<<"Percentage Error = "<<(exSum2-sum2)/exSum2*100<<"%"<<endl;
    return 0;
}

 