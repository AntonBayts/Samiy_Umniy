#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Game_Process.h"
#include "Menu.h"
#include "otris.h"

int main() {
	int quantity_players = 0, x, i;
	char *questions[10], *answers[10];
	while (1) {
		x = Menu(quantity_players);
		if (x == 0) return 0;
		if (x == 1) LogicMain(quantity_players, questions, answers);
	}
}
