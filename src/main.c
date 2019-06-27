#include "Game_Process.h"
#include "menu.h"
#include "otris.h"
#include <stdio.h>
#include <stdlib.h>

int meny();
int quantity_players;

int main()
{
    int x, i;
    char *questions[10], *answers[10];
    for (i = 0; i < 10; i++) {
        if (i == 0) {
            questions[i] = (char*)malloc(
                    strlen("Nguyen is the most common last name in "
                           "which country?")
                    * sizeof(char));
            strcpy(questions[i],
                   "Nguyen is the most common last name in which "
                   "country?");
            answers[i] = (char*)malloc(strlen("Vietnam") * sizeof(char));
            strcpy(answers[i], "Vietnam");
        }
        if (i == 1) {
            questions[i] = (char*)malloc(
                    strlen("What is the name of the political leader "
                           "of Mexico?")
                    * sizeof(char));
            strcpy(questions[i],
                   "What is the name of the political leader of "
                   "Mexico?");
            answers[i] = (char*)malloc(strlen("The president") * sizeof(char));
            strcpy(answers[i], "The president");
        }
        if (i == 2) {
            questions[i] = (char*)malloc(
                    strlen("What sport is Chris Evert-Lloyd famous for?")
                    * sizeof(char));
            strcpy(questions[i], "What sport is Chris Evert-Lloyd famous for?");
            answers[i] = (char*)malloc(strlen("Tennis") * sizeof(char));
            strcpy(answers[i], "Tennis");
        }
        if (i == 3) {
            questions[i] = (char*)malloc(
                    strlen("What totalitarian leader did the followers "
                           "call Il Duce?")
                    * sizeof(char));
            strcpy(questions[i],
                   "What totalitarian leader did the followers "
                   "call Il Duce?");
            answers[i]
                    = (char*)malloc(strlen("Benito mussolini") * sizeof(char));
            strcpy(answers[i], "Benito mussolini");
        }
        if (i == 4) {
            questions[i] = (char*)malloc(
                    strlen("Tuba - the largest representative of a "
                           "group of musical instruments?")
                    * sizeof(char));
            strcpy(questions[i],
                   "Tuba - the largest representative of a group "
                   "of musical instruments?");
            answers[i] = (char*)malloc(strlen("Brass") * sizeof(char));
            strcpy(answers[i], "Brass");
        }
        if (i == 5) {
            questions[i] = (char*)malloc(
                    strlen("What young girl helped to oust the British "
                           "from the French land in the 15th century?")
                    * sizeof(char));
            strcpy(questions[i],
                   "What young girl helped to oust the British "
                   "from the French land in the 15th century?");
            answers[i] = (char*)malloc(strlen("Joan of Arc") * sizeof(char));
            strcpy(answers[i], "Joan of Arc");
        }
        if (i == 6) {
            questions[i] = (char*)malloc(
                    strlen("What famous fairy tale character could "
                           "turn straw into gold?")
                    * sizeof(char));
            strcpy(questions[i],
                   "What famous fairy tale character could turn "
                   "straw into gold?");
            answers[i]
                    = (char*)malloc(strlen("Rumpleshtiltshen") * sizeof(char));
            strcpy(answers[i], "Rumpleshtiltshen");
        }
        if (i == 8) {
            questions[i] = (char*)malloc(
                    strlen("Jakarta is the capital of which country?")
                    * sizeof(char));
            strcpy(questions[i], "Jakarta is the capital of which country?");
            answers[i] = (char*)malloc(strlen("Indonesia") * sizeof(char));
            strcpy(answers[i], "Indonesia");
        }
        if (i == 7) {
            questions[i] = (char*)malloc(
                    strlen("What does DOS mean in computer science?")
                    * sizeof(char));
            strcpy(questions[i], "What does DOS mean in computer science?");
            answers[i] = (char*)malloc(
                    strlen("Disc Operating System") * sizeof(char));
            strcpy(answers[i], "Disc Operating System");
        }
        if (i == 9) {
            questions[i] = (char*)malloc(
                    strlen("Which continent is covered in ice?")
                    * sizeof(char));
            strcpy(questions[i], "Which continent is covered in ice?");
            answers[i] = (char*)malloc(strlen("Antarctica") * sizeof(char));
            strcpy(answers[i], "Antarctica");
        }
    }
    while (1) {
        quantity_players = 0;
        x = meny(quantity_players);
        printf("%d", x);
        if (x == 0)
            return 0;
        if (x == 1)
            LogicMain(quantity_players, questions, answers);
    }
}
