/*
* add shortcurcuit to checks for win and for checks for each winning combo to max efficiency
*/

#include <iostream>
#include <cstdlib>

using namespace std;

// FUNCTION DECLARATIONS
void validate(int, char); // function to decide if valid move (not already filled)
void displayBoard(char*); // print board
bool winCon(char*, char); // check for wins
void fillSquare(char); // insert 'x' or 'o' into board

char board[9] = {'0', '1', '2', '3', '4', '5', '6', '7', '8'}; // array for tracking board

void validate(int move, char player) // move should always be filled with board[x]
{
	if (char(move) == 'x' || char(move) == 'o') // simply check if equal to already placed character
	{
		cout << endl << "Please select a different spot to place your " << player << endl;
		system("pause");
		system("cls");
		displayBoard(board);
		fillSquare(player);
	}
}

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
} // end displayBoard

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

	// check diags
	if (board[0] == board[4] && board [8] == board[4] || board[2] == board[4] && board[6] == board[4]) // checks to see if board[4] (center) is equal to either set of diag corners
	{
		win == true;
	}

	return win;
} // end winCon

void fillSquare(char player)
{
	int toFill;
	for (int i = 0; i < 9; i++)
	{
		if (player == 'x')
		{
			cout << endl << "X, make your move!\t";
			cin >> toFill;
			validate(board[toFill], player);
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
			cout << endl << "O, make your move!\t";
			cin >> toFill;
			validate(board[toFill], player);
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
} // end fillSquare

int main()
{
	displayBoard(board);

	fillSquare('x');

	system("pause");
	return 0;
} // end main
