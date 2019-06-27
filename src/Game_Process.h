#ifndef MENU_H
#define MENU_H
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <string.h>
int WhatFirst(int quantity_players);
void LogicMain(int quantity_players);
int Trow_roll();
int MovementPlayers(int **player, int quantity_players, int number_player);
void Сheck(int **player, int number_player, int *Skip_stroke);
#define