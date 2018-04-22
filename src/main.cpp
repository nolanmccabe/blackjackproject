#include <iostream>
#include <stdio.h>     /* printf, scanf, puts, NULL */
#include <stdlib.h>    /* srand, rand */
#include <time.h>
#include <windows.h>
#include <vector>
#include <algorithm>
//#include <iterator>
#include "cards.h"
#include "values.h"
#include "check.cpp"

//class Values
//{
//public:
//	Values(int card);
//public:
//	int cardValue() const;
//private:
//	int m_card;
//	std::vector<int> values_of_card = { 99, 2, 3, 4, 5, 6 ,7 ,8 ,9 ,10, 10, 10, 10, 1, 11 };
//};
//Values::Values(int card)
//{
//	m_card = card;
//}
//int Values::cardValue() const
//{
//	return values_of_card[m_card];
//}
int randomFace()
{
	int decision;
	int random = rand() % 12;
	if (random == 0)
	{
		std::cout << "Ace: 1 or 11?" << std::endl;
		std::cin >> decision;
		if (decision == 1)
			return random = 13;
		else return random = 14;
	}
	else
	{
		return random;
	}
}
int randomSuit()
{
	int random;
	return random = rand() % 3;
}
int main()
{
	srand(time(NULL)); //random seed
	bool gameLoop = true; //Global variable to loop game
	bool getNewCard = true;
	FaceUp_Card cards;
	

	while (gameLoop)
	{
		std::vector<int> playerHandCards; // {1}
		std::vector<int> playerHandSuits;
		std::vector<int> playerHandValues;
		std::vector<int> dealerHandCards;
		std::vector<int> dealerHandSuits;
		std::vector<int> dealerHandValues;

		std::cout << "Shuffling the deck..." << std::endl;
		Sleep(3);
		std::cout << "Dealing cards" << std::endl;
		/*---------------------------------------------Player First Card -----------------------------------------------------------*/
		playerHandCards.push_back(randomFace()); //If Ace, prompt for 1 or 11, return value; Generates a string
		Values cardOne(playerHandCards[0]);
		playerHandValues.push_back(cardOne.cardValue()); //Adds appropriate value of card
		playerHandSuits.push_back(randomSuit()); //random suit
		//cards.printCard();
		Sleep(3);
		std::cout << playerHandCards[0];
		std::cout << std::endl;
		std::cout << playerHandValues[0];
		std::cout << std::endl;
		std::cout << playerHandSuits[0];
		std::cin.get();
		/*---------------------------------------------Player Second Card -----------------------------------------------------------*/

		while (getNewCard)
		{
			int potentialFace = randomFace();
			int potentialSuit = randomSuit();
		}
		//Values cardTwo(playerHandCards[1]);
		//playerHandValues.push_back(cardTwo.cardValue());


		/*---------------------------------------------Computer First Card -----------------------------------------------------------*/
		std::cout << playerHandCards[1];
		std::cout << std::endl;
		std::cout << playerHandSuits[1];
		std::cout << std::endl;
		std::cout << playerHandValues[1];
		std::cin.get();

	}
}

/* TODO:
Intro Banner X
Card Faces X
Assign card values X
Check card per deal /
Player/Computer Gameplay /
Gambling 
*/
