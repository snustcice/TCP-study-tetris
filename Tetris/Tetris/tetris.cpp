#include "tetris.h"
using namespace std;

void SetGame(void)
{
	srand((unsigned int)time(NULL));
	system("mode con cols=60 lines=30 | title Tetris");
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
	cout << 
		"     _______  ______  _______  _____   _____   _____ \n"
		"    |__   __||  ____||__   __||  __ \\ |_   _| / ____|\n"
		"       | |   | |__      | |   | |__) |  | |  | (___  \n"
		"       | |   |  __|     | |   |  _  /   | |   \\___ \\ \n"
		"       | |   | |____    | |   | | \\ \\  _| |_  ____) |\n"
		"       |_|   |______|   |_|   |_|  \\_\\|_____||_____/\n";
	MoveCursor(50, 8);
	cout << GAME_VERSION << endl;
	MoveCursor(25 - 2, 12);
	cout << "> 게임 시작";
	MoveCursor(25 - 2, 14);
	cout << "> 게임 정보";
	MoveCursor(25 - 2, 16);
	cout << "> 게임 종료";
}

int ReadKeyboard(void)
{
	char temp = getchar();
}