#include "values.h"

int assignValue(int card)
{
	if (card >= 0 && card <= 31)
	{
		if (card >= 0 && card <= 15)
		{
			if (card >= 0 && card <= 7)
			{
				if (card >= 0 && card <= 3)
				{
					return 99;
				}
				if (card >= 4 && card <= 7)
				{
					return 2;
				}
			}
			if (card >= 8 && card <= 15)
			{
				if (card >= 8 && card <= 11)
				{
					return 3;
				}
				if (card >= 12 && card <= 15)
				{
					return 4;
				}
			}
		}
		if (card >= 16 && card <= 31)
		{
			if (card >= 16 && card <= 23)
			{
				if (card >= 16 && card <= 19)
				{
					return 5;
				}
				if (card >= 20 && card <= 23)
				{
					return 6;
				}

			}
			if (card >= 24 && card <= 31)
			{
				if (card >= 24 && card <= 27)
				{
					return 7;
				}
				if (card >= 28 && card <= 31)
				{
					return 8;
				}
			}
			
		}
	}
	if (card >= 32 && card <= 51)
	{
		if (card >= 32 && card <= 43)
		{
			if (card >= 32 && card <= 35)
			{
				return 9;
			}
			if (card >= 36 && card <= 39)
			{
				return 10;
			}
			if (card >= 40 && card <= 43)
			{
				return 10;
			}
		}
		if (card >= 44 && card <= 51)
		{
			if (card >= 44 && card <= 47)
			{
				return 10;
			}
			if (card >= 48 && card <= 51)
			{
				return 10;
			}
		}
	}
	else return 99;
}
