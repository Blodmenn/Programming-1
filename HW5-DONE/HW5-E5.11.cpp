#include <iostream>
using namespace std;

//functions
double sph_vol(double r){
    double sphvol = ( 4 / 3 ) * 3.14159 * ( r * r * r);
    return sphvol;
}
double sph_surf(double r){
   double sphsurf = 4 * 3.14159 * ( r * r );
   return sphsurf;
}
double cyl_vol(double r,double h){
    double cylvol = (3.14159 * r * r)*h;
    return cylvol;
}
double cyl_surf(double r,double h){
    double cylsurf = (2 * 3.14159 * r)*h;
    return cylsurf;
}
double cone_vol(double r, double h){
    double conevol = .33*(3.14159 * (r * r) * h);
    return conevol;
}
double cone_surf(double r, double h){
    double s = sqrt((r*r)+(h*h));
    double conesurf = (3.14159 * r) * (r+s);
    return conesurf;
}

int main(){

double h;
double r;

cout << "Please enter the height of your object : ";//Gets height input from user
cin >> h;
cout << "\n";

cout << "Please enter the radious of your object : ";//Gets radious input from user
cin >> r;
cout << "\n";

cout << "If your object is a sphere it volume and area are :" << "\n"; // calls function to calculate Surf Area and Volume for the stated shape and outputs to user
cout << "Surface area :" << sph_surf(r) << "\n";
cout << "Volume :" << sph_vol(r) << "\n";

cout << "If your object is a cyclinder it volume and area are :" << "\n"; // calls function to calculate Surf Area and Volume for the stated shape and outputs to user
cout << "Surface area :" << cyl_surf(r,h) << "\n";
cout << "Volume :" << cyl_vol(r,h) << "\n";

cout << "If your object is a cone it volume and area are :" << "\n"; // calls function to calculate Surf Area and Volume for the stated shape and outputs to user
cout << "Surface area :" << cone_surf(r,h) << "\n";
cout << "Volume :" << cone_vol(r,h) << "\n";

}