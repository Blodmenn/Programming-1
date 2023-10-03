#include <IOSTREAM>
//#include <string>
using namespace std;
/*
Write a program that reads an integer and breaks it into a sequence of individual digits. For example, the input 16384 
is displayed as: 1 6 3 8 4. You may assume the input has no more than five digits and is not negative.
*/

int main(){

string In; //creates String In 

cout << "Please enter a number" << "\n"; //Prompts using to enter a number.
getline(cin, In);

int i; 
i = In.length(); //length and stores it in I


int cursor = 0; // declares the int used to select our postion in the array in the for loop below


for(int x; x <= i ; x++){ //runs until X equals the length of the string

cout << In[cursor] << " "; //Outputs the string with a space starting at 0. Cursors starting state.

cursor++;//increments cursor by 1 for each time the loop runs

}
}