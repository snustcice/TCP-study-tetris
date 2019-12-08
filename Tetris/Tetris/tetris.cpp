#include "tetris.h"
using namespace std;

void Initialize(void)
{
	srand((unsigned int)time(NULL));
	system("mode con cols=60 lines=30 | title Tetris");

	HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);	//Get ConsoleHandle
	CONSOLE_CURSOR_INFO ConsoleCursor;
	ConsoleCursor.bVisible = 0;	//false or 0 : Hide cursor
	ConsoleCursor.dwSize = 1;
	SetConsoleCursorInfo(consoleHandle, &ConsoleCursor);
}

void MoveCursor(int x, int y)
{
	HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD pos;
	pos.X = x;
	pos.Y = y;
	SetConsoleCursorPosition(consoleHandle, pos);
}

void ShowTitle(void)
{
	cout <<
		"     _______  ______  _______  _____   _____   _____ \n"
		"    |__   __||  ____||__   __||  __ \\ |_   _| / ____|\n"
		"       | |   | |__      | |   | |__) |  | |  | (___  \n"
		"       | |   |  __|     | |   |  _  /   | |   \\___ \\ \n"
		"       | |   | |____    | |   | | \\ \\  _| |_  ____) |\n"
		"       |_|   |______|   |_|   |_|  \\_\\|_____||_____/\n";
	MoveCursor(46, 8);
	cout << GAME_VERSION << endl;
}

void ShowMenu(void)
{
	int x = 25, y = 12;
	MoveCursor(x - 2, y);
	cout << ">";
	MoveCursor(x, y);
	cout << "게임 시작";
	MoveCursor(x, y+2);
	cout << "게임 정보";
	MoveCursor(x, y+4);
	cout << "게임 종료";
}

int ReadKey(void)
{
	int temp = _getch();

	switch (temp)
	{
	case 72:
		return KEY_UP;
	case 80:
		return KEY_DOWN;
	case 75:
		return KEY_LEFT;
	case 77:
		return KEY_RIGHT;
	case 10:
		return SUBMIT;
	default:
		break;
	}
}

int SelectMenu(void)
{
	int x = 25, y = 12;
	while (1)
	{
		int n = ReadKey();
		switch (n) {
		case KEY_UP:
		{
			if (y > 12)
			{
				MoveCursor(x - 2, y);
				cout << " ";
				MoveCursor(x - 2, y -= 2);
				cout << ">";
			}
		}
		break;
		case KEY_DOWN:
		{
			if (y < 16)
			{
				MoveCursor(x - 2, y);
				cout << " ";
				MoveCursor(x - 2, y += 2);
				cout << ">";
			}
		}
		break;
		case SUBMIT:
		{
			if (y == 12)
				return GAME_START;
			else if (y == 14)
				return GAME_INFO;
			else if (y == 16)
				return GAME_QUIT;
		}
		break;
		}
	}
}

void ShowInfo(void)
{
	system("cls");
	cout << "\n\n";
	cout <<
		"2019-2학기 테트리스 스터디\n"
		"조작법 : 방향키\n"
		"선택 : 엔터 키\n"			
		"Esc를 누르면 메인 화면으로 이동합니다.\n";
	while (1)
	{
		if (ReadKey() == ESC)
			break;
	}
}

void SetGame(void)
{

}
void CreateTet(void)
{
	//Convert binary to hexadecimal(0, 1) --> specific hexadecimal value, easier to print
	int Tetrominos[7][4]=
	{
		{ 0x4640, 0x0E40, 0x4C40, 0x4E00 }, // 'T'
		{ 0x8C40, 0x6C00, 0x8C40, 0x6C00 }, // 'S'
		{ 0x4C80, 0xC600, 0x4C80, 0xC600 }, // 'Z'
		{ 0x4444, 0x0F00, 0x4444, 0x0F00 }, // 'I'
		{ 0x44C0, 0x8E00, 0xC880, 0xE200 }, // 'J'
		{ 0x88C0, 0xE800, 0xC440, 0x2E00 }, // 'L'
		{ 0xCC00, 0xCC00, 0xCC00, 0xCC00 }  // 'O'
	};

	int tet_x = rand() % 7;
	int tet_y = rand() % 4;

	MoveCursor(10, 50);
	cout << Tetrominos[tet_x][tet_y];
}