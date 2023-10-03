#include <IOSTREAM>
using namespace std;

int main(){

string card;
int len;
string suit;

cout << "Please enter what card you have in the Following format" << "\n" << "QS = Queen of Spades" << "\n" << "7C = Seven of Clubs" << "\n";

cin >> card;

len = card.length();

switch (len)
{
case 2:
    
    switch (card[1])
    {
    case 'S':
        suit = "Spade";

        switch (card[0])
        {
        case 'A':
            cout << "You have Ace of " << suit << "\n";
            break;
        case 'K':
            cout << "You have King of " << suit << "\n";
            break;
        case 'Q':
            cout << "You have Queen of " << suit << "\n";
            break;
        case 'J':
            cout << "You have Jack of " << suit << "\n";
            break;
        case '9':
            cout << "You have Nine of " << suit << "\n";
            break;
        case '8':
            cout << "You have Eight of " << suit << "\n";
            break;
        case '7':
            cout << "You have Seven of " << suit << "\n";
            break;
        case '6':
            cout << "You have Six of " << suit << "\n";
            break;
        case '5':
            cout << "You have Five of " << suit << "\n";
            break;
        case '4':
            cout << "You have Four of " << suit << "\n";
            break;
        case '3':
            cout << "You have Three of " << suit << "\n";
            break;
        case '2':
            cout << "You have Two of " << suit << "\n";
            break;
        default:
            cout << "That is an Invalid Input" << "\n";
            break;
        }


        break;
    case 'D':

        suit = "Diamond";

        switch (card[0])
        {
        case 'A':
            cout << "You have Ace of " << suit << "\n";
            break;
        case 'K':
            cout << "You have King of " << suit << "\n";
            break;
        case 'Q':
            cout << "You have Queen of " << suit << "\n";
            break;
        case 'J':
            cout << "You have Jack of " << suit << "\n";
            break;
        case '9':
            cout << "You have Nine of " << suit << "\n";
            break;
        case '8':
            cout << "You have Eight of " << suit << "\n";
            break;
        case '7':
            cout << "You have Seven of " << suit << "\n";
            break;
        case '6':
            cout << "You have Six of " << suit << "\n";
            break;
        case '5':
            cout << "You have Five of " << suit << "\n";
            break;
        case '4':
            cout << "You have Four of " << suit << "\n";
            break;
        case '3':
            cout << "You have Three of " << suit << "\n";
            break;
        case '2':
            cout << "You have Two of " << suit << "\n";
            break;
        default:
            cout << "That is an Invalid Input" << "\n";
            break;
        }        

        break;
    case 'C':

        suit = "Club";

        switch (card[0])
        {
        case 'A':
            cout << "You have Ace of " << suit << "\n";
            break;
        case 'K':
            cout << "You have King of " << suit << "\n";
            break;
        case 'Q':
            cout << "You have Queen of " << suit << "\n";
            break;
        case 'J':
            cout << "You have Jack of " << suit << "\n";
            break;
        case '9':
            cout << "You have Nine of " << suit << "\n";
            break;
        case '8':
            cout << "You have Eight of " << suit << "\n";
            break;
        case '7':
            cout << "You have Seven of " << suit << "\n";
            break;
        case '6':
            cout << "You have Six of " << suit << "\n";
            break;
        case '5':
            cout << "You have Five of " << suit << "\n";
            break;
        case '4':
            cout << "You have Four of " << suit << "\n";
            break;
        case '3':
            cout << "You have Three of " << suit << "\n";
            break;
        case '2':
            cout << "You have Two of " << suit << "\n";
            break;
        default:
            cout << "That is an Invalid Input" << "\n";
            break;
        }


        break;
    case 'H':

        suit = "Hearts";

        switch (card[0])
        {
        case 'A':
            cout << "You have Ace of " << suit << "\n";
            break;
        case 'K':
            cout << "You have King of " << suit << "\n";
            break;
        case 'Q':
            cout << "You have Queen of " << suit << "\n";
            break;
        case 'J':
            cout << "You have Jack of " << suit << "\n";
            break;
        case '9':
            cout << "You have Nine of " << suit << "\n";
            break;
        case '8':
            cout << "You have Eight of " << suit << "\n";
            break;
        case '7':
            cout << "You have Seven of " << suit << "\n";
            break;
        case '6':
            cout << "You have Six of " << suit << "\n";
            break;
        case '5':
            cout << "You have Five of " << suit << "\n";
            break;
        case '4':
            cout << "You have Four of " << suit << "\n";
            break;
        case '3':
            cout << "You have Three of " << suit << "\n";
            break;
        case '2':
            cout << "You have Two of " << suit << "\n";
            break;
        default:
            cout << "That is an Invalid Input" << "\n";
            break;
        }        

    break;
    }
case 3:

    switch (card[2])
    {
    case 'S':
        cout << "You have 10 of Spades" << "\n";
        break;
    case 'D':
        cout << "You have 10 of Diamonds" << "\n";
        break;
    case 'C':
        cout << "You have 10 of Clubs" << "\n";
        break;
    case 'H':
        cout << "You have 10 of Hearts" << "\n";
        break;
    default:
        cout << "That is an Invalid Input" << "\n";
        break;
    }
    break;
default:
    cout << "That is an Invalid Input" << "\n";
    break;

}
}