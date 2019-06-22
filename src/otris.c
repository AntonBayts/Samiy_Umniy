#include <stdio.h>
#include <stdlib.h>
#include <iostream>

void otris(int **players, int kol) {
	int i, j;
	int A[24];
	for (i = 0; i < 24; i++) {
		A[i] = i + 1;
	}
	system("clear");
	if (kol == 4) {
		printf("       PLAYER 1                            PLAYER 2\n");
		for (i = 8; i > -1; i--) {
			printf("[%d]", A[i]);
		}
		// PLAYER 2
		printf("    ");
		for (i = 0; i < 9; i++) {
			printf("[%d]", A[i]);
		}
		// PLAYER 2
		printf("\n");
		for (i = 9; i < 10; i++) {
			printf(
			    "[%d]                                              "
			    "    [%d]\n",
			    A[i], A[i]);
		}
		printf("[%d]", A[i]);
		for (i = 11; i < 14; i++) {
			printf("[%d]", A[i]);
		}
		printf("[%d]                  [%d]", A[i], A[i]);
		// PLAYER 2
		for (i = 13; i > 9; i--) {
			printf("[%d]", A[i]);
		}
		printf("\n");
		// PLAYER 2
		for (i = 15; i < 16; i++) {
			printf("                [%d]                  [%d]\n",
			       A[i], A[i]);
		}
		printf("    ");
		for (i = 19; i > 16; i--) {
			printf("[%d]", A[i]);
		}
		printf("[%d]", A[i]);
		// PLAYER 2
		printf("                  ");
		for (i = 16; i < 20; i++) {
			printf("[%d]", A[i]);
		}
		// PLAYER 2
		printf("\n");
		for (i = 20; i < 21; i++) {
			printf(
			    "    [%d]                                          "
			    "[%d]\n",
			    A[i], A[i]);
		}
		printf("    [%d]", A[i]);
		for (i = 22; i < 24; i++) {
			printf("[%d]", A[i]);
		}
		printf("|¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯|");
		for (i = 23; i > 20; i--) {
			printf("[%d]", A[i]);
		}
		printf("\n");
		printf("                |  .........  .........  |\n");
		printf("                |          .  .          |\n");
		printf("                |          .  .          |\n");
		printf("                |  .........  .........  |\n");
		printf("                |  .                  .  |\n");
		printf("                |  .                  .  |\n");
		printf("                |  .........  .........  |\n");
		// PLAYER 3-----------------
		printf("    ");		       //         |
		for (i = 21; i < 24; i++) {    //|
			printf("[%d]", A[i]);  //|
		}			       //  |
		// PLAYER 3-----------------
		printf("|________________________|");
		// PLAYER 4--------------------
		for (i = 23; i > 20; i--) {    //        |
			printf("[%d]", A[i]);  //   |
		}			       //            |
		printf("\n");		       //              |
		// PLAYER 4--------------------
		for (i = 20; i > 19; i--) {
			printf(
			    "    [%d]                                          "
			    "[%d]\n",
			    A[i], A[i]);
		}
		// PLAYER 3---------------------
		printf("    ");		       //             |
		for (i = 19; i > 15; i--) {    //         |
			printf("[%d]", A[i]);  //    |
		}			       //                           |
		// PLAYER 3---------------------
		// PLAYER 4------------------------
		printf("                  ");  //  |
		for (i = 16; i < 20; i++) {    //            |
			printf("[%d]", A[i]);  //       |
		}			       //                              |
		printf("\n");		       //                  |
		// PLAYER 4------------------------
		for (i = 15; i > 14; i--) {
			printf("                [%d]                  [%d]\n",
			       A[i], A[i]);
		}
		// PLAYER 3---------------------
		for (i = 10; i < 15; i++) {    //         |
			printf("[%d]", A[i]);  //    |
		}			       //                           |
		// PLAYER 3---------------------
		// PLAYER 4------------------------
		printf("                  ");  //  |
		for (i = 14; i > 9; i--) {     //             |
			printf("[%d]", A[i]);  //       |
		}			       //                              |
		printf("\n");		       //                  |
		// PLAYER 4------------------------
		for (i = 9; i > 8; i--) {
			printf(
			    "[%d]                                              "
			    "    [%d]\n",
			    A[i], A[i]);
		}
		// PLAYER 3---------------------
		for (i = 8; i > -1; i--) {     //          |
			printf("[%d]", A[i]);  //    |
		}			       //                           |
		// PLAYER 3---------------------
		// PLAYER 4------------------------
		printf("    ");		       //                |
		for (i = 0; i < 9; i++) {      //              |
			printf("[%d]", A[i]);  //       |
		}			       //                              |
		printf("\n");		       //                  |
		// PLAYER 4------------------------
		printf("       PLAYER 3                            PLAYER 4\n");
	}
	if (kol == 3) {
		printf("       PLAYER 1                            PLAYER 2\n");
		for (i = 8; i > -1; i--) {
			printf("[%d]", A[i]);
		}
		// PLAYER 2
		printf("    ");
		for (i = 0; i < 9; i++) {
			printf("[%d]", A[i]);
		}
		// PLAYER 2
		printf("\n");
		for (i = 9; i < 10; i++) {
			printf(
			    "[%d]                                              "
			    "    [%d]\n",
			    A[i], A[i]);
		}
		printf("[%d]", A[i]);
		for (i = 11; i < 14; i++) {
			printf("[%d]", A[i]);
		}
		printf("[%d]                  [%d]", A[i], A[i]);
		// PLAYER 2
		for (i = 13; i > 9; i--) {
			printf("[%d]", A[i]);
		}
		printf("\n");
		// PLAYER 2
		for (i = 15; i < 16; i++) {
			printf("                [%d]                  [%d]\n",
			       A[i], A[i]);
		}
		printf("    ");
		for (i = 19; i > 16; i--) {
			printf("[%d]", A[i]);
		}
		printf("[%d]", A[i]);
		// PLAYER 2
		printf("                  ");
		for (i = 16; i < 20; i++) {
			printf("[%d]", A[i]);
		}
		// PLAYER 2
		printf("\n");
		for (i = 20; i < 21; i++) {
			printf(
			    "    [%d]                                          "
			    "[%d]\n",
			    A[i], A[i]);
		}
		printf("    [%d]", A[i]);
		for (i = 22; i < 24; i++) {
			printf("[%d]", A[i]);
		}
		printf("|¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯|");
		for (i = 23; i > 20; i--) {
			printf("[%d]", A[i]);
		}
		printf("\n");
		printf("                |  .........  .........  |\n");
		printf("                |          .  .          |\n");
		printf("                |          .  .          |\n");
		printf("                |  .........  .........  |\n");
		printf("                |  .                  .  |\n");
		printf("                |  .                  .  |\n");
		printf("                |  .........  .........  |\n");
		// PLAYER 3-----------------
		printf("    ");		       //         |
		for (i = 21; i < 24; i++) {    //|
			printf("[%d]", A[i]);  //|
		}			       //  |
		// PLAYER 3-----------------
		printf("|________________________|\n");
		for (i = 20; i > 19; i--) {
			printf("    [%d]\n", A[i]);
		}
		// PLAYER 3---------------------
		printf("    ");		       //             |
		for (i = 19; i > 15; i--) {    //         |
			printf("[%d]", A[i]);  //    |
		}			       //                           |
		// PLAYER 3---------------------
		printf("\n");
		for (i = 15; i > 14; i--) {
			printf("                [%d]\n", A[i]);
		}
		// PLAYER 3---------------------
		for (i = 10; i < 15; i++) {    //         |
			printf("[%d]", A[i]);  //    |
		}			       //                           |
		// PLAYER 3---------------------
		printf("\n");
		for (i = 9; i > 8; i--) {
			printf("[%d]\n", A[i]);
		}
		// PLAYER 3---------------------
		for (i = 8; i > -1; i--) {     //          |
			printf("[%d]", A[i]);  //    |
		}			       //                           |
		// PLAYER 3---------------------
		printf("\n");
		printf("       PLAYER 3\n");
	}
	if (kol == 2) {
		printf("       PLAYER 1                            PLAYER 2\n");
		for (i = 8; i > -1; i--) {
			printf("[%d]", A[i]);
		}
		// PLAYER 2
		printf("    ");
		for (i = 0; i < 9; i++) {
			printf("[%d]", A[i]);
		}
		// PLAYER 2
		printf("\n");
		for (i = 9; i < 10; i++) {
			printf(
			    "[%d]                                              "
			    "    [%d]\n",
			    A[i], A[i]);
		}
		printf("[%d]", A[i]);
		for (i = 11; i < 14; i++) {
			printf("[%d]", A[i]);
		}
		printf("[%d]                  [%d]", A[i], A[i]);
		// PLAYER 2
		for (i = 13; i > 9; i--) {
			printf("[%d]", A[i]);
		}
		printf("\n");
		// PLAYER 2
		for (i = 15; i < 16; i++) {
			printf("                [%d]                  [%d]\n",
			       A[i], A[i]);
		}
		printf("    ");
		for (i = 19; i > 16; i--) {
			printf("[%d]", A[i]);
		}
		printf("[%d]", A[i]);
		// PLAYER 2
		printf("                  ");
		for (i = 16; i < 20; i++) {
			printf("[%d]", A[i]);
		}
		// PLAYER 2
		printf("\n");
		for (i = 20; i < 21; i++) {
			printf(
			    "    [%d]                                          "
			    "[%d]\n",
			    A[i], A[i]);
		}
		printf("    [%d]", A[i]);
		for (i = 22; i < 24; i++) {
			printf("[%d]", A[i]);
		}
		printf("|¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯|");
		for (i = 23; i > 20; i--) {
			printf("[%d]", A[i]);
		}
		printf("\n");
		printf("                |  .........  .........  |\n");
		printf("                |          .  .          |\n");
		printf("                |          .  .          |\n");
		printf("                |  .........  .........  |\n");
		printf("                |  .                  .  |\n");
		printf("                |  .                  .  |\n");
		printf("                |  .........  .........  |\n");
		printf("		|________________________|\n");
	}
}
