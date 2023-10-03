#include <iostream>
using namespace std;

/*  E4.2 Write a program to read a sequence of integer inputs and print:

a.       The largest and smallest of the inputs

b.      The number of even and odd inputs

c.       Cumulative totals. For example, if the input is 1 7 2 9, the program should print 1 8 10 19

d.      All adjacent duplicates. For example, if the input is 1 3 3 4 5 5 6 6 2, then the program should print 3 5 6   */

int main (){

int input;
int number;
int ctotal = 0;
int largest = 0;
int smallest;
int evens;
int odds;
int check; 


cout << "Please enter the numbers of inputs" << "\n" << "Number of Entrys : ";
cin >> number;

string dups[number];


for (int i = 0; i < number; i++){




cout << "Please enter your Number = ";
cin >> input;
cout << "\n";
ctotal += input;


if (input/2 == 2){
    evens++;
}
else odds++;

if(input > largest){
    largest = input;
}  else

if(i == 0){
    smallest = input;
}
    else

if(input < smallest){
    smallest = input;
}

if (input == check){ // checks the input against the Check which is the last input stored in the Check Varible
    dups[i] = input;
    dups [i + 1] = ' ';
} else
    

cout << "the total so far is " << ctotal;


int check = input;
cout << "\n";
}

cout << "The largest number entered is " << largest << "\n";
cout << "The Smallest number entered is " << smallest << "\n";
cout << "The adjacent duplicates are " << dups << "\n";

}