#include "tetris.h"

int main(void)
{
	SetGame();	//void SetGame(void) -- Semantic error(compile ok)
	while (1)
	{
		DrawMenu();
		if()
		system("cls");
	}
	system("pause");
	return 0;
}