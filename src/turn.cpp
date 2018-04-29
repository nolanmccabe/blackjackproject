#include "turn.h"

bool playerDecision(int handValue)
{
	int playerInput;
	enum playerDecision{ Hit = 1, Hold, Fold };
	std::cout << "Hand Total: " << handValue << std::endl;
	std::cout << "Player, what would you like to do?" << std::endl;
	std::cout << "HIT [1]" << "  " << "HOLD [2]" << "  " << "FOLD [3]" << std::endl;
	std::cin >> playerInput; //DOES NOT CHECK FOR WRONG INPUT
	if (playerInput == Hit)
	{
		return true;
	}
	if (playerInput == Hold)
	{
		return false;
	}
	if (playerInput == Fold)
	{
		return false;
	}
	else return false;
}
