#include "tetris.h"

int main(void)
{
	Initialize();	//void Init(void) -- Semantic error(compile ok)
	while (1)
	{
		ShowTitle();
		ShowMenu();
		switch (SelectMenu())
		{
		case GAME_START:
			CreateTet();
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