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
	else
	{
		string correctanswer;
		if (correct[0] == option1[0])
			correctanswer = option1;
		if (correct[0] == option2[0])
			correctanswer = option2;
		if (correct[0] == option3[0])
			correctanswer = option3;
		if (correct[0] == option4[0])
			correctanswer = option4;

		string wronganswer;
		if (option[0] == option1[0])
			wronganswer = option1;
		if (option[0] == option2[0])
			wronganswer = option2;
		if (option[0] == option3[0])
			wronganswer = option3;
		if (option[0] == option4[0])
			wronganswer = option4;

		fp << " You entered     : " << wronganswer << endl;
		fp << " Correct answer  : " << correctanswer << endl;
		fp << " You are awarded 0 marks for this wrong answer " << endl;
	}
	fp << " -----------------------------------------------------------------------------\n";
	fp << " -----------------------------------------------------------------------------\n";
}

int main()
{

	ifstream fins("question_bank.txt");
	ofstream output("your_answers.txt");
	string text;
	string option1, option2, option3, option4, option, correct, category;
	int score = 0;
	int arr[QNO];
}	
