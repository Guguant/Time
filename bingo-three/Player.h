#pragma once
#include "Player.cpp"

void SetPosition(int**, int); // 下子 模块
void Move(int **, int); // 移动棋子模块
bool Find(int **, int); // Find the three
void Eating(int **, int); // Eat the chess
void Play(int **, string, int);