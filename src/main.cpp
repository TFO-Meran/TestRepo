// ****************************************************************************
// ****************************************************************************
//
//                        S C H U L A R B E I T  1
//
// ****************************************************************************
// ****************************************************************************

#include <iostream>
#include <windows.h>
#include <fstream>

using namespace std;

struct s_card
{
    char rank;
    char suit;
};

void card_write(string &card)
{
    // cout << card[0] << " " << card[1] << endl;

    switch (card[0])
    {
    case 'A':
        cout << "Ace";
        break;
    case '2':
        cout << "Two";
        break;
    case '3':
        cout << "Three";
        break;
    case '4':
        cout << "Four";
        break;
    case '5':
        cout << "Five";
        break;
    case '6':
        cout << "Six";
        break;
    case '7':
        cout << "Seven";
        break;
    case '8':
        cout << "Eight";
        break;
    case '9':
        cout << "Nine";
        break;
    case 'X':
        cout << "Ten";
        break;
    case 'J':
        cout << "Jack";
        break;
    case 'Q':
        cout << "Queen";
        break;
    case 'K':
        cout << "King";
        break;

    default:
        break;
    }

    cout << " of ";

    switch (card[1])
    {
    case 'C':
        cout << "Clubs \u2663";
        break;
    case 'S':
        cout << "Spades \u2660";
        break;

    default:
        break;
    }
}

//=============================================================================
//                           MAIN
//=============================================================================

int main(int, char **)
{
    SetConsoleOutputCP(CP_UTF8);
    srand(time(NULL));

    cout << "Geben Sie die Karte ein: ";
    string card;
    cin >> card;

    card_write(card);

    cout << "\nGeben Sie die Anzahl der zu erzeugenden Karten ein: ";
    int nbr_cards = 0;
    cin >> nbr_cards;

    s_card cards[nbr_cards];

    for (int i = 0; i < nbr_cards; i++)
    {
        int r = rand() % 13; // zahl zwischen 0 und 12
        switch (r)
        {
        case 0:
            cards[i].rank = 'A';
            break;
        case 1:
            cards[i].rank = '2';
            break;
        case 2:
            cards[i].rank = '3';
            break;
        case 3:
            cards[i].rank = '4';
            break;
        case 4:
            cards[i].rank = '5';
            break;
        case 5:
            cards[i].rank = '6';
            break;
        case 6:
            cards[i].rank = '7';
            break;
        case 7:
            cards[i].rank = '8';
            break;
        case 8:
            cards[i].rank = '9';
            break;
        case 9:
            cards[i].rank = 'X';
            break;
        case 10:
            cards[i].rank = 'J';
            break;
        case 11:
            cards[i].rank = 'Q';
            break;
        case 12:
            cards[i].rank = 'K';
            break;

        default:
            break;
        }

        int s = rand() % 4; // zahl zwischen 0 und 12

        switch (s)
        {
        case 0:
            cards[i].suit = 'C';
            break;
        case 1:
            cards[i].suit = 'S';
            break;
        case 2:
            cards[i].suit = 'H';
            break;
        case 3:
            cards[i].suit = 'D';
            break;

        default:
            break;
        }

        string card_string;
        card_string = cards[i].rank + cards[i].suit + '\0';

        card_write(card_string);
    }

    // srand(time(NULL));

    // fstream datei;
    // string pfad = "..\\src\\daten.csv";
    // datei.open(pfad);

    // datei.seekp(0, ios::end);     // Öffnet die Datei vom Ende her..
    // int filesize = datei.tellg(); // gibt die absolute Position=Anzahl an Bytes zurück..
    // datei.seekp(0, ios::beg); // Öffnet die Datei vom Ende her..
}

//=============================================================================
//                           END OF FILE
//=============================================================================