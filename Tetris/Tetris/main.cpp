#include "tetris.h"

int main(void)
{
	SetGame();	//void SetGame(void) -- Semantic error(compile ok)
	while (1)
	{
		DrawMenu();
		
		system("cls");
	}
	system("pause");
	return 0;
}