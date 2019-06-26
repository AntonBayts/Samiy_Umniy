#include <stdio.h>
#include <stdlib.h>

int Menu(int &quantityplayers) {
	int z, k;
	int f;
	while (1) {
		system("clear");
		printf(
		    " /=======/ //     //===/  //===/ // //===/ //   // //===/ "
		    "////// //===/ //==/ //\n ");
		printf(
		    "   //    //     //      //     // //      //  // //     "
		    "//   / //     //   =//=\n");
		printf(
		    "   //    //==// //==/   //     // //===/   // // //==/  "
		    "//     //==/   ///  //\n");
		printf(
		    "  //    //  // //      //     // //        //// //     // "
		    "    //        // //\n");
		printf(
		    " //    //  // //===/  //===/ // //===/     /// //===/ //  "
		    "   //===/ /==// //=/\n");
		printf("\n");
		printf("                                     1) New game \n");
		printf(
		    "                                     2) Game Description "
		    "\n");
		printf("                                     3) Exit \n");
		printf("\n");
		printf("                                     Input: ");
		scanf("%d", &z);
		if (z == 1) {
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
			printf("\n");
			printf(
			    "                 Attention before starting the "
			    "game is advised\n");
			printf(
			    "                       to read the description of "
			    "the game.\n");
			printf(
			    "			Have you read the "
			    "description?\n");
			printf(
			    "                            Input 1)Y or 2)N: ");
			scanf("%d", &f);
			if (f == 2) {
				z = 2;
			}
			if (f == 1) {
				system("clear");
				printf(
				    " /=======/ //     //===/  //===/ // "
				    "//===/ //   // //===/ ////// //===/ //==/ "
				    "//\n ");
				printf(
				    "   //    //     //      //     // //      "
				    "//  // //     //   / //     //   =//=\n");
				printf(
				    "   //    //==// //==/   //     // //===/  "
				    " // // //==/  //     //==/   ///  //\n");
				printf(
				    "  //    //  // //      //     // //       "
				    " //// //     //     //        // //\n");
				printf(
				    " //    //  // //===/  //===/ // //===/    "
				    " /// //===/ //     //===/ /==// //=/\n");
				printf("\n");
				printf(
				    "                     Enter the number of "
				    "players from 2 to 4: ");
				while (1) {
					scanf("%d", &quantityplayers);
					if (quantityplayers > 1 &&
					    quantityplayers < 5) {
						k = 1;
						return k;
					} else {
						system("clear");
						printf(
						    " /=======/ //     //===/  "
						    "//===/ // //===/ //   // "
						    "//===/ ////// //===/ "
						    "//==/ //\n ");
						printf(
						    "   //    //     //      "
						    "//     // //      //  // "
						    "//     //   / //     //   "
						    "=//=\n");
						printf(
						    "   //    //==// //==/   "
						    "//     // //===/   // // "
						    "//==/  //     //==/   /// "
						    " //\n");
						printf(
						    "  //    //  // //      // "
						    "    // //        //// //  "
						    "   //     //        // "
						    "//\n");
						printf(
						    " //    //  // //===/  "
						    "//===/ // //===/     /// "
						    "//===/ //     //===/ "
						    "/==// //=/\n");
						printf("\n");
						printf(
						    "                          "
						    "           Error!\n");
						printf(
						    "                     "
						    "Enter the number of "
						    "players from 2 to 4: ");
					}
				}
			}
		}
	}
}

