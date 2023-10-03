#include <IOSTREAM>
#include <math.h>
using namespace std;

/*Write a program that reads the number of degrees away from North (the angle) of a compass needle and prints the direction 
(N, NE, E, SE, S, SW, W, NW). in case of a tie between pick the nearest principal direction (N, S, E, W). */

int main(){

int input; // Declares varible for degrees from north
int degree; //intilizes varible for degree
int roundto = 5;  //declares nearest number to round to

cout << "Please input your heading in Degrees away from North" << "\n"; //Propts user to enter degrees from north
cin >> input; //Stores user input

degree = ((input + roundto/2) / roundto) * roundto; //rounds to the nearest 5 and stores in degree
/*This was used in a previous version I kept this cause I think it will be useful later and as a plus makes the numbers 
below easier to deal with in my head */

switch (degree) //Outputs direction based on degree rounding to the nearest Direction (using input rounded to the nearest 5)
{
case 340 ... 360: //Catch Degrees between 340 and 20 and output North
case 0 ... 20:    
    cout << "With your heading of " << input << " You are heading North" << "\n"; 
    break;
case 25 ... 65: //Catch Degrees between 25 and 65 and output East
    cout << "With your heading of " << input << " You are heading North East" << "\n";
    break;
case 70 ... 110: //Catch Degrees between 70 and 110 and output East
    cout << "With your heading of " << input << " You are heading East" << "\n";
    break;
case 115 ... 155: //Catch Degrees between 115 and 155 and output South East
    cout << "With your heading of " << input << " You are heading South East" << "\n";
    break;
case 160 ... 200: //Catch Degrees between 160 and 200 and output South
    cout << "With your heading of " << input << " You are heading South" << "\n";
    break;
case 205 ... 245: //Catch Degrees between 205 and 245 and output South West
    cout << "With your heading of " << input << "You are heading South West" << "\n";
    break;
case 250 ... 290: //Catch Degrees between 250 and 290 and output West
    cout << "With your heading of " << input << " You are heading West" << "\n";
    break;
case 295 ... 335: //Catch Degrees between 295 and 335 and output North West 
    cout << "With your heading of " << input << " You are heading North West" << "\n";
    break;
default: //Catch for Invalid Inputs that Outputs an error message
     cout << "Thats an invalid input" << "\n" << "How could you break my Code you monster?! (;_;)";
    break;
}}