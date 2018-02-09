<<<<<<< HEAD
/*
* add shortcurcuit to checks for win and for checks for each winning combo to max efficiency
*/

#include <iostream>
#include <cstdlib>

using namespace std;

char board[9] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};

void displayBoard(char b[9])
{
	cout << endl << endl << endl;
	for (int i = 0; i < 8; i += 3)
	{
		cout << "\t\t" << "| " << b[int(i)] << " | " << b[int(i) + 1] << " | " << b[int(i) + 2] << " |" << endl;
		if (!(i >= 6))
		{
			cout << "\t\t" << "-------------" << endl;
		}
	}
}

bool winCon(char board[9], char player)
{
	bool win = false;	

	for (int i = 0; i < 9; i += 3)
	{
		if (board[i] == player && board[i+1] == player && board[i+2] == player)
		{
			win = true;
			break;
		}
	}
	
	for (int c = 0; c < 3; c++)
	{
		if (board[c] == player && board[c+3] == player && board[c+6] == player)
		{
			win = true;
			break;
		}
	}

	return win;
}

void fillSquare(char player)
{
	int toFill;
	for (int i = 0; i < 9; i++)
	{
		if (player == 'x')
		{
			cout << "X, make your move!\t";
			cin >> toFill;
			board[toFill] = player;
			system("cls");
			displayBoard(board);
			bool win = winCon(board, player);
			if (win == true)
			{
				cout << "X's win!!" << endl << endl;
				break;
			}
			player = 'o';
		}
		else
		{
			cin >> toFill;
			board[toFill] = player;
			system("cls");
			displayBoard(board);
			bool win = winCon(board, player);
			if (win == true)
			{
				cout << "O's win!!" << endl << endl;
				break;
			}
			player = 'x';
		}
	}
}

int main()
{
	displayBoard(board);

	fillSquare('x');

	system("pause");
	return 0;
}
=======
/*
* add shortcurcuit to checks for win and for checks for each winning combo to max efficiency
*/

#include <iostream>
#include <cstdlib>

using namespace std;

char board[9] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};

void displayBoard(char b[9])
{
	cout << endl << endl << endl;
	for (int i = 0; i < 8; i += 3)
	{
		cout << "\t\t" << "| " << b[int(i)] << " | " << b[int(i) + 1] << " | " << b[int(i) + 2] << " |" << endl;
		if (!(i >= 6))
		{
			cout << "\t\t" << "-------------" << endl;
		}
	}
}

bool winCon(char board[9], char player)
{
	bool win = false;	

	for (int i = 0; i < 9; i += 3)
	{
		if (board[i] == player && board[i+1] == player && board[i+2] == player)
		{
			win = true;
			break;
		}
	}
	
	for (int c = 0; c < 3; c++)
	{
		if (board[c] == player && board[c+3] == player && board[c+6] == player)
		{
			win = true;
			break;
		}
	}

	return win;
}

void fillSquare(char player)
{
	int toFill;
	for (int i = 0; i < 9; i++)
	{
		if (player == 'x')
		{
			cout << "X, make your move!\t";
			cin >> toFill;
			board[toFill] = player;
			system("cls");
			displayBoard(board);
			bool win = winCon(board, player);
			if (win == true)
			{
				cout << "X's win!!" << endl << endl;
				break;
			}
			player = 'o';
		}
		else
		{
			cin >> toFill;
			board[toFill] = player;
			system("cls");
			displayBoard(board);
			bool win = winCon(board, player);
			if (win == true)
			{
				cout << "O's win!!" << endl << endl;
				break;
			}
			player = 'x';
		}
	}
}

int main()
{
	displayBoard(board);

	fillSquare('x');

	system("pause");
	return 0;
}
>>>>>>> 631cfa8895bf37745ea2ab608712380b4ae9f9a1
