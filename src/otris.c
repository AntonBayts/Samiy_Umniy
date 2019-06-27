#include "otris.h"
extern int quantity_players;

void otriswin(int **player, int quantity_players) {
	int i;
	for (i = 0; i < quantity_players; i++) {
		if (player[i][1] >= 25 && i == 0) {
			system("clear");
			printf(
			    " /=======/ //     //===/  //===/ // //===/ //   "
			    "// //===/ ////// //===/ //==/ //\n ");
			printf(
			    "   //    //     //      //     // //      //  // "
			    "//     //   / //     //   =//=\n");
			printf(
			    "   //    //==// //==/   //     // //===/   // // "
			    "//==/  //     //==/   ///  //\n");
			printf(
			    "  //    //  // //      //     // //        //// "
			    "//     //     //        // //\n");
			printf(
			    " //    //  // //===/  //===/ // //===/     /// "
			    "//===/ //     //===/ /==// //=/\n");
			printf(
			    "                                                  "
			    "                                                  "
			    "\n");
			printf(
			    "      /======// //        ////    //   // //===/ "
			    "//////     /==|\n");
			printf(
			    "     //     // //        //  //    // // //     "
			    "//   /     // ||\n");
			printf(
			    "    //=====// //        //    //    /// //===/ // "
			    "            ||\n");
			printf(
			    "   //        //     // //======//   // //     //  "
			    "            ||\n");
			printf(
			    "  //        //=====// //        // // //===/ //   "
			    "         |======|\n");
		}
		if (player[i][1] >= 25 && i == 1) {
			system("clear");
			printf(
			    " /=======/ //     //===/  //===/ // //===/ //   "
			    "// //===/ ////// //===/ //==/ //\n ");
			printf(
			    "   //    //     //      //     // //      //  // "
			    "//     //   / //     //   =//=\n");
			printf(
			    "   //    //==// //==/   //     // //===/   // // "
			    "//==/  //     //==/   ///  //\n");
			printf(
			    "  //    //  // //      //     // //        //// "
			    "//     //     //        // //\n");
			printf(
			    " //    //  // //===/  //===/ // //===/     /// "
			    "//===/ //     //===/ /==// //=/\n");
			printf(
			    "                                                  "
			    "                                                  "
			    "\n");
			printf(
			    "      /======// //        ////    //   // //===/ "
			    "//////      //===//\n");
			printf(
			    "     //     // //        //  //    // // //     "
			    "//   /     //   //  \n");
			printf(
			    "    //=====// //        //    //    /// //===/ // "
			    "            //   \n");
			printf(
			    "   //        //     // //======//   // //     //  "
			    "          //      \n");
			printf(
			    "  //        //=====// //        // // //===/ //   "
			    "        //=====|         \n");
		}
		if (player[i][1] >= 25 && i == 2) {
			system("clear");
			printf(
			    " /=======/ //     //===/  //===/ // //===/ //   "
			    "// //===/ ////// //===/ //==/ //\n ");
			printf(
			    "   //    //     //      //     // //      //  // "
			    "//     //   / //     //   =//=\n");
			printf(
			    "   //    //==// //==/   //     // //===/   // // "
			    "//==/  //     //==/   ///  //\n");
			printf(
			    "  //    //  // //      //     // //        //// "
			    "//     //     //        // //\n");
			printf(
			    " //    //  // //===/  //===/ // //===/     /// "
			    "//===/ //     //===/ /==// //=/\n");
			printf(
			    "                                                  "
			    "                                                  "
			    "\n");
			printf(
			    "      /======// //        ////    //   // //===/ "
			    "//////      //====//\n");
			printf(
			    "     //     // //        //  //    // // //     "
			    "//   /     //    //  \n");
			printf(
			    "    //=====// //        //    //    /// //===/ // "
			    "             //   \n");
			printf(
			    "   //        //     // //======//   // //     //  "
			    "        //    //   \n");
			printf(
			    "  //        //=====// //        // // //===/ //   "
			    "         //====// \n");
		}
		if (player[i][1] >= 25 && i == 3) {
			system("clear");
			printf(
			    " /=======/ //     //===/  //===/ // //===/ //   "
			    "// //===/ ////// //===/ //==/ //\n ");
			printf(
			    "   //    //     //      //     // //      //  // "
			    "//     //   / //     //   =//=\n");
			printf(
			    "   //    //==// //==/   //     // //===/   // // "
			    "//==/  //     //==/   ///  //\n");
			printf(
			    "  //    //  // //      //     // //        //// "
			    "//     //     //        // //\n");
			printf(
			    " //    //  // //===/  //===/ // //===/     /// "
			    "//===/ //     //===/ /==// //=/\n");
			printf(
			    "                                                  "
			    "                                                  "
			    "\n");
			printf(
			    "      /======// //        ////    //   // //===/ "
			    "//////      //     //\n");
			printf(
			    "     //     // //        //  //    // // //     "
			    "//   /      //     //  \n");
			printf(
			    "    //=====// //        //    //    /// //===/ // "
			    "         //=====//   \n");
			printf(
			    "   //        //     // //======//   // //     //  "
			    "               // \n");
			printf(
			    "  //        //=====// //        // // //===/ //   "
			    "              //  \n");
		}
	}
}

void otris(int **player, int quantity_players) {
	int i, j;
	int **A;
	A = (int **)malloc(quantity_players * sizeof(int *));
	for (i = 0; i < quantity_players; i++) {
		A[i] = (int *)malloc(24 * sizeof(int));
	}
	for (i = 0; i < quantity_players; i++) {
		for (j = 0; j < 24; j++) {
			A[i][j] = j + 1;
		}
	}
	for (i = 0; i < quantity_players; i++) {
		A[i][player[i][1]] = 0;
	}
	system("clear");
	if (quantity_players == 4) {
		system("clear");
		printf("       PLAYER 1                            PLAYER 2\n");
		for (i = 8; i > -1; i--) {
			printf("[%d]", A[0][i]);
		}
		// PLAYER 2
		printf("    ");
		for (i = 0; i < 9; i++) {
			printf("[%d]", A[1][i]);
		}
		// PLAYER 2
		printf("\n");
		for (i = 9; i < 10; i++) {
			printf(
			    "[%d]                                              "
			    "    [%d]\n",
			    A[0][i], A[1][i]);
		}
		printf("[%d]", A[0][i]);
		for (i = 11; i < 14; i++) {
			printf("[%d]", A[0][i]);
		}
		printf("[%d]                  [%d]", A[0][i], A[1][i]);
		// PLAYER 2
		for (i = 13; i > 9; i--) {
			printf("[%d]", A[1][i]);
		}
		printf("\n");
		// PLAYER 2
		for (i = 15; i < 16; i++) {
			printf("                [%d]                  [%d]\n",
			       A[0][i], A[1][i]);
		}
		printf("    ");
		for (i = 19; i > 16; i--) {
			printf("[%d]", A[0][i]);
		}
		printf("[%d]", A[0][i]);
		// PLAYER 2
		printf("                  ");
		for (i = 16; i < 20; i++) {
			printf("[%d]", A[1][i]);
		}
		// PLAYER 2
		printf("\n");
		for (i = 20; i < 21; i++) {
			printf(
			    "    [%d]                                          "
			    "[%d]\n",
			    A[0][i], A[1][i]);
		}
		printf("    [%d]", A[0][i]);
		for (i = 22; i < 24; i++) {
			printf("[%d]", A[0][i]);
		}
		printf("|¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯|");
		for (i = 23; i > 20; i--) {
			printf("[%d]", A[1][i]);
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
		printf("    ");			  //         |
		for (i = 21; i < 24; i++) {       //|
			printf("[%d]", A[2][i]);  //|
		}				  //  |
		// PLAYER 3-----------------
		printf("|________________________|");
		// PLAYER 4--------------------
		for (i = 23; i > 20; i--) {       //        |
			printf("[%d]", A[3][i]);  //   |
		}				  //            |
		printf("\n");			  //              |
		// PLAYER 4--------------------
		for (i = 20; i > 19; i--) {
			printf(
			    "    [%d]                                          "
			    "[%d]\n",
			    A[2][i], A[3][i]);
		}
		// PLAYER 3---------------------
		printf("    ");			  //             |
		for (i = 19; i > 15; i--) {       //         |
			printf("[%d]", A[2][i]);  //    |
		}				  //                           |
		// PLAYER 3---------------------
		// PLAYER 4------------------------
		printf("                  ");     //  |
		for (i = 16; i < 20; i++) {       //            |
			printf("[%d]", A[3][i]);  //       |
		}	      //                              |
		printf("\n");  //                  |
		// PLAYER 4------------------------
		for (i = 15; i > 14; i--) {
			printf("                [%d]                  [%d]\n",
			       A[2][i], A[3][i]);
		}
		// PLAYER 3---------------------
		for (i = 10; i < 15; i++) {       //         |
			printf("[%d]", A[2][i]);  //    |
		}				  //                           |
		// PLAYER 3---------------------
		// PLAYER 4------------------------
		printf("                  ");     //  |
		for (i = 14; i > 9; i--) {	//             |
			printf("[%d]", A[3][i]);  //       |
		}	      //                              |
		printf("\n");  //                  |
		// PLAYER 4------------------------
		for (i = 9; i > 8; i--) {
			printf(
			    "[%d]                                              "
			    "    [%d]\n",
			    A[2][i], A[3][i]);
		}
		// PLAYER 3---------------------
		for (i = 8; i > -1; i--) {	//          |
			printf("[%d]", A[2][i]);  //    |
		}				  //                           |
		// PLAYER 3---------------------
		// PLAYER 4------------------------
		printf("    ");			  //                |
		for (i = 0; i < 9; i++) {	 //              |
			printf("[%d]", A[3][i]);  //       |
		}	      //                              |
		printf("\n");  //                  |
		// PLAYER 4------------------------
		printf("       PLAYER 3                            PLAYER 4\n");
	}
	if (quantity_players == 3) {
		printf("       PLAYER 1                            PLAYER 2\n");
		for (i = 8; i > -1; i--) {
			printf("[%d]", A[0][i]);
		}
		// PLAYER 2
		printf("    ");
		for (i = 0; i < 9; i++) {
			printf("[%d]", A[1][i]);
		}
		// PLAYER 2
		printf("\n");
		for (i = 9; i < 10; i++) {
			printf(
			    "[%d]                                              "
			    "    [%d]\n",
			    A[0][i], A[1][i]);
		}
		printf("[%d]", A[0][i]);
		for (i = 11; i < 14; i++) {
			printf("[%d]", A[0][i]);
		}
		printf("[%d]                  [%d]", A[0][i], A[1][i]);
		// PLAYER 2
		for (i = 13; i > 9; i--) {
			printf("[%d]", A[1][i]);
		}
		printf("\n");
		// PLAYER 2
		for (i = 15; i < 16; i++) {
			printf("                [%d]                  [%d]\n",
			       A[0][i], A[1][i]);
		}
		printf("    ");
		for (i = 19; i > 16; i--) {
			printf("[%d]", A[0][i]);
		}
		printf("[%d]", A[0][i]);
		// PLAYER 2
		printf("                  ");
		for (i = 16; i < 20; i++) {
			printf("[%d]", A[1][i]);
		}
		// PLAYER 2
		printf("\n");
		for (i = 20; i < 21; i++) {
			printf(
			    "    [%d]                                          "
			    "[%d]\n",
			    A[0][i], A[1][i]);
		}
		printf("    [%d]", A[0][i]);
		for (i = 22; i < 24; i++) {
			printf("[%d]", A[0][i]);
		}
		printf("|¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯|");
		for (i = 23; i > 20; i--) {
			printf("[%d]", A[1][i]);
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
		printf("    ");			  //         |
		for (i = 21; i < 24; i++) {       //|
			printf("[%d]", A[2][i]);  //|
		}				  //  |
		// PLAYER 3-----------------
		printf("|________________________|\n");
		for (i = 20; i > 19; i--) {
			printf("    [%d]\n", A[2][i]);
		}
		// PLAYER 3---------------------
		printf("    ");			  //             |
		for (i = 19; i > 15; i--) {       //         |
			printf("[%d]", A[2][i]);  //    |
		}				  //                           |
		// PLAYER 3---------------------
		printf("\n");
		for (i = 15; i > 14; i--) {
			printf("                [%d]\n", A[2][i]);
		}
		// PLAYER 3---------------------
		for (i = 10; i < 15; i++) {       //         |
			printf("[%d]", A[2][i]);  //    |
		}				  //                           |
		// PLAYER 3---------------------
		printf("\n");
		for (i = 9; i > 8; i--) {
			printf("[%d]\n", A[2][i]);
		}
		// PLAYER 3---------------------
		for (i = 8; i > -1; i--) {	//          |
			printf("[%d]", A[2][i]);  //    |
		}				  //                           |
		// PLAYER 3---------------------
		printf("\n");
		printf("       PLAYER 3\n");
	}
	if (quantity_players == 2) {
		printf("       PLAYER 1                            PLAYER 2\n");
		for (i = 8; i > -1; i--) {
			printf("[%d]", A[0][i]);
		}
		// PLAYER 2
		printf("    ");
		for (i = 0; i < 9; i++) {
			printf("[%d]", A[1][i]);
		}
		// PLAYER 2
		printf("\n");
		for (i = 9; i < 10; i++) {
			printf(
			    "[%d]                                              "
			    "    [%d]\n",
			    A[0][i], A[1][i]);
		}
		printf("[%d]", A[0][i]);
		for (i = 11; i < 14; i++) {
			printf("[%d]", A[0][i]);
		}
		printf("[%d]                  [%d]", A[0][i], A[1][i]);
		// PLAYER 2
		for (i = 13; i > 9; i--) {
			printf("[%d]", A[1][i]);
		}
		printf("\n");
		// PLAYER 2
		for (i = 15; i < 16; i++) {
			printf("                [%d]                  [%d]\n",
			       A[0][i], A[1][i]);
		}
		printf("    ");
		for (i = 19; i > 16; i--) {
			printf("[%d]", A[0][i]);
		}
		printf("[%d]", A[0][i]);
		// PLAYER 2
		printf("                  ");
		for (i = 16; i < 20; i++) {
			printf("[%d]", A[1][i]);
		}
		// PLAYER 2
		printf("\n");
		for (i = 20; i < 21; i++) {
			printf(
			    "    [%d]                                          "
			    "[%d]\n",
			    A[0][i], A[1][i]);
		}
		printf("    [%d]", A[0][i]);
		for (i = 22; i < 24; i++) {
			printf("[%d]", A[0][i]);
		}
		printf("|¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯|");
		for (i = 23; i > 20; i--) {
			printf("[%d]", A[1][i]);
		}
		printf("\n");
		printf("                |  .........  .........  |\n");
		printf("                |          .  .          |\n");
		printf("                |          .  .          |\n");
		printf("                |  .........  .........  |\n");
		printf("                |  .                  .  |\n");
		printf("                |  .                  .  |\n");
		printf("                |  .........  .........  |\n");
		printf("                |________________________|\n");
	}
}
