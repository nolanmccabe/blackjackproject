#include "turn.h"
/*
Provides game options for player during their turn 
@param handValue sum of players hand
@return returns the player decision
*/
int playerDecision(int handValue)
{
	enum playerChoice {Hit = 1, Hold, Fold};
	int playerInput;
	std::cout << "Hand Total: " << handValue << std::endl;
	std::cout << "Player, what would you like to do?" << std::endl;
	std::cout << "HIT [1]" << "  " << "HOLD [2]" << "  " << "FOLD [3]" << std::endl;
	std::cin >> playerInput;
	if (playerInput == Hit)
	{
		return Hit;
	}
	if (playerInput == Hold)
	{
		return Hold;
	}
	if (playerInput == Fold)
	{
		return Fold;
	}
	else return Hold; 
}
