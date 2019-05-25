#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void LogicMain(int);
void FillBoard();
void PrintBoard();
void AddPlayers(int);
void PrintPlayers(int **);   //для проверки массива игроков в дальнейшем будет удалено
void WhatFirst(int **, int); //возможно сделать инт с ретерном на итое которое номер игрока для мувемента
void RollDice();
void MovementPlayers(int **, int *, int);
void GameOver(int **);