#include "tetris.h"

int main(void)
{
	SetGame();	//void SetGame(void) -- Semantic error(compile ok)
	DrawMenu();
	system("pause");
	return 0;
}