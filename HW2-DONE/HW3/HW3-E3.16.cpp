#include <IOSTREAM>
using namespace std;

/*
Write a unit conversion program that asks which unit to convert from (fl. ox, gal, oz, lb, in, ft, mi) and which unit to convert
to (ml, l, g, kg, mm, cm, m, km). Reject incompatible conversions such as gal to km. Also ask for value to be converted and display answer.
*/

int main(){

float Mea;
float newMea;
int Unit;
int NewUnit;


cout << "\n" << "Please Enter the Measurement of the Unit you need to convert " << "\n";
cin >> Mea;

cout << "Please Enter the Unit of the Measurement to be converted from the Following Options" << "\n" << "1. fl.oz" << "\n" << "2. gal" << "\n" "3. oz" << "\n" << "4. lb" << "\n" << "5. in" << "\n" << "6. ft" << "\n" << "7. mi" << "\n";
cin >> Unit;


switch (Unit)
{
case 1: //Converting from Fl. Oz 
    cout << "\n" <<"Please Select the Unit to convert to from the following options" << "\n" << "1. ml" << "\n" << "2. l" << "\n";
    cin >> NewUnit;
    switch (NewUnit)
    {
    case 1: //Converting to ml
        newMea = Mea * 29.5735;
        cout << Mea << " fl. oz is " << newMea << " Ml" << "\n";
        break;
    case 2: //Converting to l
        newMea = Mea * 0.0295735;
        cout << Mea << " fl. oz is " << newMea << " l" << "\n";
        break;
    default:
        cout << "That is an Invalid Input";
        break;
    }
    break;
case 2: //Converting from Gal
    cout << "Please Select the Unit to convert to from the following options" << "\n" << "1. ml" << "\n" << "2. l" << "\n";
    cin >> NewUnit;
    switch (NewUnit)
    {
    case 1: //Converting to ml
        newMea = Mea * 3785.41;
        cout << Mea << " Gal is " << newMea << " Ml" << "\n"; 
        break;
    case 2: //Converting to l
        newMea = Mea * 3.78540999993543;
        cout << Mea << " Gal is " << newMea << " l" << "\n"; 
        break;
    
    default:
        cout << "That is an Invalid Input";
        break;
    }    
    break;

case 3: //Converting from Oz
    
    cout << "\n" <<"Please Select the Unit to convert to from the following options" << "\n" << "1. g" << "\n" << "2. kg" << "\n";
    cin >> NewUnit;
    switch (NewUnit)
    {
    case 1:
        newMea = Mea * 28.3495;
        cout << Mea << " Oz is " << newMea << " g" << "\n";
        break;
    case 2:
        newMea = Mea * .02834;
        cout << Mea << " Oz is " << newMea << " kg" << "\n";
        break;
    default:
        cout << "That is an Invalid Input";
        break;
    }
    break;
case 4: //Converting from lb

    cout << "\n" <<"Please Select the Unit to convert to from the following options" << "\n" << "1. g" << "\n" << "2. kg" << "\n";
    cin >> NewUnit;
    switch (NewUnit)
    {
    case 1:
        newMea = Mea * 453.59;
        cout << Mea << " lb is " << newMea << " g" << "\n";
        break;
    case 2:
        newMea = Mea * .4535;
        cout << Mea << " lb is " << newMea << " kg" << "\n";
        break;
    default:
        cout << "That is an Invalid Input";
        break;
    }
    break;
case 5: //converting from In

    cout << "\n" <<"Please Select the Unit to convert to from the following options" << "\n" << "1. mm" << "\n" << "2. cm" << "\n" << "3. m" << "\n" << "4. km" << "\n";
    cin >> NewUnit;
    switch (NewUnit)
    {
    case 1:
        newMea = Mea * 25.4;
        cout << Mea << " In is " << newMea << " mm" << "\n";
        break;
    case 2:
        newMea = Mea * 2.54;
        cout << Mea << " In is " << newMea << " cm" << "\n";
        break;
    case 3:
        newMea = Mea * .0254;
        cout << Mea << " In is " << newMea << " m" << "\n";
        break;
    case 4:
        newMea = Mea * .0000254;
        cout << Mea << " In is " << newMea << " km" << "\n";
        break;
    default:
        cout << "That is an Invalid Input";
        break;
    }
    break;
case 6: //converting from Ft
    cout << "\n" <<"Please Select the Unit to convert to from the following options" << "\n" << "1. mm" << "\n" << "2. cm" << "\n" << "3. m" << "\n" << "4. km" << "\n";
    cin >> NewUnit;
    switch (NewUnit)
    {
    case 1:
        newMea = Mea * 304.8;
        cout << Mea << " Ft is " << newMea << " mm" << "\n";
        break;
    case 2:
        newMea = Mea * 30.48;
        cout << Mea << " Ft is " << newMea << " cm" << "\n";
        break;
    case 3:
        newMea = Mea * .3048;
        cout << Mea << " Ft is " << newMea << " m" << "\n";
        break;
    case 4:
        newMea = Mea * .0003048;
        cout << Mea << " Ft is " << newMea << " km" << "\n";
        break;
    default:
        cout << "That is an Invalid Input";
        break;
    }
    break;
case 7: // Convert From Mi
    cout << "\n" <<"Please Select the Unit to convert to from the following options" << "\n" << "1. mm" << "\n" << "2. cm" << "\n" << "3. m" << "\n" << "4. km" << "\n";
    cin >> NewUnit;
    switch (NewUnit)
    {
    case 1:
        newMea = Mea * 1609344;
        cout << Mea << " Mi is " << newMea << " mm" << "\n";
        break;
    case 2:
        newMea = Mea * 160934.4;
        cout << Mea << " Mi is " << newMea << " cm" << "\n";
        break;
    case 3:
        newMea = Mea * 1609.344;
        cout << Mea << " Mi is " << newMea << " m" << "\n";
        break;
    case 4:
        newMea = Mea * 1.609344;
        cout << Mea << " Mi is " << newMea << " km" << "\n";
    default:
        cout << "That is an Invalid Input";
        break;
    }
    break;
default:
    cout << "That is an Invalid Input";
    break;
}}