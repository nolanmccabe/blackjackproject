//
//  main.cpp
//  BlackJackGame
//
//  Created by Overworked and Underpaid on 4/19/18.
//  Copyright © 2018 Overworked and Underpaid. All rights reserved.
//

#include <iostream>
#include <stdio.h> //printf, scanf, puts, NULL
#include <time.h>
#include <windows.h> //Sleep function, Windows Only
#include <vector>
#include <algorithm>
#include <numeric>
#include "cards.h" //Outputs a card face to terminal
#include "values.h" //Applies a value to a face card
#include "turn.h" //Player's turn
#include "random.h" //Random Number generator for deck

int main()
{
	srand(time(NULL)); //random seed
	bool gameLoop = true; //Global variable to loop game
	bool playerTurn = true; //Player's turn loop, ends when hold or fold
	bool computerTurn = true; //Computer's turn, automated

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


	/*---------------------------------------------Dealing Cards ----------------------------------------------------*/

		std::cout << "Shuffling the deck..." << std::endl;
		Sleep(3);
		std::cout << "Dealing cards" << std::endl;

		//Player's First Card
		playerHandCards.push_back(randomCard(gameDeck));
		playerHandValues.push_back(assignValue(playerHandCards[0]));

		//Player's Second Card
		playerHandCards.push_back(randomCard(gameDeck));
		playerHandValues.push_back(assignValue(playerHandCards[1]));

		//Computer's First Card
		computerHandCards.push_back(randomCard(gameDeck));
		computerHandValues.push_back(assignValue(computerHandCards[0]));

		//Computer's SecondCard
		computerHandCards.push_back(randomCard(gameDeck));
		computerHandValues.push_back(assignValue(computerHandCards[1]));


	/*---------------------------------------------Player's Turn -----------------------------------------------------*/
		while (playerTurn)
		{
			int playerHandTotal = std::accumulate(playerHandValues.begin(), playerHandValues.end(), 0);
			playerDecision(playerHandTotal);
			playerHandCards.push_back(randomCard(gameDeck));
		}
		std::cin.get();
	/*---------------------------------------------Computer's Turn ---------------------------------------------------*/
	}
}


/* TODO:
Fix player input to allow for errors

*/
