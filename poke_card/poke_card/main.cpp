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
struct card			//Setup for the card structure.
{
	char name;
	int strenght;
	int speed;
	int defense;
};
////////////////////////////////////////////

int main()
{
	card card1 = { 'P', 6, 12, 4 };			// Data base for the 10 Pokemon cards,
	card card2 = { 'B', 7, 4, 8 };			// would be good to figure out if this
	card card3 = { 'C', 8, 9, 6 };			// data base can be made elsewhere (outside of the main() file).
	card card4 = { 'M', 3, 7, 2 };
	card card5 = { 'K', 18, 3, 12 };
	card card6 = { 'S', 10, 1, 16 };
	card card7 = { 'Z', 6, 5, 9 };
	card card8 = { 'N', 1, 1, 18 };
	card card9 = { 'G', 12, 6, 9 };
	card card10 = { 'L', 8, 7, 5 };

	srand(time(NULL));			// Seed for the random generator.

	int user_card1 = rand() % 10 + 1;	//Three random numbers for the player card drawing.
	int user_card2 = rand() % 10 + 1;
	int user_card3 = rand() % 10 + 1;

	int AI_card1 = rand() % 10 + 1;		//Three random numbers for the AI card drawing.
	int AI_card2 = rand() % 10 + 1;
	int AI_card3 = rand() % 10 + 1;

	switch (user_card1)
	{
	case 1:
		cout << "CARD 1:\n";
		cout << setw(12) << "NAME" << setw(10) << "STRENGH" << setw(8) << "SPEED" << setw(10) << "DEFENSE" << endl
			<< setw(12) << card1.name << setw(10) << card1.strenght << setw(8) << card1.speed << setw(10) << card1.defense << endl;
		break;
	case 2:
		cout << "CARD 1:\n";
		cout << setw(12) << "NAME" << setw(10) << "STRENGH" << setw(8) << "SPEED" << setw(10) << "DEFENSE" << endl
			<< setw(12) << card2.name << setw(10) << card2.strenght << setw(8) << card2.speed << setw(10) << card2.defense << endl;
		break;
	case 3:
		cout << "CARD 1:\n";
		cout << setw(12) << "NAME" << setw(10) << "STRENGH" << setw(8) << "SPEED" << setw(10) << "DEFENSE" << endl
			<< setw(12) << card3.name << setw(10) << card3.strenght << setw(8) << card3.speed << setw(10) << card3.defense << endl;
		break;
	case 4:
		cout << "CARD 1:\n";
		cout << setw(12) << "NAME" << setw(10) << "STRENGH" << setw(8) << "SPEED" << setw(10) << "DEFENSE" << endl
			<< setw(12) << card4.name << setw(10) << card4.strenght << setw(8) << card4.speed << setw(10) << card4.defense << endl;
		break;
	case 5:
		cout << "CARD 1:\n";
		cout << setw(12) << "NAME" << setw(10) << "STRENGH" << setw(8) << "SPEED" << setw(10) << "DEFENSE" << endl
			<< setw(12) << card5.name << setw(10) << card5.strenght << setw(8) << card5.speed << setw(10) << card5.defense << endl;
		break;
	case 6:
		cout << "CARD 1:\n";
		cout << setw(12) << "NAME" << setw(10) << "STRENGH" << setw(8) << "SPEED" << setw(10) << "DEFENSE" << endl
			<< setw(12) << card6.name << setw(10) << card6.strenght << setw(8) << card6.speed << setw(10) << card6.defense << endl;
		break;
	case 7:
		cout << "CARD 1:\n";
		cout << setw(12) << "NAME" << setw(10) << "STRENGH" << setw(8) << "SPEED" << setw(10) << "DEFENSE" << endl
			<< setw(12) << card7.name << setw(10) << card7.strenght << setw(8) << card7.speed << setw(10) << card7.defense << endl;
		break;
	case 8:
		cout << "CARD 1:\n";
		cout << setw(12) << "NAME" << setw(10) << "STRENGH" << setw(8) << "SPEED" << setw(10) << "DEFENSE" << endl
			<< setw(12) << card8.name << setw(10) << card8.strenght << setw(8) << card8.speed << setw(10) << card8.defense << endl;
		break;
	case 9:
		cout << "CARD 1:\n";
		cout << setw(12) << "NAME" << setw(10) << "STRENGH" << setw(8) << "SPEED" << setw(10) << "DEFENSE" << endl
			<< setw(12) << card9.name << setw(10) << card9.strenght << setw(8) << card9.speed << setw(10) << card9.defense << endl;
		break;
	case 10:
		cout << "CARD 1:\n";
		cout << setw(12) << "NAME" << setw(10) << "STRENGH" << setw(8) << "SPEED" << setw(10) << "DEFENSE" << endl
			<< setw(12) << card10.name << setw(10) << card10.strenght << setw(8) << card10.speed << setw(10) << card10.defense << endl;
		break;
	}

	switch (user_card2)
	{
	case 1:
		cout << "CARD 2:\n";
		cout << setw(12) << "NAME" << setw(10) << "STRENGH" << setw(8) << "SPEED" << setw(10) << "DEFENSE" << endl
			<< setw(12) << card1.name << setw(10) << card1.strenght << setw(8) << card1.speed << setw(10) << card1.defense << endl;
		break;
	case 2:
		cout << "CARD 2:\n";
		cout << setw(12) << "NAME" << setw(10) << "STRENGH" << setw(8) << "SPEED" << setw(10) << "DEFENSE" << endl
			<< setw(12) << card2.name << setw(10) << card2.strenght << setw(8) << card2.speed << setw(10) << card2.defense << endl;
		break;
	case 3:
		cout << "CARD 2:\n";
		cout << setw(12) << "NAME" << setw(10) << "STRENGH" << setw(8) << "SPEED" << setw(10) << "DEFENSE" << endl
			<< setw(12) << card3.name << setw(10) << card3.strenght << setw(8) << card3.speed << setw(10) << card3.defense << endl;
		break;
	case 4:
		cout << "CARD 2:\n";
		cout << setw(12) << "NAME" << setw(10) << "STRENGH" << setw(8) << "SPEED" << setw(10) << "DEFENSE" << endl
			<< setw(12) << card4.name << setw(10) << card4.strenght << setw(8) << card4.speed << setw(10) << card4.defense << endl;
		break;
	case 5:
		cout << "CARD 2:\n";
		cout << setw(12) << "NAME" << setw(10) << "STRENGH" << setw(8) << "SPEED" << setw(10) << "DEFENSE" << endl
			<< setw(12) << card5.name << setw(10) << card5.strenght << setw(8) << card5.speed << setw(10) << card5.defense << endl;
		break;
	case 6:
		cout << "CARD 2:\n";
		cout << setw(12) << "NAME" << setw(10) << "STRENGH" << setw(8) << "SPEED" << setw(10) << "DEFENSE" << endl
			<< setw(12) << card6.name << setw(10) << card6.strenght << setw(8) << card6.speed << setw(10) << card6.defense << endl;
		break;
	case 7:
		cout << "CARD 2:\n";
		cout << setw(12) << "NAME" << setw(10) << "STRENGH" << setw(8) << "SPEED" << setw(10) << "DEFENSE" << endl
			<< setw(12) << card7.name << setw(10) << card7.strenght << setw(8) << card7.speed << setw(10) << card7.defense << endl;
		break;
	case 8:
		cout << "CARD 2:\n";
		cout << setw(12) << "NAME" << setw(10) << "STRENGH" << setw(8) << "SPEED" << setw(10) << "DEFENSE" << endl
			<< setw(12) << card8.name << setw(10) << card8.strenght << setw(8) << card8.speed << setw(10) << card8.defense << endl;
		break;
	case 9:
		cout << "CARD 2:\n";
		cout << setw(12) << "NAME" << setw(10) << "STRENGH" << setw(8) << "SPEED" << setw(10) << "DEFENSE" << endl
			<< setw(12) << card9.name << setw(10) << card9.strenght << setw(8) << card9.speed << setw(10) << card9.defense << endl;
		break;
	case 10:
		cout << "CARD 2:\n";
		cout << setw(12) << "NAME" << setw(10) << "STRENGH" << setw(8) << "SPEED" << setw(10) << "DEFENSE" << endl
			<< setw(12) << card10.name << setw(10) << card10.strenght << setw(8) << card10.speed << setw(10) << card10.defense << endl;
		break;
	}

	switch (user_card3)
	{
	case 1:
		cout << "CARD 3:\n";
		cout << setw(12) << "NAME" << setw(10) << "STRENGH" << setw(8) << "SPEED" << setw(10) << "DEFENSE" << endl
			<< setw(12) << card1.name << setw(10) << card1.strenght << setw(8) << card1.speed << setw(10) << card1.defense << endl;
		break;
	case 2:
		cout << "CARD 3:\n";
		cout << setw(12) << "NAME" << setw(10) << "STRENGH" << setw(8) << "SPEED" << setw(10) << "DEFENSE" << endl
			<< setw(12) << card2.name << setw(10) << card2.strenght << setw(8) << card2.speed << setw(10) << card2.defense << endl;
		break;
	case 3:
		cout << "CARD 3:\n";
		cout << setw(12) << "NAME" << setw(10) << "STRENGH" << setw(8) << "SPEED" << setw(10) << "DEFENSE" << endl
			<< setw(12) << card3.name << setw(10) << card3.strenght << setw(8) << card3.speed << setw(10) << card3.defense << endl;
		break;
	case 4:
		cout << "CARD 3:\n";
		cout << setw(12) << "NAME" << setw(10) << "STRENGH" << setw(8) << "SPEED" << setw(10) << "DEFENSE" << endl
			<< setw(12) << card4.name << setw(10) << card4.strenght << setw(8) << card4.speed << setw(10) << card4.defense << endl;
		break;
	case 5:
		cout << "CARD 3:\n";
		cout << setw(12) << "NAME" << setw(10) << "STRENGH" << setw(8) << "SPEED" << setw(10) << "DEFENSE" << endl
			<< setw(12) << card5.name << setw(10) << card5.strenght << setw(8) << card5.speed << setw(10) << card5.defense << endl;
		break;
	case 6:
		cout << "CARD 3:\n";
		cout << setw(12) << "NAME" << setw(10) << "STRENGH" << setw(8) << "SPEED" << setw(10) << "DEFENSE" << endl
			<< setw(12) << card6.name << setw(10) << card6.strenght << setw(8) << card6.speed << setw(10) << card6.defense << endl;
		break;
	case 7:
		cout << "CARD 3:\n";
		cout << setw(12) << "NAME" << setw(10) << "STRENGH" << setw(8) << "SPEED" << setw(10) << "DEFENSE" << endl
			<< setw(12) << card7.name << setw(10) << card7.strenght << setw(8) << card7.speed << setw(10) << card7.defense << endl;
		break;
	case 8:
		cout << "CARD 3:\n";
		cout << setw(12) << "NAME" << setw(10) << "STRENGH" << setw(8) << "SPEED" << setw(10) << "DEFENSE" << endl
			<< setw(12) << card8.name << setw(10) << card8.strenght << setw(8) << card8.speed << setw(10) << card8.defense << endl;
		break;
	case 9:
		cout << "CARD 3:\n";
		cout << setw(12) << "NAME" << setw(10) << "STRENGH" << setw(8) << "SPEED" << setw(10) << "DEFENSE" << endl
			<< setw(12) << card9.name << setw(10) << card9.strenght << setw(8) << card9.speed << setw(10) << card9.defense << endl;
		break;
	case 10:
		cout << "CARD 3:\n";
		cout << setw(12) << "NAME" << setw(10) << "STRENGH" << setw(8) << "SPEED" << setw(10) << "DEFENSE" << endl
			<< setw(12) << card10.name << setw(10) << card10.strenght << setw(8) << card10.speed << setw(10) << card10.defense << endl;
		break;
	}
	return 0;  //There is still work due.
}