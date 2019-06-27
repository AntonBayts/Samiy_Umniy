#include "Game_Process.h"
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
    while (1)
    {
        printf("PLAYER'S MOVE: %d", player[number_player][0]);
        printf("                         Input 1)THROW or 2)EXIT: ");
        scanf("%d", &i);
        if (i == 1)
        {
            m = Trow_roll();
            while (m > 0)
            {
                player[number_player][1]++;
                m--;
                otris(player, quantity_players);
                sleep(1);
            }
            k = 1;
            return k;
        }
        else
        {
            if (i == 2)
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
void Сheck(int **player, int number_player, int *Skip_stroke)
{
    if (player[number_player][1] == 4 || player[number_player][1] == 14 || player[number_player][1] == 21)
    {
        Skip_stroke[number_player]++;
        printf("                          Skip Stroke!\n");
        sleep(1.5);
        system("clear");
    }
}
void LogicMain(int quantity_players)
{
    int final_location = 25, number_player = 1, **player, z, i, l, *Skip_stroke;
    number_player = WhatFirst(player, quantity_players);
    player = (int **)malloc(4 * sizeof(int *));
    for (int i = 0; i < quantity_players; i++)
    {
        player[i] = (int *)malloc(2 * sizeof(int));
    }
    for (i = 0; i < quantity_players; i++)
    {
        player[i][0] = i + 1;
        player[i][1] = 0;
    }
    Skip_stroke = (int *)malloc(quantity_players * sizeof(int));
    for (i = 0; i < quantity_players; i++)
    {
        Skip_stroke[i] = 0;
    }
    number_player = WhatFirst(quantity_players);
    while (1)
    {
        otris(player, quantity_players, number_player);
        if (Skip_stroke[number_player] == 0)
        {
            z = MovementPlayers(player, quantity_players, number_player);
        }
        if (Skip_stroke[number_player] > 0)
        {
            system("clear");
            Skip_stroke[number_player]--;
            number_player++;
            if (number_player >= quantity_players)
                number_player = 0;
            z = 3;
            system("clear");
        }
        if (z == 0)
            break;
        if (z == 1)
        {
            if (player[number_player][1] < 25)
            {
                check(player, number_player, Skip_stroke);
                number_player++;
                if (number_player >= quantity_players)
                    number_player = 0;
            }
            else
            {
                otriswin(player, quantity_players);
                while (1)
                {
                    printf("                 Enter 1 to exit the menu: ");
                    scanf("%d", &l);
                    if (l == 1)
                        break;
                    else
                        printf("                Error!\n");
                }
                break;
            }
        }
    }
}