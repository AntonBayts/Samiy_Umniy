#include "Game_Process.h"
int **player; // ����� ������� ����� ���������� ����
void FillBoard(int board[])
{
    for (int i = 0; i < 25; i++)
    {
        board[i] = i++;
    }
}
void AddPlayers(int quantity_players)
{
    player = (int **)malloc(5 * sizeof(int *));      //������ � ��� � ��� ��������� �� �������
    for (int i = 0; i < 4 /*quantity_players*/; i++) //�������� ������ �� ���-�� �������
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
    int final_location = 25, board[25], number_player = 0;
    FillBoard(board);
    AddPlayers(quantity_players);
    number_player = WhatFirst(player, quantity_players);
    while (player[number_player][1] <= final_location) //заменить никнейм на правильное поле
    {
        MovementPlayers(player, board, quantity_players, number_player);
        number_player++;
    }
    number_player--;
    GameOver(number_player);
}
