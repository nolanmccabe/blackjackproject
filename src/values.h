#pragma once
#include <vector>
class Values
{
public:
	Values(int value, int suit);
public:
	int assignValue() const;
	int assignFace() const;
	int assignSuit() const;
private:
	int m_getValue;
	int m_getSuit;
	int m_getFace;
	int values_of_card[15] = { 99, 2, 3, 4, 5, 6 ,7 ,8 ,9 ,10, 10, 10, 10, 1, 11 };
	enum face_of_card { PH, Two, Three, Four, Five, Six, Seven, Eight, Nine, Ten, Jack, Queen, King, Ace, Ace };
	enum suit_of_card { Spades, Clubs, Diamonds, Hearts };
	//A, 2, 3, 4, 5, 6, 7, 8, 9, 10, J, Q, K
	//Spades, Clubs, Diamonds, Hearts
};
