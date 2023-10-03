#include <iostream>
using namespace std;

/*  P4.16 Write a program that asks the user to type today’s exchange rate between U.S.
 Dollars and Japanese Yen, then reads U.S. dollar values and convers tot yen. Use 0 as a sentinel.  */

int main(){

int rate;
float US;
int yen;
int input;
char select;
cout << "What is the exchange rate if dollar to yen (Enter how many Yen 1 dollar is worth) : "  ;

cin >> rate;

cout << "\n" << " Please enter the amount of currency you have : ";
cin >> input;

cout << "\n" << "Are you converting to Yen(Y) or Dollars(D) (Please enter Y or D) : ";
cin >> select;

switch (select)
{
case 'Y':
    yen = input * rate;
    cout << "\n" <<  "In yen " << input << " Dollars is " << yen;
    break;

case 'D':
    US = input * rate;
    cout << "\n" << "In dollars " << input << " Yen is " << US;
    break;

case 'y':
    yen = input * rate;
    cout << "\n" <<  "In yen " << input << " Dollars is " << yen;
    break;

case 'd':
    US = input * rate;
    cout << "\n" << "dollars " << input << " Yen is " << US;
    break; 
default:
    cout << "Thats an Invalid input";
    break;
}




}
