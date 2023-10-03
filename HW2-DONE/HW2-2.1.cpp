#include <IOSTREAM>
using namespace std;

int main(){

int year; //declares all variables needed for calculations.
int A;
int B;
int C;
int D;
int E;
int G;
int H;
int J;
int K;
int M;
int N;
int R;
int P;

cout << "Please enter the Year you wanna know the date for Easter." << "\n"; //Promts using to input they year they wanna konw the date for easter
cin >> year;

A = year%19;
B = year/100;
C= year%100;
D = B/4;
E = B%4;
G = ((8*B)+13)/25;      //performs the calculations to determine the date for easter.
H = (19*A+B-D-G+15)/30;
J = C/4;
K = C%4;
M = (A+11*H)/319;
R = (2*E+2*J-K-H+M+32)%7;
N = (H-M+R+90)/25;
P =(H-M+R+N+19)%32;

cout << "Easter in the Year " << year << " Falls on " << N << "/" << P << "\n"; //Outputs the date easter fall on in a given year




}