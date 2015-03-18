/* 
 * File:   main.cpp
 * Author: Aaron Angel
 *
 * Created on March 18, 2015, 9:39 AM
 *      //Purpose: 
 */
//System Libraries
#include <iostream>
#include <iomanip>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    bool x,y;
    //Heading
    cout<<"X Y !X !Y X&&Y X||Y X^Y X^Y^Y X^Y^X"
            "!(X&&Y) !X||!Y !(X||!Y) !X&&!Y"<<endl;
    //Output the first row of the table
    x=true;y=true;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x&&y?'T':'F')<<"   ";
    cout<<(x||y?'T':'F')<<" ";
    cout<<setw(3);
    cout<<(x^y? 'T':'F')<<"  ";
    cout<<setw(3);
    cout<<((x^y)^y?'T':'F')<<"";
    cout<<setw(6);
    cout<<((x^y)^x?'T':'F')<<"";
    cout<<setw(7);
    cout<<(!(x&&y)?'T':'F')<<"";
    cout<<setw(7);
    cout<<(!x||!y?'T':'F')<<"";
    cout<<setw(8);
    cout<<(!(x||y)?'T':'F')<<"";
    cout<<setw(8);
    cout<<(!x&&!y?'T':'F')<<"";
    cout<<endl;
     //Output the second row of the table
    y=false;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x&&y?'T':'F')<<"   ";
    cout<<(x||y?'T':'F')<<" ";
    cout<<setw(3);
    cout<<(x^y? 'T':'F')<<"";
    cout<<setw(5);
    cout<<((x^y)^y?'T':'F')<<"";
    cout<<setw(6);
    cout<<((x^y)^x?'T':'F')<<"";
    cout<<setw(7);
    cout<<(!(x&&y)?'T':'F')<<"";
    cout<<setw(7);
    cout<<(!x||!y?'T':'F')<<"";
    cout<<setw(8);
    cout<<(!(x||y)?'T':'F')<<"";
    cout<<setw(8);
    cout<<(!x&&!y?'T':'F')<<"";
    cout<<endl;
     //Output the third row of the table
    x=false;y=true;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x&&y?'T':'F')<<"   ";
    cout<<(x||y?'T':'F')<<" ";
    cout<<setw(3);
    cout<<(x^y?'T':'F')<<"";
    cout<<setw(5);
    cout<<((x^y)^y?'T':'F')<<"";
    cout<<setw(6);
    cout<<((x^y)^x?'T':'F')<<"";
    cout<<setw(7);
    cout<<(!(x&&y)?'T':'F')<<"";
    cout<<setw(7);
    cout<<(!x||!y?'T':'F')<<"";
    cout<<setw(8);
    cout<<(!(x||y)?'T':'F')<<"";
    cout<<setw(8);
    cout<<(!x&&!y?'T':'F')<<"";
    cout<<endl;
     //Output the fourth row of the table
    x=false;y=false;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x&&y?'T':'F')<<"   ";
    cout<<(x||y?'T':'F')<<" ";
    cout<<setw(3);
    cout<<(x^y? 'T':'F')<<" ";
    cout<<setw(4);
    cout<<((x^y)^y?'T':'F')<<"";
    cout<<setw(6);
    cout<<((x^y)^x?'T':'F')<<"";
    cout<<setw(7);
    cout<<(!(x&&y)?'T':'F')<<"";
    cout<<setw(7);
    cout<<(!x||!y?'T':'F')<<"";
    cout<<setw(8);
    cout<<(!(x||y)?'T':'F')<<"";
    cout<<setw(8);
    cout<<(!x&&!y?'T':'F')<<"";
    cout<<endl;
    
    return 0;
}

