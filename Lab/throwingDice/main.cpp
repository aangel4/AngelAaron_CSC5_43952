/* 
 * File:   main.cpp
 * Author: Aaron Angel
 * Created on April 29, 2015, 9:39 AM
 * Purpose: Check out Dice Statistics
 */

//System Libraries

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
unsigned char roll(unsigned char,unsigned char);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    const int SIZE=15;//Size larger than needed
    int freq[SIZE]={};//Setting whole array to 0
    int nThrows=36000;//Number of throws
    int sum=0;//Add up all the
    //Set the random seed
    srand(static_cast<unsigned int>(time(0)));
    //Loop, Throw the dice take the stats!
    for(int throws=1;throws<=nThrows;throws++){
        freq[roll(2,6)]++;
    }
    //Print the results
    for(int value=0;value<SIZE;value++){
        sum+=freq[value];
        cout<<value<<" was thrown "
            <<freq[value]<<" times!"<<endl;
    }
    cout<<"The dice were thrown "<<nThrows
        <<"="<<sum<<" times"<<endl;
//Exit Stage right
    return 0;
}

unsigned char roll(unsigned char nDie,unsigned char sides){
    unsigned char sum=0;
    for(int die=1;die<=nDie;die++){
        sum+=(rand()%sides+1);
    }
    return sum;
}