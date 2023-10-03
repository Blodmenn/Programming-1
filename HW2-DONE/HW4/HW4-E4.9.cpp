#include <iostream>
using namespace std;

/*  E4.9 Write a program to read a word and print each character of the word on a separate line. For example, entry of “Harry” should result in:

H

a

r

r

y

*/

int main (){

string In; //creates String In 

cout << "Please enter a Word" << "\n"; //Prompts using to enter a number.
getline(cin, In);

int i; // intitalize i 
i = In.length(); //length and stores it in i

int cursor = 0; // declares the int used to select our postion in the array in the for loop below

for(int x; x <= i ; x++){ //runs until X equals the length of the string

cout << In[cursor] << "\n" << "\n"; //Outputs the string with a space starting at 0. Cursors starting state.

cursor++;//increments cursor by 1 for each time the loop runs


}
}