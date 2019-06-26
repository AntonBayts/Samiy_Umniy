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
    int k, i, m, l;
    while (1)
    {
        printf(" Input THROW or EXIT: ");
        scanf("%c", &i);
        if (i == 0)
        {
            m = Trow_roll();
            player[number_player][1] = player[number_player][1] + m;
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
void LogicMain(int quantity_players)
{
    int final_location = 25, number_player = 1, **player, z, i, l;
    number_player = WhatFirst(player, quantity_players);
    player = (int **)malloc(4 * sizeof(int *)); //Ð¼Ð°ÑÑÐ¸Ð² Ð¸ Ñ‚Ð°Ð¼ Ð¸ Ñ‚Ð°Ð¼ ÑƒÐ¼ÐµÐ½ÑŒÑˆÐ¸Ñ‚ÑŒ Ð½Ð° ÐµÐ´Ð¸Ð½Ð¸Ñ†Ñƒ
    for (int i = 0; i < quantity_players; i++)
    {
        player[i] = (int *)malloc(2 * sizeof(int));
    }
    for (i = 0; i < quantity_players; i++)
    {
        player[i][0] = i + 1;
        player[i][1] = 0;
    }
    number_player = WhatFirst(quantity_players);
    while (1)
    {
        otris(player, quantity_players, number_player);
        z = MovementPlayers(player, quantity_players, number_player);
        if (z == 0)
            break;
        if (z == 1)
        {
            if (player[number_player][1] < 25)
            {
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