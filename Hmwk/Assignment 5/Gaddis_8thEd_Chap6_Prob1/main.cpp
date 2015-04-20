/* 
 * File:   main.cpp
 * Author: Aaron Angel
 * Purpose: Mark up problem
 * Created on April 20, 2015, 10:35 AM
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Functions Prototypes
void calRet(float,float,float);
//Execution Begins Here!!
int main(int argc, char** argv) {

    //Declare Variables
    float Wcost, Markup,Rprice;//Wholesale cost, Markup percentage
    //Prompt the user for inputs
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Input an item's wholesale cost "<<endl;
    cin>>Wcost;
    cout<<"Input the item's markup percentage"<<endl;
    cin>>Markup;
    calRet(Wcost,Markup,Rprice);
    return 0;
}

//Definition of function CalRet.
//Uses three parameters; arg1, arg2 and arg3. The function multiplies arg1
//by arg2 and shows the result.
void calRet(float arg1,float arg2,float arg3)
{
   while (arg1<0){
        cout<<"Please input a positive value for wholesale cost "<<endl;
        cin>>arg1;
   }
    while(arg2<0){
        cout<<"please make sure the value is greater than 0"<<endl;
        cin>>arg2;
    }
   //calculations
   
   arg3=((arg1*arg2)/100)+arg1;
   cout<<"The item's wholesale cost is $"<<arg1<<endl;
   cout<<"The item's markup percentage is "<<arg2<<"%"<<endl;
   cout<<"The item's retail price is $"<<arg3<<endl;
}

