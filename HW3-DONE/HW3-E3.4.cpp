#include <IOSTREAM>
using namespace std;

//Write a program that reads 3 numbers and prints "all the same" if they are all the same, "all different" or "neither", otherwise.

int main(){

int A; // declaring variables to be used in program.
int B;
int C;

cout << "Please enter 3 numbers to see if they are all the same" << "\n";

cout << "Please input the first number" << "\n"; //Promts the user to input the first number to compare.
cin >> A;

cout << "Please input the first number" << "\n"; //Promts the user to input the second number to compare.
cin >> B;

cout << "Please input the first number" << "\n"; //Promts the user to input the third number to compare.
cin >> C;

if(A == B && A == C && B == C ){

cout << "All the numbers are the same" << "\n";

}
else 

cout << "The numbers are not all the same" << "\n";


}