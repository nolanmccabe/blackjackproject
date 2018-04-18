// UOProject.cpp : Defines the entry point for the console application.
//



/*
Displays 2 types of card visuals.
*/
class FaceUp_Card
{
	public:
		void printCard()
		{
			cout << s3;
			cout << s1 << s2;
			cout << s1 << "  J" << s4;
			cout << s1 << s2;
			cout << s1 << s2;
			cout << s1 << s2;
			cout << s1 << s2;
			cout << s1 << s2;
			cout << s1 << s2;
			cout << s5 << "J  " << s6;
			cout << s7;
			system("PAUSE");
		}

	private: 
		string s1 = "|";
		string s2 = "              |\n";
		string s3 = " ______________\n";
		string s4 = "           |\n";
		string s5 = "|           ";
		string s6 = "|\n";
		string s7 = "|______________|\n";
		string s8 = "  *  *  *  *  ";
		string s9 = "    *  *  *   ";

};

class FaceDown_Card
{
	public:
		void printCard2()
		{
			cout << s3;
			cout << s1 << s2;
			cout << s1 << s9 << s6;
			cout << s1 << s8 << s6;
			cout << s1 << s9 << s6;
			cout << s1 << s8 << s6;
			cout << s1 << s9 << s6;
			cout << s1 << s8 << s6;
			cout << s1 << s9 << s6;
			cout << s1 << s8 << s6;
			cout << s7;
			system("PAUSE");
		}

	private:
		string s1 = "|";
		string s2 = "              |\n";
		string s3 = " ______________\n";
		string s6 = "|\n";
		string s7 = "|______________|\n";
		string s8 = "  *  *  *  *  ";
		string s9 = "    *  *  *   ";

};
