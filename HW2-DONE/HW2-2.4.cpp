#include <IOSTREAM>

int main(){

int A;  // Declaring Both inputs A, B along with all outputs Sum, Diff, Prod, Avg
int B;
int Sum;
int Diff;
int Prod;
int Avg;

std::cout << "Please Enter Two Numbers" << "\n"; //Promting the User two numbers will be requested
std::cout << "Please Enter the First" << "\n"; // Promt user to enter First Number
std::cin >> A;
std::cout << "Please Enter the Second" << "\n"; // Promt user to enter Second Number
std::cin >> B;  

int sum = A+B;                      //Calc Sum
int diff = A-B;                     //Calc Diffrence
int prod = A*B;                     //Calc Product
int avg = Sum/2;                    //Calc Average

int diffabs = abs(diff); //gets the Absolute Value of the Diffrence

std::cout << "The sum of the Two numbers is " << sum << "\n";                               //Outputs all calculated results
std::cout << "The Absolute Diffrence of the Two numbers is " << diffabs <<"\n";
std::cout << "The Product of the Two numbers is " << prod <<"\n";
std::cout << "The Average of the Two numbers is " << avg << "\n";

}