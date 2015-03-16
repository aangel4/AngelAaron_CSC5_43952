/* 
 * File:   main.cpp
 * Author: Aaron Angel
 *
 * Created on March 16, 2015, 8:12 AM
 * Purpose: Paycheck-> Ternary
 */
//System Libraries
#include <iostream>//I/O Standard
#include <iomanip>//Formatting
#include <fstream>//I/O File

using namespace std;

//User Libraries
//Global Constants
//Function Prototypes
//Execution Starts Here!
int main(int argc, char** argv) {
        //Declare Variables
    ofstream out;// Output the results in a file
    float hrsWkd; // Hours Worked (hrs)
    float payRate; //Pay Rate ($'s/hrs)
    float oRate=1.5f; //Multiplication factor of payRate
    float oTime=40.0f; //Where overtime begins (hr)
    float payChk; //Gross Pay ($'s)
    //open the file
    out.open("Payroll.dat");
    //Prompt the user for inputs
    cout<<"How many hours this week did you work?"<<endl;
    cin>>hrsWkd;
    cout<<"What is your pay rate ($'s/hr)"<<endl;
    cin>>payRate;
    //Calculate the paycheck
    payChk=hrsWkd<oTime?
                payRate=*hrsWkd;
                payRate*(hrsWkd+(oRate-1)*(hrsWkd-oTime));
    //output the results to the screen
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Hours worked = "<<hrsWkd<<"(hrs)"<<endl;
    cout<<"Pay Rate = $"<<payRate<<"(hr)"<<endl;
    cout<<"Over time rate = "<<oRate<<endl;
    cout<<"Over time begins at "<<oTime<<"(hrs)"<<endl;
    cout<<"Gross pay = $"<<payChk<<endl;
    //close the file
    out.close();
    return 0;
}

