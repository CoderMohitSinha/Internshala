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
	cout << "\t\t\t\t   3) SCORE CARD WILL BE GIVEN AT END         \n";
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
}
