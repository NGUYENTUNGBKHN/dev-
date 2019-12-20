#include <iostream>
using namespace std;

#define BLACK '-'
#define QUEEN 'Q'

#define N 4

// set board all black
void setBoardBlack(char Board[N][N])
{
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			Board[i][j] = BLACK;
		}
	}
}

// print board
void printBoard(char Board[N][N])
{
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j ++)
		{
			cout << Board[i][j];
		}
		cout << endl;
	}
}

bool isQueenSafeAtPosiontion(char Board[N][N], int Row, int Col)
{
	// check safe at Row and Column
	for (int i = 0; i < N; i++)
	{
		if (Board[Row][i] == QUEEN)
		{
			return false;
		}
		
		if (Board[i][Col] == QUEEN)
		{
			return false;
		}
	}
	
	// check safe at first diagonal
	for (int i = Row, j = Col;(i >= 0) && (j >= 0); i--, j--)
	{
		if (Board[i][j] == QUEEN)
		{
			return false;
		}
	}
	
	for (int i = Row, j = Col; (i < N) && (j < N); i++, j++)
	{
		if (Board[i][j] == QUEEN)
		{
			return false;
		}
	}
	
	// check safe at second diagonal
	for (int i = Row, j = Col;(i >= 0) && (j < N);i--, j++)
	{
		if (Board[i][j] == QUEEN)
		{
			return false;	
		} 
	}
	
	for (int i = Row, j = Col; (i < N) && (j >= 0); i++, j--)
	{
		if (Board[i][j] == QUEEN)
		{
			return false;
		}
	}
	return true;
}

bool solveNQueenProblem(char Board[N][N],int Row)
{
	if (Row >= N)
	{
		return true;
	}
	
	for (int j = 0; j < N ;j++)
	{
		if (isQueenSafeAtPosiontion(Board, Row, j) == true)
		{
			Board[Row][j] = QUEEN;
			if (solveNQueenProblem(Board,Row + 1) == true)
			{
				return true;
			}
			else
			{
				Board[Row][j] = BLACK;
			}
		}
	}
	return false;
}

int main()
{
	char Board[N][N];
	setBoardBlack(Board);
 
	if (solveNQueenProblem(Board, 0) == false)
	{
		cout << "Can't find any solution!" << endl;
		printBoard(Board);
	}
	else
	{
		cout << "Succeed !" << endl;
		printBoard(Board);
	}
	
	getchar();
	return 0;
}
