#include Game_Process.h
void LogicMain(int quantity_players)
{
    int final_location = 25, board[25];
    FillBoard();
    AddPlayers(quantity_players);
    WhatFirst(player, quantity_players);
    while (player[nickname][1] < final_loacation) //заменить никнейм на правильное поле
    {
        MovementPlayers(player, board, quantity_players);
    }
    GameOver(player);
}
void FillBoard()
{
    for (int i = 0, i < 25, i++)
    {
        board[i] = i++;
    }
}
void AddPlayers()
{
    player = (int **)malloc(5 * sizeof(int *));
    for (int i = 0; i < QuantityPlayers; i++)
    {
        player[i] = (int *)malloc(3 * sizeof(int));
        for (int j = 0; j < 2; j++)
        {
            player[i][0] = i++;
            player[i][1] = 0;
        };
    };
}