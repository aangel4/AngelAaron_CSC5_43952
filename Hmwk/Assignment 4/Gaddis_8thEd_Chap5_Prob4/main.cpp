/* 
 * File:   main.cpp
 * Author: Aaron Angel
 * Purpose: Calories Burned Problem
 * Created on April 6, 2015, 4:32 PM
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
    float cal=3.6;//Calories burned per min
    const char StrtMin=5;//Starting minutes
    const unsigned char EndMin=30;//Ending minutes
    cout<<"Table chart shows minutes worked "
            "out and calculates calories burned"<<endl;
    unsigned short min;//Minutes
//Table header
    cout<<"Minutes Calories Burned "<<endl;
    cout<<"------------------------"<<endl;
//For loop
    for(min=StrtMin;min<=EndMin;min+=5)
        cout<<min<<"\t\t"<<(min*cal)<<endl;
        
    return 0;
}

