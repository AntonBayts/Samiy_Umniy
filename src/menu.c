#include <stdio.h>
#include <stdlib.h> 

int Menu(int &quantityplayers){
	int z, k;
	int f;
	while(1){
		system("clear");
		printf(" /=======/ //     //===/  //===/ // //===/ //   // //===/ ////// //===/ //==/ //\n ");
		printf("   //    //     //      //     // //      //  // //     //   / //     //   =//=\n");
		printf("   //    //==// //==/   //     // //===/   // // //==/  //     //==/   ///  //\n");
		printf("  //    //  // //      //     // //        //// //     //     //        // //\n");
		printf(" //    //  // //===/  //===/ // //===/     /// //===/ //     //===/ /==// //=/\n");
		printf("\n");
		printf("                                     1) New game \n");
		printf("                                     2) Game Description \n");
		printf("                                     3) Exit \n");
		printf("\n");
		printf("                                     Input: ");
		scanf("%d",&z);
		if(z==1){
			system("clear");
			printf(" /=======/ //     //===/  //===/ // //===/ //   // //===/ ////// //===/ //==/ //\n ");
			printf("   //    //     //      //     // //      //  // //     //   / //     //   =//=\n");
			printf("   //    //==// //==/   //     // //===/   // // //==/  //     //==/   ///  //\n");
			printf("  //    //  // //      //     // //        //// //     //     //        // //\n");
			printf(" //    //  // //===/  //===/ // //===/     /// //===/ //     //===/ /==// //=/\n");
			printf("\n");
			printf("                 Attention before starting the game is advised\n");
			printf("                       to read the description of the game.\n");
			printf("			Have you read the description?\n");
			printf("                            Input 1)Y or 2)N: ");
			scanf("%d", &f);
			while(f!=1 && f!=2){
				system("clear");
				printf(" /=======/ //     //===/  //===/ // //===/ //   // //===/ ////// //===/ //==/ //\n ");
				printf("   //    //     //      //     // //      //  // //     //   / //     //   =//=\n");
				printf("   //    //==// //==/   //     // //===/   // // //==/  //     //==/   ///  //\n");
				printf("  //    //  // //      //     // //        //// //     //     //        // //\n");
				printf(" //    //  // //===/  //===/ // //===/     /// //===/ //     //===/ /==// //=/\n");
				printf("\n");
				printf("                 Attention before starting the game is advised\n");
				printf("                       to read the description of the game.\n");
				printf("                         	    Error!\n");
				printf("			Have you read the description?\n");
				printf("                            Input 1)Y or 2)N: ");
				scanf("%d", &f);
			}
			if(f==2){
				z=2;
			}
			if(f==1){
				system("clear");
				printf(" /=======/ //     //===/  //===/ // //===/ //   // //===/ ////// //===/ //==/ //\n ");
				printf("   //    //     //      //     // //      //  // //     //   / //     //   =//=\n");
				printf("   //    //==// //==/   //     // //===/   // // //==/  //     //==/   ///  //\n");
				printf("  //    //  // //      //     // //        //// //     //     //        // //\n");
				printf(" //    //  // //===/  //===/ // //===/     /// //===/ //     //===/ /==// //=/\n");
				printf("\n");
				printf("                     Enter the number of players from 2 to 4: ");
				while(1){
					scanf("%d", &quantityplayers);
					if(quantityplayers>1 && quantityplayers<5){
						k=1;
						return k;
					}
					else{
						system("clear");
						printf(" /=======/ //     //===/  //===/ // //===/ //   // //===/ ////// //===/ //==/ //\n ");
						printf("   //    //     //      //     // //      //  // //     //   / //     //   =//=\n");
						printf("   //    //==// //==/   //     // //===/   // // //==/  //     //==/   ///  //\n");
						printf("  //    //  // //      //     // //        //// //     //     //        // //\n");
						printf(" //    //  // //===/  //===/ // //===/     /// //===/ //     //===/ /==// //=/\n");
						printf("\n");
						printf("                                     Error!\n");
						printf("                     Enter the number of players from 2 to 4: ");
					}
				}
			}
		}
		if(z==2){
			f=2;
			while(1){
				if(f==2){
					system("clear");
					printf(" /=======/ //     //===/  //===/ // //===/ //   // //===/ ////// //===/ //==/ //\n ");
					printf("   //    //     //      //     // //      //  // //     //   / //     //   =//=\n");
					printf("   //    //==// //==/   //     // //===/   // // //==/  //     //==/   ///  //\n");
					printf("  //    //  // //      //     // //        //// //     //     //        // //\n");
					printf(" //    //  // //===/  //===/ // //===/     /// //===/ //     //===/ /==// //=/\n");
					printf("\n");
					printf("                           Game <<The Cleverest>>!\n");
					printf("This is an ordinary Board game where you have to reach the end of\n");
					printf("the playing field. But it's not so simple, you will be asked questions \n");
					printf("that you have to answer. This can help you, but also throw you back \n");
					printf("from the goal: to prove that you are the smartest! Well, young geeks, let's go!\n");
					printf("                                ATTENTION!\n");
					printf("Note: Players need to decide in advance who will be what player, first,\n");
					printf("second, and so on. The designation of a player on the field is zero [0].\n");
					printf("                              Are you done?\n");
					printf("                            Input 1)Y or 2)N: ");
				}
				scanf("%d", &f);
				while(f!=1 && f!=2){				
					system("clear");
					printf(" /=======/ //     //===/  //===/ // //===/ //   // //===/ ////// //===/ //==/ //\n ");
					printf("   //    //     //      //     // //      //  // //     //   / //     //   =//=\n");
					printf("   //    //==// //==/   //     // //===/   // // //==/  //     //==/   ///  //\n");
					printf("  //    //  // //      //     // //        //// //     //     //        // //\n");
					printf(" //    //  // //===/  //===/ // //===/     /// //===/ //     //===/ /==// //=/\n");
					printf("\n");
					printf("                           Game <<The Cleverest>>!\n");
					printf("This is an ordinary Board game where you have to reach the end of\n");
					printf("the playing field. But it's not so simple, you will be asked questions \n");
					printf("that you have to answer. This can help you, but also throw you back \n");
					printf("from the goal: to prove that you are the smartest! Well, young geeks, let's go!\n");
					printf("                                ATTENTION!\n");
					printf("Note: Players need to decide in advance who will be what player, first,\n");
					printf("second, and so on. The designation of a player on the field is zero [0].\n");
					printf("				  Error!\n");
					printf("                              Are you done?\n");
					printf("                            Input 1)Y or 2)N: ");
					scanf("%d", &f);
				}
			if(f==1) break;
			}
		}
		if(z==3){
				system("clear");
				printf(" /=======/ //     //===/  //===/ // //===/ //   // //===/ ////// //===/ //==/ //\n ");
				printf("   //    //     //      //     // //      //  // //     //   / //     //   =//=\n");
				printf("   //    //==// //==/   //     // //===/   // // //==/  //     //==/   ///  //\n");
				printf("  //    //  // //      //     // //        //// //     //     //        // //\n");
				printf(" //    //  // //===/  //===/ // //===/     /// //===/ //     //===/ /==// //=/\n");
				printf("\n");
				printf("                         Do you really want to leave?\n");
				printf("                            Input 1)Y or 2)N: ");
				scanf("%d", &f);
			while(f!=1 && f!=2){				
				system("clear");
				printf(" /=======/ //     //===/  //===/ // //===/ //   // //===/ ////// //===/ //==/ //\n ");
				printf("   //    //     //      //     // //      //  // //     //   / //     //   =//=\n");
				printf("   //    //==// //==/   //     // //===/   // // //==/  //     //==/   ///  //\n");
				printf("  //    //  // //      //     // //        //// //     //     //        // //\n");
				printf(" //    //  // //===/  //===/ // //===/     /// //===/ //     //===/ /==// //=/\n");
				printf("\n");
				printf("                                   Error!\n");
				printf("                         Do you really want to leave?\n");
				printf("                            Input 1)Y or 2)N: ");
				scanf("%d", &f);
			}
			if(f==1){
				k=0;
				return k;
			}
		}
	}
}


