#include <iostream>
using namespace std;

/*  E4.5 Write a program to read a set of floating-point numbers. Ask the user to enter the values, then print:

·         The average of the values

·         The largest and smallest

·         The range (the difference between the smallest and largest values)   */

int main(){

float input;
float number;
float avg;
float largest;
float smallest;
float diff;
float total;

cout << "How many decimal numbers do you want to enter : ";
cin >> number;


for(int i = 0; i < (int)number; i++){

    cout << "Please input you decimal number : ";
    cin >> input;
    total = total + input;


if(i == 0){
    smallest = input;
} else

if(input > largest){
    largest = input;
}  else

if(input < smallest){
    smallest = input;
}



}

diff = largest - smallest;
avg = total / number;

cout << "The average of these numbers is " << avg << "\n";
cout << " The largest number entered is " << largest << " The smallest number is " << smallest << "\n";
cout << " The range for this set of numbers is " << diff << "\n";

}