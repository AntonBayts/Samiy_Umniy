#ifndef GAME_PROCESS_H
#define GAME_PROCESS_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

int WhatFirst(int quantity_players);
void LogicMain(int quantity_players, char* questions[10], char* answers[10]);
int Trow_roll();
int MovementPlayers(int** player, int quantity_players, int number_player);
void check(
        int** player,
        int number_player,
        int* Skip_stroke,
        char* questions[10],
        char* answers[10],
        int quantity_players);
#endif
