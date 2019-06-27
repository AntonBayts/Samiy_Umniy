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
            while(m>0){
                if(player[number_player][1]<25){
                    player[number_player][1]++;
                    m--;
                }
                else break;
                otris(player,quantity_players);
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
void check(int **player, int number_player, int *Skip_stroke, char *questions[10], char *answers[10], int quantity_players)
{
    int i, j, k, p, a, f;
    char inp[80];
    if (player[number_player][1] == 4 || player[number_player][1] == 14 || player[number_player][1] == 21)
    {
        Skip_stroke[number_player]++;
        printf("                          Skip Stroke!\n");
        sleep(1.5);
        system("clear");
    }
    k=(player[number_player][1]+1)%3;
    if(k==0 && player[number_player][1]!=14){
        system("clear");
        p=player[number_player][1]/3;
        printf("%s\n",questions[p]);
        printf("Input answer:");
        fgets(inp,20,stdin);
        fgets(inp,20,stdin);
        a=strlen(inp);
        f=strlen(answers[p]);
        f=f+1;
        j=1;
        if(a==f){
            j=0;
            for(i=0;answers[p][i]!='\0';i++){
                if(inp[i]!=answers[p][i])j++;
            }
        }
        if(j==0){
            printf("Good job!\n");
            sleep(1);
            for(i=0;i<rand()%(3-1+1)+1;i++){
                if(player[number_player][1]<25){
                    player[number_player][1]++;
                    //printf("Good job!\n");
                    otris(player,quantity_players);
                    sleep(1);
                }
                else break;
            }

        }
        if(j!=0 || a!=f){
            printf("It's so bad(\n");
            sleep(1);
            for(i=0;i<rand()%(3-1+1)+1;i++){
                if(player[number_player][1]>0){
                    player[number_player][1]--;
                    //printf("Good job!\n");
                    otris(player,quantity_players);
                    sleep(1);
                }
                else break;
            }
        }
    }
}
void LogicMain(int quantity_players, char *questions[10], char *answers[10])
{
    int number_player = 1, **player, z, i, l;
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
