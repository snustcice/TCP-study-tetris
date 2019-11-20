#include "tetris.h"

class Tetrominoe
{
public:
	void rotate()
	{
		//블록이 회전하는 부분
	}
	void move()
	{
		//블록이 이동하는 부분
	}
private:
	const char I, J, L, O, S, T, Z;

};

void MoveCursor(int x, int y)
{
	HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD pos;
	pos.X = x;
	pos.Y = y;
	SetConsoleCursorPosition(consoleHandle, pos);
}