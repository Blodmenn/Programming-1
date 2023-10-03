#include <iostream>
#include <string.h>
using namespace std;

//functions

void middle(string s0, int len, sting mid&  ){
    

bool even = false;
string s1[] = {s0};

 if(len/2){
    even = true;
 } else
    if(even){
        int mid1 = len/2;
        int mid2 = mid1 + 1;

        string midd1 = s1[mid1];
        string midd2 = s1[mid2];

        return midd1;
        return midd2;
    }
        else 
            if(!even){
        int n1 = len/2+1;

        string midd2 = s1[n1];

        return midd2;
        }
}

int main(){

string word;
string mid;
string mid2;


cout <<  "Please enter a string :";
cin >> word;
cout << "\n";

int len = word.length();



    cout << "The middle of the string you entered is " ;
}