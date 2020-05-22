МИНИСТЕРСТВО НАУКИ  И ВЫСШЕГО ОБРАЗОВАНИЯ РОССИЙСКОЙ ФЕДЕРАЦИИ  
Федеральное государственное автономное образовательное учреждение высшего образования  
"КРЫМСКИЙ ФЕДЕРАЛЬНЫЙ УНИВЕРСИТЕТ им. В. И. ВЕРНАДСКОГО"  
ФИЗИКО-ТЕХНИЧЕСКИЙ ИНСТИТУТ  
Кафедра компьютерной инженерии и моделирования
<br/><br/>

### Отчёт по лабораторной работе № 2<br/> по дисциплине "Программирование"
<br/>

студента 1 курса группы ИВТ-б-о-192(2)  
Соколова Игоря Андреевича 
направления подготовки 09.03.01 "Информатика и вычислительная техника"  
<br/>

<table>
<tr><td>Научный руководитель<br/> старший преподаватель кафедры<br/> компьютерной инженерии и моделирования</td>
<td>(оценка)</td>
<td>Чабанов В.В.</td>
</tr>
</table>
<br/><br/>

Симферополь, 2019

<br/><br/><br/>**Цель:** 

* Закрепить навыки работы с перечислениями;
* Закрепить навыки работы с структурами;
* Освоить методы составления многофайловых программ.

#### Ход работы
1. Вспомогательный файл
```cpp
#pragma once
#include<iostream>
using namespace std;
#define SIZE 3
/* Состояния игры */
enum Status {
    PLAY,            // Игра продолжается
    USER_WIN,        // Игрок победил
    BOT_WIN,         // Бот победил
    NOT_WIN          // Ничья. Победителя нет, но и на поле нет свободной ячейки
};
struct Game {
    char bord[SIZE][SIZE];  // Игровое поле
    bool isUserTurn;  // Чей ход. Если пользователя, то isUserTurn = true
    char userChar;    // Символ которым играет пользователь
    char botChar;     // Символ которым играет бот
    Status status;
};
Game initGame(char userChar);
void updateDisplay(const Game game);
void botTurn(Game* game);
void userTurn(Game* game);
bool updateGame(Game* game);
```
 2) Файл реализующий игру 
```CPP
#include "tik_tak.h"

Game initGame(char userChar)
{
	Game g;
	for (int i = 0; i < SIZE; i++)
		for (int j = 0; j < SIZE; j++)
			g.bord[i][j] = ' ';

	g.isUserTurn = rand() % 2 == 0;
	g.userChar = userChar;
	if (userChar != 'O')
		g.botChar = 'O';
	else
		g.botChar = 'X';
	g.status = PLAY;
	
	return g;
}

void updateDisplay(const Game game)
{
	system("cls");

	cout << "    1   2   3"<<endl;
	cout << "  -------------" << endl;
	for (int i = 0; i < SIZE; i++)
	{
		cout << i + 1 << " |";
		for (int j = 0; j < SIZE; j++)
		{
			cout << " " << game.bord[i][j] << " |";
		}
		cout << endl << "  -------------" << endl;
	}
}

void botTurn(Game* game)
{
	int row, column;

	do
	{
		row = rand() % SIZE;
		column = rand() % SIZE;
	} 
	while (game->bord[row][column] != ' ');

	game->bord[row][column] = game->botChar;
}

void userTurn(Game* game)
{
	int row, column;

	bool success;

	do
	{
		success = true;

		cout << "Введите номер строки и номер столбца через пробел: ";
		cin >> row >> column;
		if (row < 1 || row > SIZE || column < 1 || column > SIZE || game->bord[row - 1][column - 1] != ' ')
		{
			success = false;
			cout << "Некорректный ход!" << endl;
		}
	} 
	while (!success);
	
	game->bord[row - 1][column - 1] = game->userChar;
}

bool checkDiagonal(char symb, const Game game) {
	bool toright, toleft;
	toright = true;
	toleft = true;
	for (int i = 0; i < 3; i++) {
		toright &= (game.bord[i][i] == symb);
		toleft &= (game.bord[3 - i - 1][i] == symb);
	}

	if (toright || toleft) return true;

	return false;
}

bool checkLines(char symb, const Game game)
{
	bool cols, rows;
	for (int col = 0; col < 3; col++) {
		cols = true;
		rows = true;
		for (int row = 0; row < 3; row++) {
			cols &= (game.bord[col][row] == symb);
			rows &= (game.bord[row][col] == symb);
		}

		if (cols || rows) return true;
	}

	return false;
}

bool checkWin(char symb, const Game game) 
{
	if (checkDiagonal(symb, game) || checkLines(symb, game)) 
		return true;
	return false;
}

bool checkDraw(const Game game)
{
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			if (game.bord[i][j] == ' ')
				return false;
		}
	}
	return true;
}

bool updateGame(Game* game)
{
	if (checkWin(game->userChar, *game))
	{
		game->status = USER_WIN;
		return true;
	}
	else if (checkWin(game->botChar, *game))
	{
		game->status = BOT_WIN;
		return true;
	}
	else if (checkDraw(*game))
	{
		game->status = NOT_WIN;
		return true;
	}

	game->isUserTurn = !game->isUserTurn;

	return false;
}
```
3. Заголовочный файл.
```cpp
#include <iostream>
#include <ctime>
#include "tik_tak.h"
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");

    srand(time(0));

    Game g = initGame('X');
    updateDisplay(g);

    while (g.status == PLAY)
    {
        if (g.isUserTurn)
            userTurn(&g);
        else
            botTurn(&g);
        updateDisplay(g);

        bool res = updateGame(&g);
        if (res)
        {
            if (g.status == USER_WIN)
                cout << "YOU WIN!";
            else if (g.status == BOT_WIN)
                cout << "YOU LOSE!";
            else
                cout << "DRAW!";
        }
    }
}
```
#### Ввывод

в ходе лабораторной работы были получены такие навыки, как
* умение создавать многофайловые проекты.
    
    
    
    
    
    
    
    