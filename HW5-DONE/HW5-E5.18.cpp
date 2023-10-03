#include <iostream>
using namespace std;

int score(string word){

int i; 
i = word.length(); //length and stores it in i;
int total = 0;
int cursor = 0; // declares the int used to select our postion in the array in the for loop below


for(int x = 0; x < i ; x++){ //runs until X equals the length of the string

switch (word[cursor])
{
case 'E':
    total = total + 1;
    break;
case 'A':
    total = total + 1;
    break;
case 'I':
    total = total + 1;
    break;
case 'O':
    total = total + 1;
    break;
case 'N':
    total = total + 1;
    break;
case 'R':
    total = total + 1;
    break;
case 'T':
    total = total + 1;
    break;
case 'L':
    total = total + 1;
    break;
case 'S':
    total = total + 1;
    break;
case 'U':
    total = total + 1;
    break;

case 'D':
    total = total + 2;
    break;
case 'G':
    total = total + 2;
    break;

case 'B':
    total = total + 3;
    break;
case 'C':
    total = total + 3;
    break;
case 'M':
    total = total + 3;
    break;
case 'P':
    total = total + 3;
    break;

case 'F':
    total = total + 4;
    break;
case 'H':
    total = total + 4;
    break;
case 'V':
    total = total + 4;
    break;
case 'W':
    total = total + 4;
    break;
case 'Y':
    total = total + 4;
    break;
case 'K':
    total = total + 5;
    break;
case 'J':
    total = total + 8;
    break;
case 'X':
    total = total + 8;
    break;
case 'Q':
    total = total + 10;
    break;
case 'Z':
    total = total + 10;
    break;
default:
    total = total + 0;
    break;
}


cursor++;//increments cursor by 1 for each time the loop runs

}
return total;
}


int main(){

    string word;


cout << "Please enter the Word you played in ALL CAPS : ";
cin >> word;
cout << "\n";

int scr = 0;
scr = score(word);

cout << "You earned : " << scr << " Pts for that word" << "\n"; 

}
