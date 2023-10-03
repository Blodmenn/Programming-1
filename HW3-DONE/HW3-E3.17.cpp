#include <IOSTREAM>
using namespace std;

/*Ask the user to provide a single alphabetic character. Print Vowel or Consonant depending on the input.
If the user provides an input thats not a letter (between a and z or A and Z) or is a string of length > 1, print an error.*/

int main(){

char In;
bool isVowel;
bool isVowellower;

cout << "Please Enter a single alphabetic character" << "\n";

cin >> In;

isVowel = (In == ('A'))||(In == ('E')) ||(In == ('I'))||(In == ('O'))||(In == ('U'));
isVowellower = (In == ('a'))||(In == ('e')) ||(In == ('i'))||(In == ('o'))||(In == ('u'));

if ((isVowel == true) | (isVowellower == true)){
    cout << "You entered a Vowel" << "\n";
}
    else
    cout << "You entered a Consonant" << "\n";
}
