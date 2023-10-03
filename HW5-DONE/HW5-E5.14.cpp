#include <iostream>
using namespace std;

void swap(int& n1, int& n2){

int temp;

if(n1 > n2){
 temp = n1;
 n1 = n2;
 n2 = temp;
}
    else    
        return;
}


int main(){
 
int num1;
int num2;
int count;
int runs = 1;

cout << "How many pairs of numbers do you need to sort : ";
cin >> count; cout << "\n";

for (int i = 0; i < count; i++)
{

cout << "Please enter two numbers for the " <<  runs << " pair" << '\n';

cout << "Please enter the first number : ";
cin >> num1;  cout << '\n';

cout << "Please enter the second number : ";
cin >> num2;  cout << '\n';

swap(num1, num2);

cout << "pair " << runs << "'s set of numbers sorted is " << num1 << " followed by " << num2 << "\n" << "\n";

runs++;
}
}