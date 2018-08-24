/*This is a pokemon card game, the objective is to have at least 10 different pokemon cards with
its 3 different atributes (Strenght, Speed and Defense), the player will draw three (3) random cards at the begining of
the game, tha player has a second chance to redraw his first three cards but thats it, if he is still not happy with his
second set of cards, too bad. Then the "AI" draws three random cards as well. Then the player and the AI will battle with their cards.

The computer decides who starts the duel. Either the AI or the player choose a card and an atribute, the other player must compite
against that card's atribute choosing any card from his hand. In the end of that turn, the player who chooses the card with the highest
atribute in game wins the turn and destroys his opponents card. The first player to run out of cards loses.*/

/*By: Ricardo Jaramillo Botero

Work to do:
- Figure out how to store strings in the "name" value in the card's structure.
- Make functions for card drawing, card displaying and dueling.
- Finish the duel code and AI code.*/

#include<iostream>
#include<cstdlib>
#include<iomanip>
#include<ctime>
using namespace std;


/////////////////////////////////////////////
class Card			//Setup for the card structure.
{
private:
	char name;
	int strenght;
	int speed;
	int defense;

public:
	Card()
	{}

	Card(char n, int str, int spe, int def): name(n), strenght(str), speed(spe), defense(def)
	{}

	void show_card();
};
////////////////////////////////////////////

void Card::show_card()
{
	cout << setw(12) << "NAME" << setw(10) << "STRENGH" << setw(8) << "SPEED" << setw(10) << "DEFENSE" << endl
		<< setw(12) << name << setw(10) << strenght << setw(8) << speed << setw(10) << defense << endl;
}

Card add_card(int numb_card);

Card card1('P', 6, 12, 4);			// Data base for the 10 Pokemon cards,
Card card2('B', 7, 4, 8);			// would be good to figure out if this
Card card3('C', 8, 9, 6);			// data base can be made elsewhere (outside of the main() file).
Card card4('M', 3, 7, 2);
Card card5('K', 18, 3, 12);
Card card6('S', 10, 1, 16);
Card card7('Z', 6, 5, 9);
Card card8('N', 1, 1, 18);
Card card9('G', 12, 6, 9);
Card card10('L', 8, 7, 5);

int main()
{
	srand(time(NULL));			// Seed for the random generator.

	int user_rand1 = rand() % 10 + 1;	//Three random numbers for the player card drawing.
	int user_rand2 = rand() % 10 + 1;
	int user_rand3 = rand() % 10 + 1;
	Card user_card1;
	Card user_card2;
	Card user_card3;

	int AI_rand1 = rand() % 10 + 1;		//Three random numbers for the AI card drawing.
	int AI_rand2 = rand() % 10 + 1;
	int AI_rand3 = rand() % 10 + 1;
	Card AI_card1;
	Card AI_card2;
	Card AI_card3;

	user_card1 = add_card(user_rand1);
	user_card2 = add_card(user_rand2);
	user_card3 = add_card(user_rand3);

	cout << "CARD 1:\n";
	user_card1.show_card();
	cout << "CARD 2:\n";
	user_card2.show_card();
	cout << "CARD 3:\n";
	user_card3.show_card();

	cout << "\nWould you like to redraw your cards? (y/n): ";
	char answer;
	cin >> answer;
	if (answer == 'y')
	{
		srand(time(NULL));			// Seed for the random generator.

		int user_rand1 = rand() % 10 + 1;	//Three random numbers for the player card drawing.
		int user_rand2 = rand() % 10 + 1;
		int user_rand3 = rand() % 10 + 1;
		Card user_card1;
		Card user_card2;
		Card user_card3;

		user_card1 = add_card(user_rand1);
		user_card2 = add_card(user_rand2);
		user_card3 = add_card(user_rand3);

		cout << "CARD 1:\n";
		user_card1.show_card();
		cout << "CARD 2:\n";
		user_card2.show_card();
		cout << "CARD 3:\n";
		user_card3.show_card();
	}
	
	return 0;  //There is still work due.
}

Card add_card(int n)
{
	Card cardn;
	switch (n)
	{
	case 1:
		cardn = card1;
		break;
			
	case 2:
		cardn = card2;
		break;

	case 3:
		cardn = card3;
		break;

	case 4:
		cardn = card4;
		break;

	case 5:
		cardn = card5;
		break;

	case 6:
		cardn = card6;
		break;

	case 7:
		cardn = card7;
		break;

	case 8:
		cardn = card8;
		break;

	case 9:
		cardn = card9;
		break;

	case 10:
		cardn = card10;
		break;
	}

	return cardn;
}