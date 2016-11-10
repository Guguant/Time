#pragma once
#include "header.h"


void SetPosition(int**, int); // ���� ģ��
void Move(int **, int); // �ƶ�����ģ��
bool Find(int **, int); // Find the three
void Eating(int **, int); // Eat the chess
void Play(int **, string, int);

void SetPosition(int **arr, int flag) //������ flag = 0 , Play1�ߣ� flag = 1�� Play2��
{
	string callme = "";
	if (flag == 1)
	{
		cout << "Player 1 : ";
		cin >> callme;
		Play(arr, callme, 1); // Player 1 ������
	}
	else
	{
		cout << "Player 2 : ";
		cin >> callme;
		Play(arr, callme, 2); // Player 2 ������
	}
}


void Play(int **arr, string callme, int flag) // ��� :  ����ģ��
{
	//Play 1..  Play 2..

	if (flag == 1) // Player 1 ��
	{
		if (callme[0] == 'A')  // �����
			arr[0][int(callme[1])] = 1;//1 ��ʾPlayer 1
		else if (callme[0] == 'B')  // �в�
			arr[1][int(callme[1])] = 1;
		else // �ڲ�
			arr[2][int(callme[1])] = 1;
		arr[1][0]++; //������ Player 1 : �м�����
		if (Find(arr, 1))
		{
			Eating(arr, 1); //�Ե� 2 ��һ������
		}
	}

	else  // Player 2..
	{
		if (callme[0] == 'A')  // �����
			arr[0][int(callme[1])] = 2;//2 ��ʾPlayer 2
		else if (callme[0] == 'B')  // �в�
			arr[1][int(callme[1])] = 2;
		else // �ڲ�
			arr[2][int(callme[1])] = 2;
		arr[2][0]++;  // ���� Player 2: �м�����
		if (Find(arr, 2))
		{
			Eating(arr, 2);
		}
	}
}


void Move(int **arr, int flag)  // �ƶ����� ģ��
{
	string str1 = "", str2 = ""; // a1 : ��ʼ�� a2 : ��Ҫ
	if (flag == 1)
	{
		cout << "��Playr 1   Go : " << endl;
		cin >> str1 >> str2;

		if (str1[0] == 'A')  // �����
		{
			arr[0][int(str1[1])] = 0;//1 ��ʾPlayer 1
			if (str2[0] == 'A')
				arr[0][int(str2[1])] = 1;
			else if (str2[0] == 'B')
				arr[0][int(str2[1])] = 1;
			else
				arr[0][int(str2[1])] = 1;
		}
		else if (str1[0] == 'B')  // �в�
		{
			arr[1][int(str1[1])] = 0;//1 ��ʾPlayer 1
			if (str2[0] == 'A')
				arr[1][int(str2[1])] = 1;
			else if (str2[0] == 'B')
				arr[1][int(str2[1])] = 1;
			else
				arr[1][int(str2[1])] = 1;
		}
		else // �ڲ�
		{
			arr[2][int(str1[1])] = 0;//1 ��ʾPlayer 1
			if (str2[0] == 'A')
				arr[2][int(str2[1])] = 1;
			else if (str2[0] == 'B')
				arr[2][int(str2[1])] = 1;
			else
				arr[2][int(str2[1])] = 1;
		}
		arr[1][0]++; //������ Player 1 : �м�����
		if (Find(arr, 1))
		{
			Eating(arr, 2); //�Ե� 2 ��һ������
		}
	}

	else
	{
		cout << "��Playr 2   Go : " << endl;
		cin >> str1 >> str2;

		if (str1[0] == 'A')  // �����
		{
			arr[0][int(str1[1])] = 0;//2 ��ʾPlayer 2
			if (str2[0] == 'A')
				arr[0][int(str2[1])] = 2;
			else if (str2[0] == 'B')
				arr[0][int(str2[1])] = 2;
			else
				arr[0][int(str2[1])] = 2;
		}
		else if (str1[0] == 'B')  // �в�
		{
			arr[1][int(str1[1])] = 0;//1 ��ʾPlayer 1
			if (str2[0] == 'A')
				arr[1][int(str2[1])] = 2;
			else if (str2[0] == 'B')
				arr[1][int(str2[1])] = 2;
			else
				arr[1][int(str2[1])] = 2;
		}
		else // �ڲ�
		{
			arr[2][int(str1[1])] = 0;//1 ��ʾPlayer 2
			if (str2[0] == 'A')
				arr[2][int(str2[1])] = 2;
			else if (str2[0] == 'B')
				arr[2][int(str2[1])] = 2;
			else
				arr[2][int(str2[1])] = 2;
		}
		arr[2][0]++; //������ Player 1 : �м�����
		if (Find(arr, 1))
		{
			Eating(arr, 1); //�Ե� 1 ��һ������
		}
	}

}

bool Find(int **arr, int flag) /* ���������� �ҵ�*/
{
	if (flag == 1) //// Player 1:
	{
		for (int i = 1;i <= 7;i++, i++) //����������
		{
			if ((arr[0][i] == arr[0][i + 1] && arr[0][i] == arr[0][i + 2] % 8 && arr[0][i] == 1)\
				|| (arr[1][i] == arr[1][i + 1] && arr[1][i] == arr[1][i + 2] % 8 && arr[1][i] == 1) \
				|| (arr[2][i] == arr[2][i + 1] && arr[2][i] == arr[2][i + 2] % 8 && arr[2][i] == 1))
				return true;
		}
		for (int i = 2;i <= 8;i++, i++)
		{
			if (arr[0][i] == arr[1][i] && arr[0][i] == arr[2][i] && arr[0][i] == 1)
				return true; // find the sansan �� back true
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
				return true; // find the sansan �� back true
		}

	}
	return false;// û�г��� back false
}

/* �Ե��Է���һ������*/
void Eating(int **arr, int flag)
{
	string eat = "";
	cin >> eat;
	if (flag == 1)
	{
		cout << "��Play 2 ���뽫�Ե������� : " << endl;
		if (eat[0] == 'A')
			arr[1][int(eat[1])] = 0;//1 ��ʾPlayer 1
		else if (eat[0] == 'B')
			arr[1][int(eat[1])] = 0;
		else
			arr[1][int(eat[1])] = 0;
		arr[1][0]--;
	}

	else
	{
		cout << "��Play 1 ���뽫�Ե������� : " << endl;
		if (eat[0] == 'A')
			arr[2][int(eat[1])] = 0;//2 ��ʾPlayer 2
		else if (eat[0] == 'B')
			arr[2][int(eat[1])] = 0;
		else
			arr[2][int(eat[1])] = 0;
		arr[2][0]--; // ���Ե���һ����������һ
	}
}
