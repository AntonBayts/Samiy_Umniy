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