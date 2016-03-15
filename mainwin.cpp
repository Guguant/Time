#pragma once
#include "header.h"
/*
* 输出当前的棋谱， 进行模式匹配
*
*
*/
void beauty();
void mainwin(int **); // 主界面

void mainwin(int **Chess) // 主要输出界面
{
	for (int i = 1;i <= 13;i++)
	{

		if (i == 1)
		{
			beauty();
			for (int j = 1; j <= 13;j++)
			{
				if ((j == 1 && Chess[0][1] == 1) || (j == 7 && Chess[0][2] == 1) || (j == 13 && Chess[0][3] == 1))
					cout << "●";
				else if ((j == 1 && Chess[0][1] == 2) || (j == 7 && Chess[0][2] == 2) || (j == 13 && Chess[0][3] == 2))
					cout << "■";
				else
					cout << "０";
			}
		}

		else if (i == 2 || i == 12)
		{
			beauty();
			for (int j = 1;j <= 13;j++)
				if (j == 1 || j == 7 || j == 13)
					cout << "０";
				else
					cout << "  ";
		}

		else if (i == 3)
		{
			beauty();
			for (int j = 1;j <= 13;j++)
			{
				if (j == 2 || j == 12)
					cout << "  ";
				else
				{
					if ((j == 3 && Chess[1][1] == 1) || (j == 7 && Chess[1][2] == 1) || (j == 11 && Chess[1][3] == 1))
						cout << "●";
					else if ((j == 3 && Chess[1][1] == 2) || (j == 7 && Chess[1][2] == 2) || (j == 11 && Chess[1][3] == 2))
						cout << "■";
					else
						cout << "０";
				}
			}
		}

		else if (i == 4 || i == 10)
		{
			beauty();
			for (int j = 1;j <= 13;j++)
				if (j == 1 || j == 3 || j == 7 || j == 11 || j == 13)
					cout << "０";
				else
					cout << "  ";
		}


		else if (i == 5)
		{
			beauty();
			for (int j = 1;j <= 13;j++)
			{
				if (j == 2 || j == 4 || j == 12 || j == 10)
					cout << "  ";
				else
				{
					if ((j == 5 && Chess[2][1] == 1) || (j == 7 && Chess[2][2] == 1) || (j == 9 && Chess[2][3] == 1))
						cout << "●";
					else if ((j == 5 && Chess[2][1] == 2) || (j == 7 && Chess[2][2] == 2) || (j == 9 && Chess[2][3] == 2))
						cout << "■";
					else cout << "０";
				}
			}
		}

		else if (i == 6 || i == 8)
		{
			beauty();
			for (int j = 1;j <= 13;j++)
				if (j == 1 || j == 3 || j == 5 || j == 9 || j == 11 || j == 13)
					cout << "０";
				else
					cout << "  ";
		}

		else if (i == 7)
		{
			beauty();
			for (int j = 1;j <= 13;j++)
				if (j >= 6 && j <= 8)
					cout << "  ";
				else
				{
					if ((j == 1 && Chess[0][8] == 1) || (j == 3 && Chess[1][8] == 1) || (j == 5 && Chess[2][8] == 1) || \
						(j == 9 && Chess[2][4] == 1) || (j == 11 && Chess[1][4] == 1) || (j == 13 && Chess[0][4] == 1))
						cout << "●";
					else if ((j == 1 && Chess[0][8] == 2) || (j == 3 && Chess[1][8] == 2) || (j == 5 && Chess[2][8] == 2) || \
						(j == 9 && Chess[2][4] == 2) || (j == 11 && Chess[1][4] == 2) || (j == 13 && Chess[0][4] == 2))
						cout << "■";
					else cout << "０";
				}
		}

		else if (i == 9)
		{
			beauty();
			for (int j = 1;j <= 13;j++)
			{
				if (j == 2 || j == 4 || j == 12 || j == 10)
					cout << "  ";
				else
				{
					if ((j == 5 && Chess[2][7] == 1) || (j == 7 && Chess[2][6] == 1) || (j == 9 && Chess[2][5] == 1))
						cout << "●";
					else if ((j == 5 && Chess[2][7] == 2) || (j == 7 && Chess[2][6] == 2) || (j == 9 && Chess[2][5] == 2))
						cout << "■";
					else cout << "０";
				}
			}
		}


		else if (i == 11)
		{
			beauty();
			for (int j = 1;j <= 13;j++)
			{
				if (j == 2 || j == 12)
					cout << "  ";
				else
				{
					if ((j == 3 && Chess[1][1] == 1) || (j == 7 && Chess[1][2] == 1) || (j == 11 && Chess[1][3] == 1))
						cout << "●";
					else if ((j == 3 && Chess[1][1] == 2) || (j == 7 && Chess[1][2] == 2) || (j == 11 && Chess[1][3] == 2))
						cout << "■";
					else cout << "０";
				}
			}
		}

		else if (i == 13)
		{
			beauty();
			for (int j = 1; j <= 13;j++)
			{
				if ((j == 1 && Chess[0][7] == 1) || (j == 7 && Chess[0][6] == 1) || (j == 13 && Chess[0][5] == 1))
					cout << "●";
				else if ((j == 1 && Chess[0][7] == 2) || (j == 7 && Chess[0][6] == 2) || (j == 13 && Chess[0][5] == 2))
					cout << "■";
				else
					cout << "０";
			}
		}

		else {};
		cout << endl;
	}
}
void beauty()
{
	for (int i = 0;i < 5;i++)
		cout << "  ";
}
