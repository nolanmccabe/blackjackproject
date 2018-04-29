#include "random.h"

int randomCard(std::vector<int> &gameDeck)
{
	int randomCard = rand() % (gameDeck.size() - 1); //random number generator
	gameDeck.erase(gameDeck.begin() + randomCard);
	return randomCard;
};
