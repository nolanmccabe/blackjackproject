#include "print.h"
#include "faces.h"

void printCards(std::vector<int> cardsHand)
{
	int cardstotal;
	for (cardstotal = 0; cardstotal < cardsHand.size(); cardstotal++) //one
	{
		std::cout << " ______________" << "   ";
	}
	std::cout << std::endl;
	for (cardstotal = 0; cardstotal < cardsHand.size(); cardstotal++) //two
	{
		std::cout << "|" << "              |" << "  ";
	}
	std::cout << std::endl;
	for (cardstotal = 0; cardstotal < cardsHand.size(); cardstotal++) //three
	{
		int applyCard = cardsHand[cardstotal];
		std::string getCard = faceCard(cardsHand, applyCard);
		if (applyCard >= 36 && applyCard <= 39)
		{
			std::cout << "|" << " " << getCard << "          |" << "  ";
		}
		else std::cout << "|" << " " << getCard << "           |" << "  ";
	}
	std::cout << std::endl;
	for (int i = 0; i < 6; i++)
	{
		for (cardstotal = 0; cardstotal < cardsHand.size(); cardstotal++) //nine
		{
			std::cout << "|" << "              |" << "  ";
		}
		std::cout << std::endl;
	}
	for (cardstotal = 0; cardstotal < cardsHand.size(); cardstotal++) //ten
	{
		int applyCard = cardsHand[cardstotal];
		std::string getCard = faceCard(cardsHand, applyCard);
		if (applyCard >= 36 && applyCard <= 39)
		{
			std::cout << "|          " << getCard << " " << "|" << "  ";
		}
		else std::cout << "|           " << getCard << " " << "|" << "  ";
	}
	std::cout << std::endl;
	for (cardstotal = 0; cardstotal < cardsHand.size(); cardstotal++) //eleven
	{
		std::cout << "|______________|" << "  ";
	}
	std::cout << std::endl;
}
