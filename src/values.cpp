#include "values.h"

Values::Values(int value, int suit)
{
	m_getValue = values_of_card[value];
	m_getFace = face_of_card(value);
	m_getSuit = suit_of_card(suit);
}
int Values::assignValue() const
{
	return m_getValue;
}
int Values::assignFace() const
{
	return m_getFace;
}
int Values::assignSuit() const
{
	return m_getSuit;
}
