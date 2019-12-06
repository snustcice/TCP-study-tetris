#ifndef TETRIS
#define TETRIS
#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77	//define ASCII code for arrow key
#define SUBMIT 13	//define ASCII code for enter key(\n)
#define ESC 27
#define GAME_START 0
#define GAME_INFO 1
#define GAME_QUIT 2

#include <iostream>
#include <Windows.h>
#include <conio.h>	//for using _getch()
#include <cstdlib>
#include <ctime>	//cstdlib, ctime -- for using srand()

void SetGame(void);
void ShowTitle(void);
void MoveCursor(int x, int y);
void ShowMenu(void);
int SelectMenu(void);
void ShowInfo(void);
int ReadKey(void);
void CreateTet(void);	//Create Tetriminos(blocks)

const char GAME_VERSION[20] = "test version";	//Version

#endif