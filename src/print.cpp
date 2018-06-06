#include "print.h"

void printCards(std::vector<int> cardsHand)
{
	int cardstotal;
	for (cardstotal = 0; cardstotal < cardsHand.size(); cardstotal++)
	{
		std::cout << " ______________" << "   ";
	}
	std::cout << std::endl;
	for (cardstotal = 0; cardstotal < cardsHand.size(); cardstotal++)
	{
		std::cout << "|" << "              |" << "  ";
	}
	std::cout << std::endl;
	for (cardstotal = 0; cardstotal < cardsHand.size(); cardstotal++)
	{
		std::cout << "|" << " 2S" << "           |" << "  ";
	}
	std::cout << std::endl;
	for (int i = 0; i < 6; i++)
	{
		for (cardstotal = 0; cardstotal < cardsHand.size(); cardstotal++)
		{
			std::cout << "|" << "              |" << "  ";
		}
		std::cout << std::endl;
	}
	for (cardstotal = 0; cardstotal < cardsHand.size(); cardstotal++)
	{
		std::cout << "|           " << "2S " << "|" << "  ";
	}
	std::cout << std::endl;
	for (cardstotal = 0; cardstotal < cardsHand.size(); cardstotal++)
	{
		std::cout << "|______________|" << "  ";
	}
	std::cout << std::endl;
}