#include "random.h"
/*
Psuedo-randomly picks a number based off of game deck size
@param gameDeck passes by reference the game deck vector
@return returns the "random" card for the player
*/
int randomCard(std::vector<int> &gameDeck)
{
	int randomCard = rand() % (gameDeck.size() - 1); //random number generator
	int dealNewCard = gameDeck[randomCard];
	gameDeck.erase(gameDeck.begin() + randomCard);
	return dealNewCard;
};