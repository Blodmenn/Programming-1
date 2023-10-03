#include <IOSTREAM>
/*Write a program that asks the user for the lengths of the sides of a rectangle and then prints
The area and perimeter and length of the diagonal (use the Pythagorean theorem)*/

int main(){

float Length;//Declaring Variables Length, Width, Area, Parimeter, and Diagonal Length
float Width;
float area;
float pari;
float diag;

std::cout << "Please Enter the length of a rectangle" << "\n"; // Getting Length from Input
std::cin >> Length;

std::cout << "Please Enter the Width of a rectangle" << "\n"; // Getting Width from Input
std::cin >> Width;

area = Length*Width;                // Calculations for Area, Parimeter, and Diagonal
pari = (Length+Length)+(Width+Width);
diag = sqrt((Length,2)+pow(Width,2));//Use Pythagoras 

std::cout << "The area of the Rectangle is "<< area << "\n";        //Output all calculations
std::cout << "The parimeter of the Retangle is " << pari << "\n";
std::cout << "The Diagional of the rectangle is "<< diag << "\n";

}