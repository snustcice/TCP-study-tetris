#include "tetris.h"

class Tetrominoe
{
public:
	void rotate()
	{
		//����� ȸ���ϴ� �κ�
	}
	void move()
	{
		//����� �̵��ϴ� �κ�
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