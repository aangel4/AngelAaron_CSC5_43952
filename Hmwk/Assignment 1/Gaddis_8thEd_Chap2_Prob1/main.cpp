/* 
 * File:   main.cpp
 * Author: Aaron Angel
 *
 * Created on March 8, 2015, 2:57 PM
 *      Purpose: 1st Homework Problem
 */

#include <iostream>

using namespace std;

//User Libraries

//Sum of two numbers

//execution begins here!

int main() {
    
    short apples,
          grnAppl = 50,  //50 green apples 
          redAppl = 100, //100 red apples
          totlApl;      //total apples
    
    //Calculate total apples
    totlApl =  grnAppl + redAppl;
    
    //Display the total apples
    cout << grnAppl <<" green apples + ";
    cout << redAppl <<" red apples = "<<endl;
    cout << totlApl<<" total apples"<<endl;
    
            

    return 0;
}

