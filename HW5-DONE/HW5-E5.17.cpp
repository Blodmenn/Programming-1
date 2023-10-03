#include <iostream>
using namespace std;

int one(){

cout << "Slather your condiments on the bottom slice of bread." << "\n"
 << "Add the densest vegetables, like pickles, followed by the lettuce and then the tomato." << "\n"
<< "Add the cheese." << "\n"
<< "Add the meat." << "\n"
<< "Spread another layer of condiments on the top slice of bread."  << " ORDERED 1";
}
int two(){

    cout << "Slather your condiments on the bottom slice of bread." << "\n"
 << "Add the densest vegetables, like pickles, followed by the lettuce and then the tomato." << "\n"
<< "Add the cheese." << "\n"
<< "Add the meat." << "\n"
<< "Spread another layer of condiments on the top slice of bread." << " ORDERED 2";
}
int three(){

    cout << "Slather your condiments on the bottom slice of bread." << "\n"
 << "Add the densest vegetables, like pickles, followed by the lettuce and then the tomato." << "\n"
<< "Add the cheese." << "\n"
<< "Add the meat." << "\n"
<< "Spread another layer of condiments on the top slice of bread." << " ORDERED 3";
}
int main(){

    int order;
    cout << "Please enter what you'd like to order" << "\n" << "1 . Sandwich" << "\n" << "2 . Sandwich" << "\n" << "3 . Sandwich" << "\n";
   
   cout << "Enter here :";
    cin >>  order;

        switch (order)
        {
        case 1:
            one();
            break;
         case 2:
            two();
            break;
         case 3:
            three();
            break;
        
        default:
            cout << "Thats not on the menu";
            break;
    }
}
