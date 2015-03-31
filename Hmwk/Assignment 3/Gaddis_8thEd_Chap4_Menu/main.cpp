/* 
 * File:   main.cpp
 * Author: Aaron Angel
 * Created on March 30, 2015, 11:32 AM
 * Purpose: To Illustrate the code for 
 * developing a menu
 * Problem 0 -> Minimum/Maximum numbers
 * Problem 1 -> Roman Numeral Converter
 * Problem 2 -> Magic Dates
 * Problem 3 -> Areas of Two Rectangles
 * Problem 4 -> Calculating Body Mass Index
 * Problem 5 -> Mass and Weight in Newtons
 * Problem 6 -> Time Calculator 
 * Problem 7 -> Change for a Dollar Game
 * Problem 8 -> Math Tutor
 * Problem 9 -> Software Sales
 */

//User Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
unsigned char Min=60;//60 seconds in 1 minutes
unsigned short Hr=3600;//3600 seconds in 1 hour
unsigned int Day=86400;//86400 seconds in 1 day
//Function Prototypes

//Execution Begins Here!!
int main(int argc, char** argv) {
        
    //General Menu Format
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
                    float Numb1,Numb2; //Numbers

                    //Prompt the user for inputs
                 cout<<"Input the first number "<<endl;
                 cin>>Numb1;
                 cout<<"Input the second Number "<<endl;
                 cin>>Numb2;
                 if (Numb1<Numb2)
                     cout<<Numb1<<" is less than "<<Numb2<<endl;
                 else if (Numb1>Numb2)
                     cout<<Numb1<<" is greater than "<<Numb2<<endl;
                 else
                     cout<<Numb1<<" is equal to "<<Numb2<<endl;
 
                break;
            }
            case '1':{
                //Declare Variables
                    unsigned short number; //Number for conversion to Roman numeral
                    //Prompt the user for inputs
                cout<<"Input a number from 1-10 to convert to Roman Numeral "<<endl;
                cin>>number;
                //switch statement
                switch (number)
                     {
                    case 1: cout<<" I "<<endl;
                              break;
                    case 2: cout<<"II"<<endl;
                              break;
                    case 3: cout<<"III"<<endl;
                              break; 
                    case 4: cout<<"IV"<<endl;
                              break;
                    case 5: cout<<" V"<<endl;
                              break;
                    case 6: cout<<"VI"<<endl;
                              break;
                    case 7: cout<<" VII"<<endl;
                              break;
                    case 8: cout<<"VIII"<<endl;
                              break;
                    case 9: cout<<"IX"<<endl;
                              break;
                    case 10: cout<<"X"<<endl;
                            break;
                default: cout<<"You did not enter a number from 1-10"<<endl;
                }
                break;
            }
            case '2':{
                //Declare Variables
                    unsigned short month,day,year; 
                    //Prompt the User for Inputs
                    cout<<"Input a month in numeric form "<<endl;
                    cin>>month;
                    cout<<"Input a day of the month "<<endl;
                    cin>>day;
                    cout<<"Input a two-digit year "<<endl;
                    cin>>year;
                    //if else statement
                    if (month*day==year)
                        cout<<"The date is magic"<<endl;
                    else 
                        cout<<"The date is not magic"<<endl;
                break;
            }
             case '3':{
                //Declare Variables
                    float length1,length2;
                    float width1,width2;//length and width of two rectangles
                    float area1,area2; //area of two rectangles
                        //Prompt the user for inputs
                    cout<<"Input the length of rectangle 1 "<<endl;
                    cin>>length1;
                    cout<<"Input the width of rectangle 1 "<<endl;
                    cin>>width1;
                    cout<<"Input the length of rectangle 2 "<<endl;
                    cin>>length2;
                    cout<<"Input the width of rectangle 2 "<<endl;
                    cin>>width2;
                    //Calculations
                    area1=length1*width1;
                    area2=length2*width2;
                    //if else statement
                    if (area1>area2)
                        cout<<"rectangle 1 is greater than rectangle 2 "<<endl;
                    else if (area1<area2)
                        cout<<"Rectangle 1 is less than rectangle 2 "<<endl;
                    else
                        cout<<"Rectangle 1 is equal to rectangle 2 "<<endl;
                break;
            }
            case '4':{
                 //Declare Variables
                    float BMI,weight,height;//BMI=body mass index
                    //Prompt the user for inputs
                    cout<<"Input your weight in lbs to calculate body mass index"<<endl;
                    cin>>weight;
                    cout<<"Input your height in inches to calculate body mass index"<<endl;
                    cin>>height;
                    //calculations
                    BMI=(weight*703)/(height*height);
                    //if statement
                    if (BMI<=25&&BMI>=18.5)
                        cout<<"You have optimal weight "<<endl;
                    else if (BMI<18.5)
                        cout<<"You are underweight "<<endl;
                    else if (BMI>25)
                        cout<<"You are overweight "<<endl;
                break;
            }
            case '5':{
                //Declare Variables
                    float weight,mass;
                    //Prompt the User for inputs
                    cout<<"Input an object's mass "<<endl;
                    cin>>mass;
                    //Calculations
                    weight=mass*9.8;  
                    //If else statement
                    if (weight>1000)
                    cout<<"The object is too heavy"<<endl;
                    else if (weight<10)
                    cout<<"The object is too light"<<endl;
                    else
                    cout<<"The object's weight is normal"<<endl;
                break;
            }
            case '6':{
                //Declare Variables
                    float sec,min,hr,day;//Seconds,minutes,hours,days
                    //Prompt the user for inputs
                    cout<<"Input a number of seconds greater than or equal to 60 seconds "<<endl;
                    cin>>sec;
                    //calculations
                    min=sec/Min,hr=sec/Hr,day=sec/static_cast<float>(Day);
                    //If else statement
                    cout<<setprecision(2)<<fixed;
                    if (sec>=60&&sec<=3600)
                            cout<<min<<" Minutes in seconds"<<endl;
                    else if (sec>=3600&&sec<=86400)
                        cout<<hr<<" Hours in seconds"<<endl;
                    else if (sec>=86400)
                        cout<<day<<" Days in seconds"<<endl;
                    else
                        cout<<"Pleas input a value more than 60 seconds"<<endl;
                break;
            }
            case '7':{
                //Declare Variables
                    char pen=1,nckls=5,dmes=10,qrtrs=25;
                    unsigned char dllr=100;//coins
                    unsigned short Tpen,Tnckls,Tdmes,Tqrtrs,Tcoins;
                    //Prompt the user for inputs
                    cout<<"Input coins to make exactly one dollar"<<endl;
                    cout<<"Input number of pennies "<<endl;
                    cin>>Tpen;
                    cout<<"Input number of nickles "<<endl;
                    cin>>Tnckls;
                    cout<<"Input number of dimes "<<endl;
                    cin>>Tdmes;
                    cout<<"Input number of quarters "<<endl;
                    cin>>Tqrtrs;
                    //Calculations
                    Tcoins=(pen*Tpen)+(nckls*Tnckls)+(dmes*Tdmes)+(qrtrs*Tqrtrs);
                    //If statement
                    if (Tcoins==dllr)  
                        cout<<"Congratulations, you win"<<endl;
                    else if (Tcoins>dllr)
                        cout<<"Total coins is greater than one dollar "<<endl;
                    else 
                        cout<<"Total coins is less than one dollar "<<endl;
                break;
            }
        case'8':{
                //Declare Variables
                    unsigned short Rnum1=247,Rnum2=129;//Random number 1 and 2
                    unsigned short Uans,Cans;//User Answer, Correct Answer
                    //Prompt the user for inputs
                    cout<<"Solve for this addition problem "<<endl;
                    cout<<"   "<<Rnum1<<endl;
                    cout<<"+  "<<Rnum2<<endl;
                    cout <<"¯¯¯¯¯¯"<<endl;
                    cin>>Uans;
                    //Calculations
                    Cans=Rnum1+Rnum2;
                    //If statement
                    if (Uans==Cans)
                        cout<<"Congratulations, the answer is correct "<<endl;
                    else 
                        cout<<"The correct answer is "<<Cans<<endl;
                break;
            }
        case'9':{
                //Declare Variables
                    unsigned short QtyPckg,Pckg=99,QtyP,QtyP1,QtyP2,QtyP3,QtyP4;//Software package
                    float Disc1=.20,Disc2=.30,Disc3=.40,Disc4=.50;//Discount in %
                    //Prompt the user for inputs
                    cout<<"Input the number of software units purchased "<<endl;
                    cin>>QtyPckg;
                    //Calculations
                    QtyP1=((QtyPckg*Pckg)-(QtyPckg*Pckg)*Disc1);
                    QtyP2=((QtyPckg*Pckg)-(QtyPckg*Pckg)*Disc2);
                    QtyP3=((QtyPckg*Pckg)-(QtyPckg*Pckg)*Disc3);
                    QtyP4=((QtyPckg*Pckg)-(QtyPckg*Pckg)*Disc4);
                    QtyP=QtyPckg*Pckg;
                    //If statements
                    if (QtyPckg>=100)
                        cout<<"The total cost of the purchase is $"<<QtyP4<<endl;
                    else if (QtyPckg>=50&&QtyPckg<=99)
                        cout<<"The total cost of the purchase is $"<<QtyP3<<endl;
                    else if (QtyPckg>=20&&QtyPckg<=49)
                        cout<<"The Total cost of the purchase is $"<<QtyP2<<endl;
                    else if (QtyPckg>=10&&QtyPckg<=19)
                        cout<<"The Total cost of the purchase is $"<<QtyP1<<endl;
                    else if (QtyPckg>=1&&QtyPckg<=9)
                        cout<<"The total cost of the purchase is $"<<QtyP<<endl;
                    else
                        cout<<"Please input a number greater than 0 "<<endl;
                break;
            }
            default:{
                    cout<<"Exit?"<<endl;
            }
    };
    return 0;
}

