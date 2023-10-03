#include <iostream>
using namespace std;

char letter(int first){
    
    switch (first)
    {
    case 4:
        return 'A';
        break;
    case 3:
        return 'B';
        break;
    case 2:
        return 'C';
        break;
    case 1:
        return 'D';
        break;
    case 0:
        return 'F';
        break;
    default:
        break;
    }

}

char posneg(int second){

    if(second > 5){
        return '+';
    }
        else
            if (second < 5){
                return '-';
            }
                else 
                    return ' ';
}

int main(){

int first;
int second;

cout << "Please enter the grade for the student" << "\n";

cout << "Please enter the non-decimal portion of the grade :";
cin >> first;   cout << "\n";

cout << "Please enter the decimal portion of the grade with out a decimal or extra characters :";
cin >> second;   cout << "\n";

char letgrad = letter(first);
char pn = posneg(second);

if (letgrad == 'A' || 'F'){
    
    cout << "Your letter grade is an : " << letgrad << "\n";
    
    } else
    
cout << "Your letter grade is an : " << letgrad << pn << "\n";

}
