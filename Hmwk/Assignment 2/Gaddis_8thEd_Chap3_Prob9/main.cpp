/* 
 * File:   main.cpp
 * Author: Aaron Angel
 *
 * Created on March 18, 2015, 11:58 AM
 *      Purpose: How Many Calories Problem 
 */

//System Libraries
#include <iostream>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    unsigned char bagC=30;//Amount of cookies in bag
    char serving=10;//Amount of servings per bag
    unsigned short Cate;//Amount of cookies ate
    unsigned short TcCkie;//Total calories per cookie 
    unsigned short TCate;//Total Cookies ate
    //Prompt the user for inputs
    cout<<"Input total cookies eaten"<<endl;
    cin>>Cate;
    
    //Calculations
    TcCkie=(serving*bagC)/bagC;
    TcCkie=TcCkie*Cate;
    //Output results
    cout<<"Total Calories Consumed "<<TcCkie<<" calories"<<endl;

    return 0;
}

