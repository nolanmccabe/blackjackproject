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
	//Global variables
	srand(time(NULL)); //random seed
	bool gameLoop = true; //Global variable to loop game
	enum gameIdentifier { playerID, computerID }; //unique ID for players
	enum gameCondition { playerHold, playerBust, playerFold, computerHold, computerBust }; //The game state of the player
	int playerHandTotal = 0;
	int computerHandTotal = 0;
	int playerEndGameResult, computerEndGameResult;
	std::string gameDivide = "\n===================================================";

	//Game Start with banner
	banner();
	std::cout << std::endl;
	std::cout << "Press ENTER to start..." << std::endl;
	std::cin.get();
	system("CLS");

	//Games keeps looping until exit
	while (gameLoop)
	{
		std::vector<int> playerHandCards; //Stores the face of cards for display output
		std::vector<int> playerHandValues; //Stores the values of cards
		std::vector<int> computerHandCards; //Computers hand
		std::vector<int> computerHandValues; //Computers values
		std::vector<int> gameDeck = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 ,11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 
			21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 
			41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51 }; //Game deck
									//int playerHandTotal; //Accumulated hand total
		bool playerTurn = true; //Player's turn loop, ends when hold, fold, or bust
		bool computerTurn = true; //Computer's turn, automated

								  /*---------------------------------------------Dealing Cards ----------------------------------------------------*/

		std::cout << "Shuffling the deck..." << std::endl;
		Sleep(2000);
		std::cout << "Dealing cards" << std::endl;
		Sleep(2000);

		//Player's First Card
		playerHandCards.push_back(randomCard(gameDeck));
		printCards(playerHandCards);
		playerHandValues.push_back(assignValue(playerHandCards[0], playerID, playerHandTotal));
		std::cin.get();
		system("CLS");


		//Player's Second Card
		playerHandCards.push_back(randomCard(gameDeck));
		printCards(playerHandCards);
		playerHandValues.push_back(assignValue(playerHandCards[1], playerID, playerHandTotal));
		std::cin.get();

		//Computer's First Card
		computerHandCards.push_back(randomCard(gameDeck));
		computerHandValues.push_back(assignValue(computerHandCards[0], computerID, computerHandTotal));


		//Computer's SecondCard
		computerHandCards.push_back(randomCard(gameDeck));
		computerHandValues.push_back(assignValue(computerHandCards[1], computerID, computerHandTotal));
		system("CLS");
		printCards(computerHandCards);
		std::cout << gameDivide << std::endl;
		printCards(playerHandCards);

		std::cin.get();
		/*---------------------------------------------Player's Turn -----------------------------------------------------*/
		while (playerTurn)
		{
			enum decision { Hit = 1, Hold, Fold, Error };
			playerHandTotal = std::accumulate(playerHandValues.begin(), playerHandValues.end(), 0);
			if (playerHandTotal <= 21)
			{
				int decisionNumber = playerDecision(playerHandTotal);
				if (decisionNumber == Hit)
				{
					int newRandomCard = randomCard(gameDeck);
					system("CLS");
					playerHandCards.push_back(newRandomCard);
					printCards(computerHandCards);
					std::cout << gameDivide << std::endl;
					printCards(playerHandCards);
					int playerCardsInHand = playerHandCards.size() - 1;
					playerHandValues.push_back(assignValue(playerHandCards[playerCardsInHand], playerID, playerHandTotal));
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
					playerEndGameResult = playerHold;
					playerTurn = false;
				}
			}
			else
			{
				playerEndGameResult = playerBust;
				playerTurn = false;
			}
		}
		/*---------------------------------------------Computer's Turn ---------------------------------------------------*/
		while (computerTurn)
		{
			if (playerEndGameResult == playerHold)
			{
				computerHandTotal = std::accumulate(computerHandValues.begin(), computerHandValues.end(), 0);
				if (computerHandTotal <= playerHandTotal)
				{
					int newRandomCard = randomCard(gameDeck);
					computerHandCards.push_back(newRandomCard);
					int computerCardsInHand = computerHandCards.size() - 1;
					computerHandValues.push_back(assignValue(computerHandCards[computerCardsInHand], computerID, computerHandTotal));
					system("CLS");
					printCards(computerHandCards);
					std::cout << gameDivide << std::endl;
					printCards(playerHandCards);
					Sleep(2000);
					continue;
				}
				if (computerHandTotal > playerHandTotal && computerHandTotal <= 21)
				{
					computerEndGameResult = computerHold;
					computerTurn = false;
				}
				else
				{
					computerEndGameResult = computerBust;
					computerTurn = false;
				}
			}
			else
			{
				computerEndGameResult = computerHold;
				computerTurn = false;
			}

		}
		/*-----------------------------------------------End Game --------------------------------------------------------*/
		if (playerEndGameResult == playerHold && computerEndGameResult == computerBust)
		{
			std::cout << "You win! The computer busts!" << std::endl;
		}
		else if (playerEndGameResult == playerHold && computerEndGameResult == computerHold)
		{
			std::cout << "The computer wins!" << std::endl;
		}
		else if (playerEndGameResult == playerBust)
		{

			std::cout << "Bust! The computer wins!" << std::endl;
		}
		else if (playerEndGameResult == playerFold)
		{
			std::cout << "You folded! The computer wins by default!" << std::endl;
		}
		else std::cout << "Something went wrong! Please play again." << std::endl;

		//Game End Menu
		int gameEnd;
		enum gameEndCondition {playAgain = 1, exitGame};
		std::cout << "Would you like to play again? [1] Play Again   [2] Exit Game" << std::endl;
		std::cin >> gameEnd;
		if (gameEnd == playAgain)
		{
			system("CLS");
			continue;
		}
		else if (gameEnd == exitGame)
		{
			return 0;
		}
		else return 0;
	}
}


/* TODO:
-improved computer gameplay (AI)
-Game dialogue
-Add Gambling
*/
