#include "Game_Process.h"
void AddPlayers(int quantity_players, int **player)
{
    player = (int **)malloc(5 * sizeof(int *));
    for (int i = 0; i < quantity_players; i++)
    {
        player[i] = (int *)malloc(3 * sizeof(int));
        for (int j = 0; j < 2; j++)
        {
            player[i][0] = i++;
            player[i][1] = 0;
        };
    };
}
int WhatFirst(int quantity_players)
{
    int k;
    srand(time(NULL));
    quantity_players--;
    k = rand() % (quantity_players - 0 + 1) + 0;
    return k;
}
void LogicMain(int quantity_players)
{
    int final_location = 25, number_player = 0, **player;
    AddPlayers(quantity_players);
    number_player = WhatFirst(player, quantity_players);
    while (player[number_player][1] <= final_location)
    {
        MovementPlayers(player, quantity_players, number_player);
        number_player++;
    }
    number_player--;
    GameOver(number_player);
}