/* 
 * File:   main.cpp
 * Author: Aaron Angel
 * Created on April 9, 2015, 10:19 PM
 * Purpose: To Illustrate the code for 
 * developing a menu
 * Problem 0 -> Sum of Numbers
 * Problem 1 -> Characters for the ASCII Codes
 * Problem 2 -> Ocean Levels
 * Problem 3 -> Calories Burned
 * Problem 4 -> Membership Fees Increase
 * Problem 5 -> Distance Traveled
 * Problem 6 -> Pennies for Pay
 * Problem 7 -> Hotel Occupancy
 * Problem 8 -> Population
 * Problem 9 -> Celsius to Fahrenheit Table
 */

//System Libraries

#include <iostream>
#include <cstdlib>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!!
int main(int argc, char** argv) {
     //General Menu Format
    bool loop=true;
    do{
    //Display the selection
    cout<<"Type 0 to solve problem 1"<<endl;
    cout<<"Type 1 to solve problem 2"<<endl;
    cout<<"Type 2 to solve problem 3"<<endl;
    cout<<"Type 3 to solve problem 4"<<endl;
    cout<<"Type 4 to solve problem 5"<<endl;
    cout<<"Type 5 to solve problem 6"<<endl;
    cout<<"Type 6 to solve problem 7"<<endl;
    cout<<"Type 7 to solve problem 8"<<endl;
    cout<<"Type 8 to solve problem 9"<<endl;
    cout<<"Type 9 to solve problem 10"<<endl;
    cout<<"Type anything else to quit with no solutions."<<endl;
    //Read the choice
    char choice;
    cin>>choice;
    //Solve a problem that has been chosen.
    switch(choice){
        case '0':{
            //Declare Variables
           int sum=0;
            int InNumb;
            //Prompt the user for inputs
                    cout << "Input a number greater than 0 to calculate the sum"<<endl;
                    cin >> InNumb;
            //while loop
            while(InNumb<0)
            {
                cout<<"Error, please input a number greater than 0"<<endl;
                cin>>InNumb;
            }
                //For loop
            for (int counter=0; counter<=InNumb;counter++)
            {	
                    sum=sum+InNumb;
                    counter++;
            }
                    cout << "The sum of numbers 1 - "<<InNumb<<" is "<<sum<<endl;
            break;
        }
        case '2':{
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
            break;
        }
         case '3':{
            //Declare Variables
                float OcnLvR=1.5;//Ocean Level rise Per year
                const char StrtYr=1;//Starting year
                const unsigned char EndYr=25;//Ending year
                unsigned short years;
            //Table Header
                    cout<<"Year Millimeters raised\n";
                    cout<<"------------------------\n";
            //For loop
                for (years=StrtYr;years<=EndYr;years++)

                    cout<<years<<"\t\t"<<(OcnLvR*years)<<endl;
            break;
        }
        case '4':{
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
            break;
        }
        case '5':{
            //Declare Variables
                unsigned short memship=2500;//yearly membership cost
                unsigned short Syear=1;//Starting year
                const char Eyear=6;//Ending year
                float IncsMem=.04;//Increase membership percentage
                unsigned short NewMem,NewInc;//New membership rate, New Increase 

            //Table Header
                cout<<"Year New Projected Rate"<<endl;
                cout<<"--------------------------"<<endl;
            //Calculation
                NewInc=(memship*IncsMem);
                NewMem=NewInc+memship;

            //while loop
                while (Syear<=Eyear)
                {
                    cout<<Syear<<"\t\t"<<NewMem<<endl;
                    Syear++,NewMem+=NewInc;
                }  
            break;
        }
        case '6':{
            //Declare Variables
                unsigned short speed,iTime,acu=0;//Distance
                //Prompt the User for input
                cout<<"Input the speed in miles per hour "<<endl;
                cin>>speed;
                //Input Validation
                while (speed<0)
                    {
                        cout<<"Error, Please input a number greater than or equal to 0 "<<endl;
                        cin>>speed;
                    }
                //Prompt User for time in hours
                cout<<"Input the time in hours traveled "<<endl;
                cin>>iTime;
                //Input validation
                while (iTime<1)
                    {
                        cout<<"Error Please input a number greater than or equal to 1"<<endl;
                        cin>>iTime;
                    }
                //Header Table
                cout<<"Hour     Distance Traveled "<<endl;
                cout<<"--------------------------"<<endl;
                for (unsigned short time=1;time<=iTime;time++)
                {
                    acu+=speed;
                    cout<<time<<"\t\t"<<acu<<endl;
                }
            break;
        }
        case '7':{
            //Declare Variables
                unsigned short Idays;//input days
                float pennies=.01;//pennies
                //Prompt the user for inputs
                cout<<"Input the number of days worked this pay period"<<endl;
                cin>>Idays;
                //Input validation
                while (Idays<1)
                {
                    cout<<"Error, Please input a number greater than 0 "<<endl;
                    cin>>Idays;
                }
                //Header Table
                cout<<"Days     Salary"<<endl;
                cout<<"--------------"<<endl;
                //For loop
                for(unsigned short Sday=1;Sday<=Idays;Sday++)
                {
                    cout<<Sday<<"\t$"<<pennies<<endl;
                    pennies*=2;
                }
            break;
        }
    case'8':{
            //Declare Variables
                unsigned short rooms,UnOcRms,OcpRms,floors;
                float TotRms,TotOcp;//Total rooms and total occupied rooms
                //Prompt the User for inputs
                cout<<"How many floors does the hotel have? "<<endl;
                cin>>floors;
                //Input validation
                while (floors<1)
                {
                    cout<<"Please input a number greater than 0 for floors"<<endl;
                    cin>>floors;
                }

                for(unsigned short Sfloor=1;Sfloor<=floors;Sfloor++)
                {
                    if(Sfloor!=13){
                        cout<<"How many rooms are in the floor "<<Sfloor<<"?"<<endl;
                        cin>>rooms;
                        cout<<"How many rooms are occupied in the floor "<<Sfloor<<"?"<<endl;
                        cin>>OcpRms;
                        TotRms+=rooms;
                        TotOcp+=OcpRms;
                        if(Sfloor>=floors){
                            cout<<"Total floors the hotel has "<<floors<<endl;
                            cout<<"Total rooms the hotel has "<<TotRms<<endl;
                            cout<<"Total rooms occupied in the hotel "<<TotOcp<<endl;
                            cout<<"Total rooms unoccupied in the hotel "<<(TotRms-TotOcp)<<endl;
                            cout<<"There are %"<<(TotRms/TotOcp)*100<<" rooms occupied"<<endl;
                        }
                    }
                    else if(Sfloor==13)
                    {
                            cout<<"Skip the 13th floor"<<endl;
                    }
                }
            break;
                        }
        case '1':{
             //Declare Variables
                unsigned short AvgPop,numOrg,numday,inc=1;
                float CavgPop=.01;
                //Prompt the user for first input
                cout<<"Input the starting number of organisms "<<endl;
                cin>>numOrg;
                //first Input validation
                while (numOrg<2)
                {
                    cout<<"Error, Please input a number greater than or equal to 2 "<<endl;
                    cin>>numOrg;
                }
                //Prompt the user for second input
                cout<<"Input the average daily Population increase (as a percentage)"<<endl;
                cin>>AvgPop;
                //Second Input Validation
                while (AvgPop<0)
                {
                    cout<<"Error, Please input a number greater than or equal to 0"<<endl;
                    cin>>AvgPop;
                }
                //Prompt the user for third input
                cout<<"Input the number of days they will multiply "<<endl;
                cin>>numday;
                //Third Input Validation
                while (numday<1)
                {
                    cout<<"Error, Please input a number greater than or equal to 1"<<endl;
                    cin>>numday;
                }
                //Calculations
                CavgPop=AvgPop*CavgPop;
                //Table Header
                cout<<"Day     Size of Population"<<endl;
                cout<<"----------------------------"<<endl;
                //For loop
                for(unsigned short Sday=1;Sday<=numday;Sday++)
                {
                    cout<<Sday<<"\t"<<((numOrg*CavgPop)+numOrg)*inc<<endl;
                    inc++;
                }
            break;
        }
    case'9':{
            //Declare Variables
                const char Scel=1;//Starting Celsius 
                const unsigned char EndCel=20;//Ending Celsius
                cout<<"Table chart shows Celsius conversion to Fahrenheit "<<endl;
                unsigned short cel;//Celsius
            //Table header
                cout<<"Celsius  Fahrenheit "<<endl;
                cout<<"---------------------"<<endl;
            //For loop
                for(cel=Scel;cel<=EndCel;cel++)
                    cout<<cel<<"\t\t"<<(cel*1.8)+32<<endl;

            break;
        }
        default:{
                cout<<"Exit?"<<endl;
                loop=false;
                break;
        }
    };
    }while(loop);//upper do-while
    return 0;
    }

