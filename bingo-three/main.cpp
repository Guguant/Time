#include "header.h"
#include "mainwin.h"
#include "Player.h"
/*  �����Ĵ�ֵ���ó����� */
int main() // main
{
	system("title ����");
	system("color 00");

	int **chess;
	chess = (int **)malloc(sizeof(int *) * 5);
	for (int i = 0; i<5; i++)
		chess[i] = (int *)malloc(sizeof(int) * 10);
	mainwin(chess);

	int sum = 9;
	while (sum--) // ���� ����9��
	{
		SetPosition(chess, 1); // 1���� ��������
		mainwin(chess);

		SetPosition(chess, 2); // 2���� ��������
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