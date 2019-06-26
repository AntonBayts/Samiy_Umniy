#include "Game_Process.h"
void AddPlayers(int quantity_players, int **player)
{
    player = (int **)malloc(4 * sizeof(int *));
    for (int i = 0; i < quantity_players; i++)
    {
        player[i] = (int *)malloc(2 * sizeof(int));
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
int Trow_roll()
{
    int k;
    srand(time(NULL));
    k = rand() % (6 - 1 + 1) + 1;
    return k;
}
int MovementPlayers(int **player, int quantity_players, int number_player)
{
    int k, i, m;
    const char bros[] = "THROW", ex[] = "EXIT";
    char inp[80];
    while (1)
    {
        printf(" Input THROW or EXIT: ");
        scanf("%c", &inp[80]);
        i = strcmp(bros, inp);
        if (i == 0)
        {
            m = Trow_roll();
            player[number_player][1] = player[number_player][1] + m;
            k = 1;
            return k;
        }
        else
        {
            i = strcmp(ex, inp);
            if (i == 0)
            {
                k = 0;
                return k;
            }
            else
            {
                printf("       Error!\n");
            }
        }
    }
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