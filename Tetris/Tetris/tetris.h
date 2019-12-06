#ifndef TETRIS
#define TETRIS
#define UP 0
#define DOWN 1
#define LEFT 2
#define RIGHT 3

#include <iostream>
#include <Windows.h>
#include <stdio.h>
#include <cstdlib>
#include <ctime>	//cstdlib, ctime -- for using srand()

void SetGame(void);
void MoveCursor(int x, int y);
void DrawMenu(void);
int ReadKeyboard(void);

const char GAME_VERSION[20] = "v.1.0";
#endif