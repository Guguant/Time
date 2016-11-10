#pragma once
#include "header.h"


void SetPosition(int**, int); // 下子 模块
void Move(int **, int); // 移动棋子模块
bool Find(int **, int); // Find the three
void Eating(int **, int); // Eat the chess
void Play(int **, string, int);

void SetPosition(int **arr, int flag) //下棋子 flag = 0 , Play1走， flag = 1， Play2走
{
	string callme = "";
	if (flag == 1)
	{
		cout << "Player 1 : ";
		cin >> callme;
		Play(arr, callme, 1); // Player 1 下棋子
	}
	else
	{
		cout << "Player 2 : ";
		cin >> callme;
		Play(arr, callme, 2); // Player 2 下棋子
	}
}


void Play(int **arr, string callme, int flag) // 玩家 :  下子模块
{
	//Play 1..  Play 2..

	if (flag == 1) // Player 1 ：
	{
		if (callme[0] == 'A')  // 最外层
			arr[0][int(callme[1])] = 1;//1 表示Player 1
		else if (callme[0] == 'B')  // 中层
			arr[1][int(callme[1])] = 1;
		else // 内层
			arr[2][int(callme[1])] = 1;
		arr[1][0]++; //计数， Player 1 : 有几个子
		if (Find(arr, 1))
		{
			Eating(arr, 1); //吃掉 2 的一颗棋子
		}
	}

	else  // Player 2..
	{
		if (callme[0] == 'A')  // 最外层
			arr[0][int(callme[1])] = 2;//2 表示Player 2
		else if (callme[0] == 'B')  // 中层
			arr[1][int(callme[1])] = 2;
		else // 内层
			arr[2][int(callme[1])] = 2;
		arr[2][0]++;  // 计数 Player 2: 有几个子
		if (Find(arr, 2))
		{
			Eating(arr, 2);
		}
	}
}


void Move(int **arr, int flag)  // 移动棋子 模块
{
	string str1 = "", str2 = ""; // a1 : 起始， a2 : 将要
	if (flag == 1)
	{
		cout << "请Playr 1   Go : " << endl;
		cin >> str1 >> str2;

		if (str1[0] == 'A')  // 最外层
		{
			arr[0][int(str1[1])] = 0;//1 表示Player 1
			if (str2[0] == 'A')
				arr[0][int(str2[1])] = 1;
			else if (str2[0] == 'B')
				arr[0][int(str2[1])] = 1;
			else
				arr[0][int(str2[1])] = 1;
		}
		else if (str1[0] == 'B')  // 中层
		{
			arr[1][int(str1[1])] = 0;//1 表示Player 1
			if (str2[0] == 'A')
				arr[1][int(str2[1])] = 1;
			else if (str2[0] == 'B')
				arr[1][int(str2[1])] = 1;
			else
				arr[1][int(str2[1])] = 1;
		}
		else // 内层
		{
			arr[2][int(str1[1])] = 0;//1 表示Player 1
			if (str2[0] == 'A')
				arr[2][int(str2[1])] = 1;
			else if (str2[0] == 'B')
				arr[2][int(str2[1])] = 1;
			else
				arr[2][int(str2[1])] = 1;
		}
		arr[1][0]++; //计数， Player 1 : 有几个子
		if (Find(arr, 1))
		{
			Eating(arr, 2); //吃掉 2 的一颗棋子
		}
	}

	else
	{
		cout << "请Playr 2   Go : " << endl;
		cin >> str1 >> str2;

		if (str1[0] == 'A')  // 最外层
		{
			arr[0][int(str1[1])] = 0;//2 表示Player 2
			if (str2[0] == 'A')
				arr[0][int(str2[1])] = 2;
			else if (str2[0] == 'B')
				arr[0][int(str2[1])] = 2;
			else
				arr[0][int(str2[1])] = 2;
		}
		else if (str1[0] == 'B')  // 中层
		{
			arr[1][int(str1[1])] = 0;//1 表示Player 1
			if (str2[0] == 'A')
				arr[1][int(str2[1])] = 2;
			else if (str2[0] == 'B')
				arr[1][int(str2[1])] = 2;
			else
				arr[1][int(str2[1])] = 2;
		}
		else // 内层
		{
			arr[2][int(str1[1])] = 0;//1 表示Player 2
			if (str2[0] == 'A')
				arr[2][int(str2[1])] = 2;
			else if (str2[0] == 'B')
				arr[2][int(str2[1])] = 2;
			else
				arr[2][int(str2[1])] = 2;
		}
		arr[2][0]++; //计数， Player 1 : 有几个子
		if (Find(arr, 1))
		{
			Eating(arr, 1); //吃掉 1 的一颗棋子
		}
	}

}

bool Find(int **arr, int flag) /* 遍历成三， 找到*/
{
	if (flag == 1) //// Player 1:
	{
		for (int i = 1;i <= 7;i++, i++) //跳两个格子
		{
			if ((arr[0][i] == arr[0][i + 1] && arr[0][i] == arr[0][i + 2] % 8 && arr[0][i] == 1)\
				|| (arr[1][i] == arr[1][i + 1] && arr[1][i] == arr[1][i + 2] % 8 && arr[1][i] == 1) \
				|| (arr[2][i] == arr[2][i + 1] && arr[2][i] == arr[2][i + 2] % 8 && arr[2][i] == 1))
				return true;
		}
		for (int i = 2;i <= 8;i++, i++)
		{
			if (arr[0][i] == arr[1][i] && arr[0][i] == arr[2][i] && arr[0][i] == 1)
				return true; // find the sansan ， back true
		}
	}

	else // Player 2:
	{
		for (int i = 1;i <= 7;i++, i++)
		{
			if ((arr[0][i] == arr[0][i + 1] && arr[0][i] == arr[0][i + 2] % 8 && arr[0][i] == 2) \
				|| (arr[1][i] == arr[1][i + 1] && arr[1][i] == arr[1][i + 2] % 8 && arr[1][i] == 2) \
				|| (arr[2][i] == arr[2][i + 1] && arr[2][i] == arr[2][i + 2] % 8 && arr[2][i] == 2))
				return true;
		}
		for (int i = 2;i <= 8;i++, i++)
		{
			if (arr[0][i] == arr[1][i] && arr[0][i] == arr[2][i] && arr[0][i] == 2)
				return true; // find the sansan ， back true
		}

	}
	return false;// 没有成三 back false
}

/* 吃掉对方的一颗棋子*/
void Eating(int **arr, int flag)
{
	string eat = "";
	cin >> eat;
	if (flag == 1)
	{
		cout << "请Play 2 输入将吃掉的棋子 : " << endl;
		if (eat[0] == 'A')
			arr[1][int(eat[1])] = 0;//1 表示Player 1
		else if (eat[0] == 'B')
			arr[1][int(eat[1])] = 0;
		else
			arr[1][int(eat[1])] = 0;
		arr[1][0]--;
	}

	else
	{
		cout << "请Play 1 输入将吃掉的棋子 : " << endl;
		if (eat[0] == 'A')
			arr[2][int(eat[1])] = 0;//2 表示Player 2
		else if (eat[0] == 'B')
			arr[2][int(eat[1])] = 0;
		else
			arr[2][int(eat[1])] = 0;
		arr[2][0]--; // 被吃掉的一方棋子数减一
	}
}
