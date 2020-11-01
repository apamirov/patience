//Deck

#include <iostream>
using namespace std;

/*
patience, solitaire
cards, card
Deck – колода Suit – масть
Hearts – червы Diamonds – бубны Clubs – трефы Spades – пики
Jack – валет Queen – дама King – король Ace – туз Joker – джокер
0 — zero 1 — one 
2 — two 3 — three 4 — four 5 — five 6 — six 7 — seven 8 — eight 9 — nine 10 — ten
11 — eleven 12 — twelve	13 — thirteen 14 — fourteen 15 — fifteen 
16 — sixteen 17 — seventeen 18 — eighteen 19 — nineteen
20 — twenty 30 — thirty 40 — forty 50 — fifty 60 — sixty 70 — seventy 80 — eighty 90 — ninety
100 — one (a) hundred 1,000 — one (a) thousand 1,000,000 — one (a) million
1,000,000,000 — a (one) milliard (в Англии); a (one) billion (в США)
*/

class Deck
{
public:
    void tenDiamond()
    {
        cout << " _____________" << endl;
        cout << "|10_________ d|" << endl;
        cout << "| |         |i|" << endl;
        cout << "| | ^     ^ |a|" << endl;
        cout << "| |    ^    |m|" << endl;
        cout << "| | ^     ^ |o|" << endl;
        cout << "| |         |n|" << endl;
        cout << "| | ^     ^ |d|" << endl;
        cout << "| |    ^    |s|" << endl;
        cout << "| | ^     ^ | |" << endl;
        cout << "| |_________| |" << endl;
        cout << "|_____________|" << endl;
    }
    void tenDiamondSmall()
    {
        cout << " _____________" << endl;
        cout << "|10____^____ d|" << endl;
    }

    void tenHeart()
    {
        cout << " _____________" << endl;
        cout << "|10_________ h|" << endl;
        cout << "| |         |e|" << endl;
        cout << "| | Y     Y |a|" << endl;
        cout << "| |    Y    |r|" << endl;
        cout << "| | Y     Y |t|" << endl;
        cout << "| |         |s|" << endl;
        cout << "| | Y     Y | |" << endl;
        cout << "| |    Y    | |" << endl;
        cout << "| | Y     Y | |" << endl;
        cout << "| |_________| |" << endl;
        cout << "|_____________|" << endl;
    }
    void tenHeartSmall()
    {
        cout << " _____________" << endl;
        cout << "|10____Y____ h|" << endl;
    }

    void tenClub()
    {
        cout << " _____________" << endl;
        cout << "|10_________ c|" << endl;
        cout << "| |         |l|" << endl;
        cout << "| | +     + |u|" << endl;
        cout << "| |    +    |b|" << endl;
        cout << "| | +     + |s|" << endl;
        cout << "| |         | |" << endl;
        cout << "| | +     + | |" << endl;
        cout << "| |    +    | |" << endl;
        cout << "| | +     + | |" << endl;
        cout << "| |_________| |" << endl;
        cout << "|_____________|" << endl;
    }
    void tenClubSmall()
    {
        cout << " _____________" << endl;
        cout << "|10____+____ c|" << endl;
    }

    void tenSpade()
    {
        cout << " _____________" << endl;
        cout << "|10_________ s|" << endl;
        cout << "| |         |p|" << endl;
        cout << "| | T     T |a|" << endl;
        cout << "| |    T    |d|" << endl;
        cout << "| | T     T |e|" << endl;
        cout << "| |         |s|" << endl;
        cout << "| | T     T | |" << endl;
        cout << "| |    T    | |" << endl;
        cout << "| | T     T | |" << endl;
        cout << "| |_________| |" << endl;
        cout << "|_____________|" << endl;
    }
    void tenSpadeSmall()
    {
        cout << " _____________" << endl;
        cout << "|10____T____ s|" << endl;
    }

private:
protected:
};
