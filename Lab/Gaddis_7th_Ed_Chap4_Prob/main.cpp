/* 
 * File:   main.cpp
 * Author: Aaron Angel
 *
 * Created on March , 2015, 8:50 AM
 * Purpose: Paycheck-> Ternary
 */
//System Libraries
#include <iostream>//I/O Standard
#include <fstream>//I/O File
#include <iomanip>
using namespace std;

//User Libraries
//Global Constants
//Function Prototypes
//Execution Starts Here!
int main(int argc, char** argv) {
        //Declare Variables
    ofstream out;//Output the results in a file
    float vwdHrs;//Hours viewed (hrs)
    char package;//Package AaBbCc
    const int SIZE=40;//Max size of name =39
    char name[SIZE];//Customer Name
    float bill; //Cable Bill in $'s
    //open the file
    out.open ("cable.dat");
    //Prompt the user for inputs
    cout<<"How many hours did you view this month?"<<endl;
    cin>>vwdHrs;
    cout<<"what is your package A,B,C"<<endl;
    cin>>package;
    cout<<"What is the customers name?"<<endl;
    cin.ignore ();
    cin.getline(name,SIZE);
    //Calculate the paycheck
    switch (package) {
        case 'A':
        case 'a':{
            bill=9.95;
            if (vwdHrs>10)bill+=(vwdHrs-10);
            break;
        }
        case 'B':
        case 'b':{
            bill=14.95;
            if (vwdHrs>20)bill+=(vwdHrs-20);
            break;
        }
        case 'C':
        case 'c':{
            bill=19.95;
            break;
        }
        default: cout<<"Wrong Package Chosen"<<endl;
    };
    //Output the results to the file
    out<<fixed<<setprecision (2)<<showpoint;
    out<<"your cable bill from CSC5 RCC Programming class"<<endl;
    out<<"Customer Name:" <<name<<endl;
    out<<"Package:"<<package<<endl;
    out<<"Hours Viewed: " <<vwdHrs<<endl;
    out<<"Amount Owed: "<<bill<<endl;
    out.close();
    return 0;
}

