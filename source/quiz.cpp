#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <algorithm>
#define QNO 30
#define totques 10

using namespace std;

void Display()
{
	cout << "\n\n\n\n\n\n";
	cout << "\n\t   +-------+                          _______       _______                             ";
	cout << "\n\t   |       |      |         |            |                /                              ";
	cout << "\n\t   |       |      |         |            |               /                               ";
	cout << "\n\t   |       |      |         |            |              /                                ";
	cout << "\n\t   |    // |      |         |            |             /                                 ";
	cout << "\n\t   |   //  |      |         |            |            /                                  ";
	cout << "\n\t   +--//---+      |_________|         ___|___        /_______                          ";
	cout << "\n\n\n\n\n\n\t\t\t   PRESS ENTER TO PLAY     ";
	cout << "\n\n\n\t\t\t\t   RULES OF THE GAME   :     \n";
	cout << "\t\t\t\t   1) 4 MARKS WILL BE AWARDED FOR CORRECT ANSWER   \n";
	cout << "\t\t\t\t   2) NO MARKS WILL AWARDED FOR INCORRECT ANSWER   \n";
	cout << "\t\t\t\t   3) SCORE CARD WILL BE GIVEN AT THE END         \n";
	system("pause");
	system("cls");
}

void asked(string option, string option1, string option2,
		   string option3, string option4, string correct, string category, ofstream &fp, int *score)
{
	cout << "Your Option : ";
	cin >> option;
	transform(option.begin(), option.end(), option.begin(), ::toupper);
	option.append(")");
	
	fp << category << endl;

	if (option[0] == correct[0])
	{
		if (option[0] == option1[0])
			fp << " Your entered correct answer  : " << option1 << endl;
		if (option[0] == option2[0])
			fp << " Your entered correct answer  : " << option2 << endl;
		if (option[0] == option3[0])
			fp << " Your entered correct answer  : " << option3 << endl;
		if (option[0] == option4[0])
			fp << " Your entered correct answer  : " << option4 << endl;

		*score += 4;
		fp << " You are awarded 4 marks for this correct answer " << endl;
	}
	
}
