#include <IOSTREAM>
using namespace std;

int main(){

float discount; //declaring all variables
float disPerc;
float members;
float rentals;

cout << "How many people refered by you became a member " << "\n"; //prompts user to input the number of members they recruited assumed in one month.
cin >> members;

cout << "How many videos did you rent " << "\n"; //prompts user to input the number of videos they rented assumed in one month.
cin >> rentals;

discount = (rentals*.25) + (members*4); //calculates the discount with members being weighted at 4 percent per joined and Videos rented at .25 percent per.

if (discount >= 75){ //catches any discount more than 75% and prints out 75% instead

cout <<  "your discount is " << 75 << "%" << "\n";

}

else

cout << "your discount is " << discount << "%" << "\n"; //outputs the real discount if its below 75%


}