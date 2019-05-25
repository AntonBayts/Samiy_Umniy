#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void LogicMain(int);
void FillBoard();
void PrintBoard();
void AddPlayers(int **);
void PrintPlayers(); //для проверки массива игроков в дальнейшем будет удалено
void WhatFirst();    //возможно сделать инт с ретерном на итое которое номер игрока для мувемента
void RollDice();
void MovementPlayers();
void GameOver();