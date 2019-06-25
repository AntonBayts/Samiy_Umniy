#include "Game_Process.h"
int **player;// будет удалено после добавления меню
void FillBoard(int board[])
{
    for (int i = 0; i < 25; i++)
    {
        board[i] = i++;
    }
}
void AddPlayers(int quantity_players)
{
    player = (int **)malloc(5 * sizeof(int *));//массив и там и там уменьшить на единицу
    for (int i = 0; i < 4/*quantity_players*/; i++)//заменить четыре на кол-во игроков
    {
        player[i] = (int *)malloc(3 * sizeof(int));
        for (int j = 0; j < 2; j++)
        {
            player[i][0] = i++;
            player[i][1] = 0;
        };
    };
}
void LogicMain(int quantity_players)
{
    int final_location = 25, board[25],number_player=0;
    FillBoard(board);
    AddPlayers(quantity_players);
    number_player=WhatFirst(player, quantity_players);
    while (player[number_player][1] <= final_location) //Р·Р°РјРµРЅРёС‚СЊ РЅРёРєРЅРµР№Рј РЅР° РїСЂР°РІРёР»СЊРЅРѕРµ РїРѕР»Рµ
    {
        MovementPlayers(player, board, quantity_players,number_player);
        number_player++;
    }
    number_player--;
    GameOver(number_player);
}
