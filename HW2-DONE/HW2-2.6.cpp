#include <IOSTREAM>

int main(){

float M; //Meters to be grabbed from input
float Ft; // Feet converted from Meters
float In; // Inch Converted from Feet
float Mile; // Mile Converted from Feet


std::cout << "Please Enter a measurement in Meters" <<"\n"; // Promts user for a measurement in Meters
std::cin >> M;

Ft = M*3.28084; // Converts M -> Ft
In = Ft*12; // Converts Ft -> In
Mile = Ft/5280; // Converts Ft -> Mile

std::cout << M << " Meters is " << Ft << " Feet" << "\n"; //Outputs the Inputed measurement as Feet,Inch and Miles
std::cout << M << " Meters is " << In << " Inch" << "\n";
std::cout << M << " Meters is " << Mile << " Miles" << "\n";

}