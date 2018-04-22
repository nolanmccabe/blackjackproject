
#include <vector>

int checkIfInGame(int card, int face)
{
	for (int i = 0; i < playerHandCards.size(); i++)
	{
		if (potentialFace == playerHandCards[i])
		{
			if (potentialSuit == playerHandSuits[i])
			{
				break; //DOES NOT ADD NEW SUBSCRIPT IN VECTOR, BREAKS PROGRAM
			}
			if (playerHandCards[i] == playerHandCards.back())
			{
				if (potentialSuit != playerHandSuits[i])
				{
					playerHandCards.push_back(potentialFace);
					playerHandSuits.push_back(potentialSuit);
					getNewCard = false;
				}
			}
			else continue;
		}
		if (potentialFace != playerHandCards[i])
		{
			if (i == (playerHandCards.size() - 1))
			{
				playerHandCards.push_back(potentialFace);
				playerHandSuits.push_back(potentialSuit);
				getNewCard = false;
			}
			else continue;
		}
		else continue;
	}		Values cardTwo(playerHandCards[1]);
			playerHandValues.push_back(cardTwo.cardValue());
	return 0;
}
