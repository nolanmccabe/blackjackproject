//
//  main.cpp
//  BlackJackGame
//
//  Created by Overworked and Underpaid on 4/19/18.
//  Copyright © 2018 Overworked and Underpaid. All rights reserved.
//

#include "includes.h"

int main()
{
	banner();
	std::cout << std::endl;
	std::cout << "Press ENTER to start..." << std::endl;
	std::cin.get();
	system("CLS");
	srand(time(NULL)); //random seed
	bool gameLoop = true; //Global variable to loop game
	enum gameIdentifier {playerID, computerID};
	enum gameCondition {playerHold, playerBust, playerFold, computerHold, computerBust, compareHands};
	int playerEndGameResult, computerEndGameResult;

	while (gameLoop)
	{
		std::vector<int> playerHandCards; //Stores the face of cards for display output
		std::vector<int> playerHandValues; //Stores the values of cards
		std::vector<int> computerHandCards; //Computers hand
		std::vector<int> computerHandValues; //Computers values
		std::vector<int> gameDeck {1,2,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,
			21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,
			46,47,48,49,50,51,52}; //Game deck
		int playerHandTotal; //Accumulated hand total
		bool playerTurn = true; //Player's turn loop, ends when hold or fold
		bool computerTurn = true; //Computer's turn, automated

	/*---------------------------------------------Dealing Cards ----------------------------------------------------*/

		std::cout << "Shuffling the deck..." << std::endl;
		Sleep(3);
		std::cout << "Dealing cards" << std::endl;

		//Player's First Card
		playerHandCards.push_back(randomCard(gameDeck));
		playerHandValues.push_back(assignValue(playerHandCards[0], playerID));

		//Player's Second Card
		playerHandCards.push_back(randomCard(gameDeck));
		playerHandValues.push_back(assignValue(playerHandCards[1], playerID));

		//Computer's First Card
		computerHandCards.push_back(randomCard(gameDeck));
		computerHandValues.push_back(assignValue(computerHandCards[0], computerID));

		//Computer's SecondCard
		computerHandCards.push_back(randomCard(gameDeck));
		computerHandValues.push_back(assignValue(computerHandCards[1], computerID));


		std::cout << "[" << playerHandCards[0] << "] [" << playerHandCards[1] << "]"<< std::endl;
		std::cout << "[X] [" << computerHandCards[1] << "]" << std::endl;
		Sleep(3);
	/*---------------------------------------------Player's Turn -----------------------------------------------------*/
		while (playerTurn)
		{
			enum decision {Hit = 1, Hold, Fold, Error};
			int playerHandTotal = std::accumulate(playerHandValues.begin(), playerHandValues.end(), 0);
			if (playerHandTotal <= 21)
			{
				int decisionNumber = playerDecision(playerHandTotal);
				if (decisionNumber == Hit)
				{
					int newRandomCard = randomCard(gameDeck);
					playerHandCards.push_back(newRandomCard);
					int playerCardsInHand = playerHandCards.size() - 1;
					playerHandValues.push_back(assignValue(playerHandCards[playerCardsInHand], playerID));
					continue;
				}
				if (decisionNumber == Hold)
				{
					playerEndGameResult = playerHold;
					playerTurn = false;
				}
				if (decisionNumber == Fold)
				{
					playerEndGameResult = playerFold;
					playerTurn = false;
				}
				else
				{
					playerEndGameResult = compareHands;
					playerTurn = false;
				}
			}
			else
			{
				playerEndGameResult = playerBust;
				//std::cout << "BUST! You hand is over 21..." << playerHandTotal; //Placeholder
				playerTurn = false;
			}
		}
	/*---------------------------------------------Computer's Turn ---------------------------------------------------*/
		while (computerTurn)
		{
			if (playerEndGameResult == playerHold)
			{
				int computerHandTotal = std::accumulate(computerHandValues.begin(), computerHandValues.end(), 0);
				if (computerHandTotal < 17)
				{
					int newRandomCard = randomCard(gameDeck);
					computerHandCards.push_back(newRandomCard);
					int computerCardsInHand = computerHandCards.size() - 1;
					computerHandValues.push_back(assignValue(computerHandCards[computerCardsInHand], computerID));
					continue;
				}
				if (computerHandTotal >= 17 && computerHandTotal <= 21)
				{
					computerEndGameResult = computerHold;
					computerTurn = false;
				}
				else
				{
					computerEndGameResult = computerBust;
					//std::cout << "You win! The dealer busts! " << computerHandTotal << std::endl; //Placeholder
					computerTurn = false;
				}
			}
			else
			{
				computerEndGameResult == computerHold;
				computerTurn = false;
			}
			
		}
	/*-----------------------------------------------End Game --------------------------------------------------------*/
		if (playerEndGameResult == playerHold && computerEndGameResult == computerBust)
		{
			std::cout << "You win! The computer busts!" << std::endl;
		}
		if (playerEndGameResult == playerBust)
		{
			std::cout << "Bust! The computer wins!" << std::endl;
		}
		if (playerEndGameResult == playerFold)
		{
			std::cout << "You folded! The computer wins by default!" << std::endl;
		}
	}
}


/* TODO:
	-Fix player input to allow for errors
	-Add card face graphic
	-Game dialogue
	-Adjust game ending
	-Add Banner
	-Add Gambling
*/
