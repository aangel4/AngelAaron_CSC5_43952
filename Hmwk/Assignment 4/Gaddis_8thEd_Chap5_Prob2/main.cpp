/* 
 * File:   main.cpp
 * Author: Aaron Aaron
 * Purpose: Characters for ASCII Codes
 * Created on April 9, 2015, 9:48 PM
 */

//System Libraries

#include <iostream>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins here!!
int main(int argc, char** argv) {
  //Declare Variables
  char letter;
  int count=0;
  //For loop
  for(letter=0;letter<127;letter++,count++)
    {
      //If Statement
      if(count==16)
        {
          cout<<endl;
          count=0;
        }
      cout<<letter<<" ";
    }

  cout<<endl;

  return 0;
}