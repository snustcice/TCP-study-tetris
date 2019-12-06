#include "tetris.h"

int main(void)
{
	SetGame();	//void SetGame(void) -- Semantic error(compile ok)
	while (1)
	{
		ShowTitle();
		ShowMenu();
		switch (SelectMenu())
		{
		case GAME_START:
			break;
		case GAME_INFO:
			ShowInfo();
			break;
		case GAME_QUIT:
			break;
		}
		system("cls");
	}
	
	system("pause");
	return 0;
}