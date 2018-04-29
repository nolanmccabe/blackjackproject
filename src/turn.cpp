#include "turn.h"

int decisionNumber(int handValue)
{
	enum playerChoice {Hit = 1, Hold, Fold, Error};
	int playerInput;
	std::cout << "Hand Total: " << handValue << std::endl;
	std::cout << "Player, what would you like to do?" << std::endl;
	std::cout << "HIT [1]" << "  " << "HOLD [2]" << "  " << "FOLD [3]" << std::endl;
	std::cin >> playerInput; //DOES NOT CHECK FOR WRONG INPUT
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
	else return Error;
}
