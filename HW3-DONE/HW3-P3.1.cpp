#include <IOSTREAM>
#include <string>
using namespace std;

/* Write a program that translates a letter grade into a number grade. Letter grades are A, B, C, D, and F, possibly followed
 by + or -. Their numeric values are 4, 3, 2, 1, and 0. There is no F+ or F-. A + increases the numeric value by .3
 while a - decreases it by .3. An A+ has a value of 4.0. */

int main(){

string Grade;
bool Check;

cout << "Please enter your grade following the Format bellow (Capitalization Matters)" << "\n" << "A, A-, B+, B, B-, C+, C, C-, D+, D, F" << "\n";
cin >> Grade;

switch (Grade[0])
{
case 'A':
    
    switch (Grade[1])
    {
    case ' ':
        cout << "Your grade is 4.0"<<"\n";
        break;
    case '-':
        cout << "Your grade is 3.7" << "\n";
        break;
    default:
        cout << "Your grade is 4.0"<<"\n";
        break;
    }
    break;
case 'B':
   
    switch (Grade[1])
    {
    case '+':
        cout << "Your grade is 3.3" << "\n";
        break;
    case ' ':
        cout << "Your Grade is 3.0" << "\n";
        break;
    case '-':
        cout << "Your grade is 2.7" << "\n";
        break;
    default:
        cout << "TYour grade is 3.0" << "\n";
        break;
    }

    break;
case 'C':
    
    switch (Grade[1])
    {
    case '+':
        cout << "Your grade is 2.3" << "\n";
        break;
    case ' ':
        cout << "Your grade is 2.0" << "\n";
        break;
    case '-':
        cout << "Your Grade is 1.7" << "\n";
        break;
    default:
        cout << "Your grade is 2.0" << "\n";
        break;
    }

    break;
case 'D':
    
    switch (Grade[1])
    {
    case '+':
        cout << "Your grade is 1.3" << "\n";
        break;
    case ' ':
        cout << "Your grade is 1.0";
        break;
    case '-':
    default:
        cout << "Your grade is 1.0" << "\n";
        break;
    }
    break;
case 'F':
    cout << "Your grade is 0.0";
    break;
default:
    cout << "That is an Invalid Input" << "\n" << "Please Try again and remember capitalization matters" << "\n";
    break;
}
}