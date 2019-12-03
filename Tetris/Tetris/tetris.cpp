#include "tetris.h"
using namespace std;

void SetGame(void)
{
	system("mode con cols=50 lines=30 | title Tetris");
}

void MoveCursor(int x, int y)
{
	HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD pos;
	pos.X = x;
	pos.Y = y;
	SetConsoleCursorPosition(consoleHandle, pos);
}

void DrawMenu(void)
{
	MoveCursor(18 - 2, 12);
	cout << "> 게임 시작";
	MoveCursor(18 - 2, 16);
	cout << "> 게임 정보";
	MoveCursor(18 - 2, 20);
	cout << "> 게임 종료";
}