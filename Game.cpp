#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <string.h>

main ()
{
	int nv,ne,cp=0,brk=0,r,cc,c10=1,brk2=0,score=0,as,cs=1000;
	char mot[100];

	do{
	
		do{
			system ("color 5");

			printf ("\t\t\t      _                   _                              \n");							  
			printf ("\t\t\t     | |                 (_)                             \n");	
			printf ("\t\t\t  ___| | __ _  ___  _   _ _    __ _  __ _ _ __ ___   ___ \n");
			printf ("\t\t\t / __| |/ _` |/ _ \\| | | | |  / _` |/ _` | '_ ` _ \\ / _ \\\n");
			printf ("\t\t\t \\__ \\ | (_| | (_) | |_| | | | (_| | (_| | | | | | |  __/\n");
			printf ("\t\t\t |___/_|\\__,_|\\___/ \\__,_|_|  \\__, |\\__,_|_| |_| |_|\\___|\n");
			printf ("\t\t\t                               __/ |                     \n");
			printf ("\t\t\t                              |___/              HTTP 404\n\n\n");
			
			printf ("Niveau :\t\t\t\t\t\t\t\t\t\t\tScore : %d \n1-Difficile\n2-Moyen\n3-Facile\n4-Quitter\nVotre Choix ? ",score);
			scanf ("%d",&nv);
			system ("cls");
		}while (nv != 1 && nv != 2 && nv !=3 && nv !=4);
	
		srand(time(NULL));
		r = rand() % 100 ;
		if (nv == 1)
		{
			system ("color 4");
			printf ("\n\n$$$$$$$\\  $$\\  $$$$$$\\   $$$$$$\\  $$\\           $$\\ $$\\\n");  
			printf ("$$  __$$\\ \\__|$$  __$$\\ $$  __$$\\ \\__|          \\__|$$ |\n");
			printf ("$$ |  $$ |$$\\ $$ /  \\__|$$ /  \\__|$$\\  $$$$$$$\\ $$\\ $$ | $$$$$$\\\n");
			printf ("$$ |  $$ |$$ |$$$$\\     $$$$\\     $$ |$$  _____|$$ |$$ |$$  __$$\\\n");
			printf ("$$ |  $$ |$$ |$$  _|    $$  _|    $$ |$$ /      $$ |$$ |$$$$$$$$ |\n");
			printf ("$$ |  $$ |$$ |$$ |      $$ |      $$ |$$ |      $$ |$$ |$$   ____|\n");
			printf ("$$$$$$$  |$$ |$$ |      $$ |      $$ |\\$$$$$$$\\ $$ |$$ |\\$$$$$$$\\\n");
			printf ("\\_______/ \\__|\\__|      \\__|      \\__| \\_______|\\__|\\__| \\_______|\t\t\t\t(666 pour Quitter)\n\n\n"); 
		}else if (nv == 2){
			system ("color 6");
			printf ("$$\\      $$\\  \n");						
			printf ("$$$\\    $$$ |  \n");
			printf ("$$$$\\  $$$$ | $$$$$$\\  $$\\   $$\\  $$$$$$\\  $$$$$$$\\ \n");
			printf ("$$\\$$\\$$ $$ |$$  __$$\\ $$ |  $$ |$$  __$$\\ $$  __$$\\\n");
			printf ("$$ \\$$$  $$ |$$ /  $$ |$$ |  $$ |$$$$$$$$ |$$ |  $$ |\n");
			printf ("$$ |\\$  /$$ |$$ |  $$ |$$ |  $$ |$$   ____|$$ |  $$ |\n");
			printf ("$$ | \\_/ $$ |\\$$$$$$  |\\$$$$$$$ |\\$$$$$$$\\ $$ |  $$ |\n");
			printf ("\\__|     \\__| \\______/  \\____$$ | \\_______|\\__|  \\__|\n");
			printf ("                       $$\\   $$ | \n");
			printf ("                       \\$$$$$$  | \n");
			printf ("                        \\______/   \t\t\t\t\t\t\t\t(666 pour Quitter)\n\n\n");

		}else if (nv == 3){
			system ("color a");
			printf ("$$$$$$$$\\                 $$\\ $$\\      \n");   
			printf ("$$  _____|                \\__|$$ |\n"); 
			printf ("$$ |   $$$$$$\\   $$$$$$$\\ $$\\ $$ | $$$$$$\\ \n"); 
			printf ("$$$$$\\ \\____$$\\ $$  _____|$$ |$$ |$$  __$$\\\n"); 
			printf ("$$  __|$$$$$$$ |$$ /      $$ |$$ |$$$$$$$$ |\n"); 
			printf ("$$ |  $$  __$$ |$$ |      $$ |$$ |$$   ____|\n"); 
			printf ("$$ |  \\$$$$$$$ |\\$$$$$$$\\ $$ |$$ |\\$$$$$$$\\ \n"); 
			printf ("\\__|   \\_______| \\_______|\\__|\\__| \\_______|\t\t\t\t\t(666 pour Quitter)\n\n\n");   
		}if (nv == 4){
			break;
		}
		
	
		do {
			printf ("Entrer un Nombre : ");
			scanf ("%d",&ne);
			if (ne>r && ne !=404 && ne !=666)
			{
				printf ("Le nombre est plus petit ! (Coups Restantes : %d)",(nv*10)-(cp+1));
				cp++;
			}else if (ne<r){
				printf ("Le nombre est plus grand ! (Coups Restantes : %d)",(nv*10)-(cp+1));
				cp++;
			}else if (ne==r){
				brk++;
				system ("color a");
				printf ("Vous avez obtenu la solution en %d coups !",cp+1);
				score+=(200-(nv*50));
				getch();
			}else if (ne==404){
				system ("cls");
				system ("color 1");
				printf ("Vous avez trouve le code de triche, Poursuivre ?\nOui/Non ");
				scanf("%s", mot);
		
				if (strcmp(mot,"Non") == 0 || strcmp(mot,"non") == 0 || strcmp(mot,"NON") == 0)
				{
					brk=0;
					system ("cls");
					
				}else if (strcmp(mot,"Oui") == 0 || strcmp(mot,"oui") == 0 || strcmp(mot,"OUI") == 0){
					system ("color 1");
					system ("cls");
					do{
						printf ("Menu\n1-Afficher le Nombre(170 pts)\n2-Ajouter 10 coups(30 pts/Facile 60 pts/Moyen 90 pts/Difficile)\n3-Ajouter au Scores\n4-Quitter\nVotre choix : ");
						scanf ("%d",&cc);
						switch (cc)
						{
							case 1 :
								if (score>=170){
									score-=170;
									printf ("\nLe Nombre est : %d",r);
									
								}else{
									printf ("Vous n'avez pas assez de Points !");
								}
								break;
							case 2 :
								if (score>=30*nv)
								{
									
									do{
										score-=120-(30*nv);
										cp-=10;
										printf ("Les %d coups sonts ajoutes !\nAjouter 10 autres ?\nOui/Non ",c10*10);
										scanf("%s", mot);
										if (strcmp(mot,"Non") == 0 || strcmp(mot,"non") == 0 || strcmp(mot,"NON") == 0)
										{
											brk2++;
										
										}else if (strcmp(mot,"Oui") == 0 || strcmp(mot,"oui") == 0 || strcmp(mot,"OUI") == 0){
											cp-=10;
											c10++;
										}
									}while (brk2==0 && score>=120-(30*nv));
								}else{
									printf ("Vous n'avez pas assez de points !");
								}
								break;
							case 3 :
								if (cs>0)
								{
									printf ("Combien de Points voulez-vous ajouter ? (1000 points Max)");
									scanf ("%d",&as);
									if (as>cs)
									{
										printf ("Il vous reste juste %d points",cs);
									}else if (as<=cs && as>0){
										cs-=as;
										score+=as;
										printf ("Les %d points sonts ajoute !",as);
									}
								}else{
									printf ("Votre solde des points est epuise");
								}
								
								
								break;
						}
						getch();
						system("cls");
					}while (cc!=4);	
				}
				if (nv == 1)
				{
					system ("color 4");
				}else if (nv == 2){
					system ("color 6");
				}else if (nv == 3){
					system ("color a");
				}if (nv == 4){
					break;
				}
			}else if (ne == 666){
				cp=nv*10+1;
				brk=2;
			}
			printf ("\n");
		}while (cp <= nv*10 && brk == 0);
		system ("cls");
		if (brk ==0)
		{
			system ("Lose.bat");
		}else if (brk == 1){
			system ("Win.bat");
		}
		do{
			if (brk != 2)
			{
				nv = 0;
				printf ("Continuer oui/non ? ");
				scanf("%s", mot);
			
				if (strcmp(mot,"Non") == 0 || strcmp(mot,"non") == 0 || strcmp(mot,"NON") == 0)
				{
					system ("color 5");
					nv=4;
				}else if (strcmp(mot,"Oui") == 0 || strcmp(mot,"oui") == 0 || strcmp(mot,"OUI") == 0)
				{
					system ("color 5");
					brk = 0;
					cp = 0;
					nv=5;
				}	
			}else{
				brk = 0;
				cp = 0;
				nv = 5;
			}
		}while (nv==0);
		
		
		system ("cls");
	}while (nv!=4);
}
