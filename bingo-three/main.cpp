#include "header.h"
#include "mainwin.h"
#include "Player.h"
/*  函数的传值调用出问题 */
int main() // main
{
	system("title 成三");
	system("color 00");

	int **chess;
	chess = (int **)malloc(sizeof(int *) * 5);
	for (int i = 0; i<5; i++)
		chess[i] = (int *)malloc(sizeof(int) * 10);
	mainwin(chess);

	int sum = 9;
	while (sum--) // 落子 共有9个
	{
		SetPosition(chess, 1); // 1代表 黑棋先走
		mainwin(chess);

		SetPosition(chess, 2); // 2代表 白棋先走
		mainwin(chess);
	}

	do {
		Move(chess, 1);
		mainwin(chess);

		Move(chess, 2);
		mainwin(chess);
	} while (chess[1][0] <= 2 || chess[2][0] <= 2);
	system("pause");
	return 0;
}