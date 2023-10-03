#include <iostream>
#include <math.h>
using namespace std;

//Functions
double interest(double bal, double rate, int years){

double gainz = bal * (pow((1 + rate / 100), years));

return gainz;
}


int main(){

double intbal;
double rate;
int time;

cout << "Please enter the starting balance : ";
cin >> intbal;
cout << "\n";

cout << "Please enter the interest rate without the percent sign : ";
cin >> rate;
cout << "\n";

cout << "Please enter how many years its been vesting : ";
cin >> time;
cout << "\n";

cout << "Over " << time << "your inital " << intbal << " will grow to " << interest(intbal,rate,time) << " this is a growth of " << interest(intbal,rate,time)-intbal;

}