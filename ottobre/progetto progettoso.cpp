#include <stdio.h>
#include <iostream>
#include <math.h>
#include <unistd.h>
#include <conio.h>
#include <dos.h>
#include <stdlib.h> 
int main()

{
	//introduzione.
	system ("color 01");
	int i,y=2,t;
	printf("BBBBBBBBBBBBBBBBBB   EEEEEEEEEEEEEEEEE  NNNNNNN             NNNNNNN  VVVVVVV                      VVVVVVV EEEEEEEEEEEEEEEEE   NNNNNNN             NNNNNNN   UUUUUU          UUUUUU   TTTTTTTTTTTTTTTTTTTTTTTTTTTTTT       UUUUUUUUUUUUUU                                           \n");
	printf("BBBBBBBBBBBBBBBBBBB  EEEEEEEEEEEEEEEEE  NNNNNNNN            NNNNNNN   VVVVVVV                    VVVVVVV  EEEEEEEEEEEEEEEEE   NNNNNNNN            NNNNNNN  UUUUUUUU        UUUUUUUU  TTTTTTTTTTTTTTTTTTTTTTTTTTTTTT    UUUUUUUUUUUUUUUUUUUU                                                         \n");
	printf("BBBB          BBBBB  EEEEEEE            NNNNNNNNN           NNNNNNN    VVVVVVV                  VVVVVVV   EEEEEEE             NNNNNNNNN           NNNNNNN  UUUUUUUU        UUUUUUUU  TTTTTTTTTTTTTTTTTTTTTTTTTTTTTT   UUUUUUUUUUUUUUUUUUUUUU                                             \n");
	printf("BBBB           BBBB  EEEEEEE            NNNNNNNNNNN         NNNNNNN     VVVVVVV                VVVVVVV    EEEEEEE             NNNNNNNNNNN         NNNNNNN  UUUUUUUU        UUUUUUUU            TTTTTTTTTT            UUUUUUUU        UUUUUUUU                                      \n");
	printf("BBBB          BBBBB  EEEEEEEEEEEEEEEE   NNNNNNNNNNNN        NNNNNNN      VVVVVVV              VVVVVVV     EEEEEEEEEEEEEEEE    NNNNNNNNNNNN        NNNNNNN  UUUUUUUU        UUUUUUUU            TTTTTTTTTT            UUUUUUUU        UUUUUUUU                         \n");
	printf("BBBBBBBBBBBBBBBBB    EEEEEEEEEEEEEEEEE  NNNNNNNNNNNNN       NNNNNNN       VVVVVVV            VVVVVVV      EEEEEEEEEEEEEEEEE   NNNNNNNNNNNNN       NNNNNNN  UUUUUUUU        UUUUUUUU            TTTTTTTTTT            UUUUUUUU        UUUUUUUU                         \n");
	printf("BBBBBBBBBBBBBBBBB    EEEEEEEEEEEEEEEE   NNNNNNN NNNNNN      NNNNNNN        VVVVVVV          VVVVVVV       EEEEEEEEEEEEEEEE    NNNNNNN NNNNNN      NNNNNNN  UUUUUUUU        UUUUUUUU            TTTTTTTTTT            UUUUUUUU        UUUUUUUU                            \n");
	printf("BBBB          BBBBB  EEEEEE             NNNNNNN  NNNNNN     NNNNNNN         VVVVVVV        VVVVVVV        EEEEEE              NNNNNNN  NNNNNN     NNNNNNN  UUUUUUUU        UUUUUUUU            TTTTTTTTTT            UUUUUUUU        UUUUUUUU              \n");
	printf("BBBB           BBBB  EEEEE              NNNNNNN   NNNNNN    NNNNNNN          VVVVVVV      VVVVVVV         EEEEE               NNNNNNN   NNNNNN    NNNNNNN  UUUUUUUU        UUUUUUUU            TTTTTTTTTT            UUUUUUUU        UUUUUUUU                         \n");
	printf("BBBB           BBBB  EEEEEE             NNNNNNN    NNNNNN   NNNNNNN           VVVVVVV    VVVVVVV          EEEEEE              NNNNNNN    NNNNNN   NNNNNNN  UUUUUUUUU      UUUUUUUUU            TTTTTTTTTT            UUUUUUUUU      UUUUUUUUU            \n");
	printf("BBBB          BBBBB  EEEEEEEEEEEEEEEE   NNNNNNN     NNNNNN  NNNNNNN            VVVVVVV  VVVVVVV           EEEEEEEEEEEEEEEE    NNNNNNN     NNNNNN  NNNNNNN   UUUUUUUUUUUUUUUUUUUUUU             TTTTTTTTTT             UUUUUUUUUUUUUUUUUUUUUU                                   \n");
	printf("BBBBBBBBBBBBBBBBBBB  EEEEEEEEEEEEEEEEE  NNNNNNN      NNNNNN NNNNNNN             VVVVVVVVVVVVVV            EEEEEEEEEEEEEEEEE   NNNNNNN      NNNNNN NNNNNNN    UUUUUUUUUUUUUUUUUUUU              TTTTTTTTTT              UUUUUUUUUUUUUUUUUUUU                                   \n");
	printf("BBBBBBBBBBBBBBBBBB   EEEEEEEEEEEEEEEE   NNNNNNN       NNNNNNNNNNNNN              VVVVVVVVVVVV             EEEEEEEEEEEEEEEE    NNNNNNN       NNNNNNNNNNNNN       UUUUUUUUUUUUUU                 TTTTTTTTTT                 UUUUUUUUUUUUUU                                         \n");
	printf("                                                                                                       \n");
	printf("                                                        \n");
	printf("                                                       \n");
	system("PAUSE");
	system ("CLS");
	printf("CIAO...\nin questo programma andremo a risolvere i problemi di geometria.\n");
	system("PAUSE");
	system ("CLS");
	printf("scegliere il colore:\n-1 per il rosso\n-2 per il verde\n-3 per il blu\n-4 per il bianco");
	scanf("%d",&t);
	switch(t){
		case 1:
			system ("color 04");
		break;
		case 2:
			system ("color 02");
		break;
		case 3:
			system ("color 01");
		break;
		case 4:
			system ("color 0F");
		break;
	}
	//inizio calcoli
	system ("CLS");
	printf("INSERIRE LA FORMA GEOMETRICA:\n-1 PER TRIANGOLO\n-2 PER QUADRATO\n-3 RETTANGOLO\n-4 ROMBO\n-5 TRAPEZIO\n-6 ESAGONO\n-7 ETTAGONO\n-8 OTTAGONO\n-9 ENNAGONO\n-10 DECAGONO\n");
	scanf("%d",&i);
	switch (i){
		case 1:
			system ("CLS");
	    	float base,lato,perimetro,area,altezza;
	    		printf("inserire la base: ");
	   			scanf("%f",&base);
	   	 		printf("\ninserire il lato obliquo: ");
	   	 		scanf("%f",&lato);
	    		if(lato>(base/2))
	       		 {
	           		 printf("e' un triangolo valido");
	           		 perimetro=lato+lato+base;
	          		  altezza=sqrt((lato*lato)-((base/2)*(base/2)));
	          		  area=(base*altezza)/2;
	           		printf("\n                           ^                    \n");
	           		printf("                          /|\\                    \n");
	           		printf("                         / | \\ L                   \n");
			        printf("                        /  |  \\ A                  \n");
			        printf("                       /   |   \\ T                   \n");
			        printf("                      /    |    \\ O=%.1f                   \n",lato);
		            printf("                     /     |     \\                    \n");
		            printf("                    /      |      \\                    \n");
		            printf("                   /       |       \\                    \n");
		            printf("                  /        |        \\                    \n");
		            printf("                 /         |         \\                    \n");
		            printf("                /          |          \\                    \n");
		            printf("               /           |           \\                    \n");
		            printf("              /            |            \\                    \n");
		            printf("             /             |h=%.1f        \\                    \n",altezza);
		            printf("            /              |              \\                    \n");
		            printf("           /               |               \\                    \n");
		            printf("          /                |                \\                    \n");
		            printf("         /_________________|_________________\\                    \n");
		            printf("                b=%.1f                                                          \n\n\n",base);
		
		            printf("Perimetro=%.1f\nArea=%.1f\nAltezza=%.1f",perimetro,area,altezza);
		    }
		    else{
		            system ("CLS");
		            printf("non e' un triangolo valido metti altri valori");
		        while (lato<(base/2))
		            {
		                printf("\ninserire la base: ");
		                scanf("%f",&base);
		                printf("\ninserire il lato obliquo: ");
		                scanf("%f",&lato);
		                if(lato>(base/2))
		                    {
		                        printf("e' un triangolo valido\n\n");
		                        perimetro=lato+lato+base;
		                        altezza=sqrt((lato*lato)-((base/2)*(base/2)));
		                        area=(base*altezza)/2;
		
		                        printf("\n                           ^                    \n");
		                        printf("                          /|\\                    \n");
		                        printf("                         / | \\ L                   \n");
		                        printf("                        /  |  \\ A                  \n");
		                        printf("                       /   |   \\ T                   \n");
		                        printf("                      /    |    \\ O=%.1f                   \n",lato);
		                        printf("                     /     |     \\                    \n");
		                        printf("                    /      |      \\                    \n");
		                        printf("                   /       |       \\                    \n");
		                        printf("                  /        |        \\                    \n");
		                        printf("                 /         |         \\                    \n");
		                        printf("                /          |          \\                    \n");
		                        printf("               /           |           \\                    \n");
		                        printf("              /            |            \\                    \n");
		                        printf("             /             |h=%.1f        \\                    \n",altezza);
		                        printf("            /              |              \\                    \n");
		                        printf("           /               |               \\                    \n");
		                        printf("          /                |                \\                    \n");
		                        printf("         /_________________|_________________\\                    \n");
		                        printf("                b=%.1f                                                          \n\n\n",base);
		
		                        printf("Perimetro=%.1f\nArea=%.1f\nAltezza=%.1f",perimetro,area,altezza);
		
		            }
		            else{
		                    printf("non e' un triangolo valido metti altri valori");
		                    system ("CLS");
		                }
		
		            }
		
		
		        }
		break;   
	    case 2:
	    	system ("CLS");
	    	float l,P,A;
		    	printf("inserire il lato del quadrato:");
		    	scanf("%f",&l);
		    	
		    	P=l*4;
		    	A=l*l;
		    	
		    	printf("        _______________	        \n");
		    	printf("	|              |LATO=%f		\n",l);
		    	printf("	|              |		\n");
				printf("	|              |		\n");
				printf("	|              |		\n");
				printf("	|              |	    \n");
				printf("	|              |		\n");
				printf("	|______________|	    \n");
				printf("	\nperimetro=%f\nArea=%f	",P,A);
		break;
		case 3:
			system ("CLS");
			float latoRett, baseRett, AreaRett;

   			printf("Inserisci il lato");
   			scanf("%f", &latoRett);
    		printf("Inserisci la base");
		    scanf("%f", &baseRett);
		    
		    if (latoRett!=baseRett){
			
		
				    AreaRett=(baseRett*latoRett);
				 	printf("	__________________________________________			\n");
				 	printf("	|                                         |         \n");
				 	printf("	|                                         |LATO=%f          \n",latoRett);
				 	printf("	|                                         |           \n ");
				 	printf("	|                                         |        \n  ");
				 	printf("	|_________________________________________|        \n    ");
				 	printf("L'Area e' %f",AreaRett);
	        }
		    else
			{
		    	printf("il lato e la base sono uguali questo e' un quadrato non un rettangolo\n");
		    	while (latoRett==baseRett)
				{
		    			float latoRett, baseRett, AreaRett;
		    			
				   			printf("Inserisci il lato");
				   			scanf("%f", &latoRett);
				    		printf("Inserisci la base");
						    scanf("%f", &baseRett);
						    if (latoRett!=baseRett){
							    AreaRett=(baseRett*latoRett);
							 	printf("	__________________________________________			\n");
							 	printf("	|                                         |         \n");
							 	printf("	|                                         |LATO=%f \n",latoRett);
							 	printf("	|                                         |           \n ");
							 	printf("	|                                         |        \n  ");
							 	printf("	|_________________________________________|        \n    ");
							 	printf("L'Area e' %f",AreaRett);
	                }		
				}
			}
			case 4:
				system ("CLS");
				 float diagonale_maggiore, diagonale_minore, area4;
				    printf("Inserisci diagonale maggiore:");
				    scanf("%f", &diagonale_maggiore);
				
				    printf("Inserisci diagonale minore:");
				    scanf("%f", &diagonale_minore);
				
				    area4=(diagonale_maggiore*diagonale_minore)/2;
				   
				    printf("           /\\             \n ");
				    printf("         /  \\            \n");
				    printf("         /    \\           \n");
				    printf("        /      \\          \n");
				    printf("       /        \\         \n");
				    printf("       \\        /            \n");
				    printf("        \\      /           \n");
				    printf("         \\    /             \n");
				    printf("          \\  /             \n");
				    printf("           \\/             \n");
				    printf("L'Area e' %f",area4);
			    break;
			case 5:
				system ("CLS");
				float base_minore, base_maggiore, lato_obliquo, proiezione_altezza_base_maggiore, altezza5, area5;
				    printf("Inserisci valore base minore");
				    scanf("%f", &base_minore);
				
				    printf("Inserisci valore base maggiore");
				    scanf("%f", &base_maggiore);
				
				    printf("Inserisci valore lato obliquo");
				    scanf("%f", &lato_obliquo);
				
				    proiezione_altezza_base_maggiore=(base_maggiore-base_minore);
				
				    altezza5=sqrt(pow(lato_obliquo, 2)-(pow(proiezione_altezza_base_maggiore, 2)));
				
				    area5=((base_maggiore+base_minore)*altezza5)/2;
				
					printf("      ____________________                    \n");
					printf("      |                   \\                    \n");
					printf("      |                    \\                   \n");
					printf("      |                     \\  \n");
					printf("      |                      \\  \n");
					printf("      |                       \\  \n");
					printf("      |________________________\\  \n");
					printf("L'Area e' %f                          \n",area5);
			break;
			case 6:
				system ("CLS");
				float baseesagono,latoesagono,perimetroesagono,areaesagono,apotemaesagono;
				    printf ("Inserisci il lato");
				    scanf ("%f",&latoesagono);
				    system ("CLS");
				    perimetroesagono=(latoesagono*6);
				    printf ("\n Il perimetro in cm e': %f'",  perimetroesagono);
				    areaesagono=3*(latoesagono*latoesagono)*0.866;
				    printf ("\n L' area in cm^2 e': %f'",areaesagono);
				    printf("\n");
				    printf("           __________          \n");
				    printf("          /          \\      \n");
				    printf("         /            \\           \n");
				    printf("        /              \\       \n");
				    printf("       /                \\ \n");
				    printf("       \\                /   \n");
				    printf("        \\              /  \n");
				    printf("         \\            / \n");
				    printf("          \\__________/  \n");
			break;
			case 7:
				system ("CLS");
				float baseettagono, latoettagono, perimetroettagono,areaettagono,apotemaettagono;
					printf ("Inserisci il lato");
					scanf ("%f",&latoettagono);
					system ("CLS");
					perimetroettagono=(latoettagono*6);
					printf ("\n Il perimetro in cm e': %f'",  perimetroettagono);
					apotemaettagono= latoettagono*1.038;
					areaettagono=3*(latoettagono*latoettagono)*apotemaettagono;
					printf ("\n L' area in cm^2 e': %f'",  areaettagono);
					printf("\n");
			case 8:
				system ("CLS");
				float perimetro_ottagono, apotema_ottagono, lato_ottagono, area_ottagono;
				    printf("Inserisci valore lato");
				    scanf("%f", &lato_ottagono);
				    apotema_ottagono=(1.207*lato_ottagono);
				    perimetro_ottagono=(lato_ottagono*8);
				    area_ottagono=(perimetro_ottagono*apotema_ottagono)/2;
				    printf("Il valore dell'area e':%f", area_ottagono);
    		break;
    		case 9:
    			system ("CLS");
    			float apotema_ennagono, perimetro_ennagono, area_ennagono, lato_ennagono;
				    printf("Inserisci valore lato");
				    scanf("%f",&lato_ennagono);
				    apotema_ennagono=(1.374*lato_ennagono);
				    perimetro_ennagono=(lato_ennagono*9);
				    area_ennagono=(perimetro_ennagono*apotema_ennagono)/2;
				    printf("L'area misura:%f",area_ennagono);
			    return 72;
			    break;
			case 10:
				system ("CLS");
				float basedecagono, latodecagono, perimetrodecagono,areadecagono,apotemadecagono;
				    printf ("Inserisciil lato");
				    scanf ("%f",&latodecagono);
				    perimetrodecagono=(latodecagono*6);
				    printf ("\n Il perimetro in cm e': %f'",  perimetrodecagono);
				    apotemadecagono= latodecagono*1.539;
				    areadecagono=3*(latodecagono*latodecagono)*apotemadecagono;
				    printf ("\n L' area in cm^2 e': %f'",  areadecagono);
				    printf("\n");
			break;
	    }
	//ripetizione programma.
	while (y==2)
	{
	int e;
	printf("\n\nse vuoi continuare a risolvere problemi premi 1 senno' qualsiasi altro numero");
	scanf("%d",&e);
	if (e==1){
	system ("CLS");
	printf("\nINSERIRE LA FORMA GEOMETRICA:\n-1 PER TRIANGOLO\n-2 PER QUADRATO\n-3 RETTANGOLO\n-4 ROMBO\n-5 TRAPEZIO\n-6 ESAGONO\n-7 ETTAGONO\n-8 OTTAGONO\n-9 ENNAGONO\n-10 DECAGONO\n");
	scanf("%d",&i);
	switch (i){
		case 1:
			system ("CLS");
	    	float base,lato,perimetro,area,altezza;
	    		printf("inserire la base: ");
	   			scanf("%f",&base);
	   	 		printf("\ninserire il lato obliquo: ");
	   	 		scanf("%f",&lato);
	    		if(lato>(base/2))
	       		 {
	           		 printf("e' un triangolo valido");
	           		 perimetro=lato+lato+base;
	          		  altezza=sqrt((lato*lato)-((base/2)*(base/2)));
	          		  area=(base*altezza)/2;
	           		printf("\n                           ^                    \n");
	           		printf("                          /|\\                    \n");
	           		printf("                         / | \\ L                   \n");
			        printf("                        /  |  \\ A                  \n");
			        printf("                       /   |   \\ T                   \n");
			        printf("                      /    |    \\ O=%.1f                   \n",lato);
		            printf("                     /     |     \\                    \n");
		            printf("                    /      |      \\                    \n");
		            printf("                   /       |       \\                    \n");
		            printf("                  /        |        \\                    \n");
		            printf("                 /         |         \\                    \n");
		            printf("                /          |          \\                    \n");
		            printf("               /           |           \\                    \n");
		            printf("              /            |            \\                    \n");
		            printf("             /             |h=%.1f        \\                    \n",altezza);
		            printf("            /              |              \\                    \n");
		            printf("           /               |               \\                    \n");
		            printf("          /                |                \\                    \n");
		            printf("         /_________________|_________________\\                    \n");
		            printf("                b=%.1f                                                          \n\n\n",base);
		
		            printf("Perimetro=%.1f\nArea=%.1f\nAltezza=%.1f",perimetro,area,altezza);
		    }
		    else{
		            system ("CLS");
		            printf("non e' un triangolo valido metti altri valori");
		        while (lato<(base/2))
		            {
		                printf("\ninserire la base: ");
		                scanf("%f",&base);
		                printf("\ninserire il lato obliquo: ");
		                scanf("%f",&lato);
		                if(lato>(base/2))
		                    {
		                        printf("e' un triangolo valido\n\n");
		                        perimetro=lato+lato+base;
		                        altezza=sqrt((lato*lato)-((base/2)*(base/2)));
		                        area=(base*altezza)/2;
		
		                        printf("\n                           ^                    \n");
		                        printf("                          /|\\                    \n");
		                        printf("                         / | \\ L                   \n");
		                        printf("                        /  |  \\ A                  \n");
		                        printf("                       /   |   \\ T                   \n");
		                        printf("                      /    |    \\ O=%.1f                   \n",lato);
		                        printf("                     /     |     \\                    \n");
		                        printf("                    /      |      \\                    \n");
		                        printf("                   /       |       \\                    \n");
		                        printf("                  /        |        \\                    \n");
		                        printf("                 /         |         \\                    \n");
		                        printf("                /          |          \\                    \n");
		                        printf("               /           |           \\                    \n");
		                        printf("              /            |            \\                    \n");
		                        printf("             /             |h=%.1f        \\                    \n",altezza);
		                        printf("            /              |              \\                    \n");
		                        printf("           /               |               \\                    \n");
		                        printf("          /                |                \\                    \n");
		                        printf("         /_________________|_________________\\                    \n");
		                        printf("                b=%.1f                                                          \n\n\n",base);
		
		                        printf("Perimetro=%.1f\nArea=%.1f\nAltezza=%.1f",perimetro,area,altezza);
		
		            }
		            else{
		                    printf("non e' un triangolo valido metti altri valori");
		                    system ("CLS");
		                }
		
		            }
		
		
		        }
		break;   
	    case 2:
	    	system ("CLS");
	    	float l,P,A;
		    	printf("inserire il lato del quadrato:");
		    	scanf("%f",&l);
		    	
		    	P=l*4;
		    	A=l*l;
		    	
		    	printf("        _______________	        \n");
		    	printf("	|              |LATO=%f		\n",l);
		    	printf("	|              |		\n");
				printf("	|              |		\n");
				printf("	|              |		\n");
				printf("	|              |	    \n");
				printf("	|              |		\n");
				printf("	|______________|	    \n");
				printf("	\nperimetro=%f\nArea=%f	",P,A);
		break;
		case 3:
			system ("CLS");
			float latoRett, baseRett, AreaRett;

   			printf("Inserisci il lato");
   			scanf("%f", &latoRett);
    		printf("Inserisci la base");
		    scanf("%f", &baseRett);
		    
		    if (latoRett!=baseRett){
			
		
				    AreaRett=(baseRett*latoRett);
				 	printf("	__________________________________________			\n");
				 	printf("	|                                         |         \n");
				 	printf("	|                                         |LATO=%f          \n",latoRett);
				 	printf("	|                                         |           \n ");
				 	printf("	|                                         |        \n  ");
				 	printf("	|_________________________________________|        \n    ");
				 	printf("L'Area e' %f",AreaRett);
	        }
		    else
			{
		    	printf("il lato e la base sono uguali questo e' un quadrato non un rettangolo");
		    	while (latoRett==baseRett)
		    	{
		    			float latoRett, baseRett, AreaRett;

				   			printf("Inserisci il lato");
				   			scanf("%f", &latoRett);
				    		printf("Inserisci la base");
						    scanf("%f", &baseRett);
						    if (latoRett==baseRett){
							    AreaRett=(baseRett*latoRett);
							 	printf("	__________________________________________			\n");
							 	printf("	|                                         |         \n");
							 	printf("	|                                         |LATO=%f          \n",latoRett);
							 	printf("	|                                         |           \n ");
							 	printf("	|                                         |        \n  ");
							 	printf("	|_________________________________________|        \n    ");
							 	printf("L'Area e' %f",AreaRett);
	                }		
				}
			}
			case 4:
				system ("CLS");
				 float diagonale_maggiore, diagonale_minore, area4;
				    printf("Inserisci diagonale maggiore:");
				    scanf("%f", &diagonale_maggiore);
				
				    printf("Inserisci diagonale minore:");
				    scanf("%f", &diagonale_minore);
				
				    area4=(diagonale_maggiore*diagonale_minore)/2;
				   
				    printf("           /\\             \n ");
				    printf("         /  \\            \n");
				    printf("         /    \\           \n");
				    printf("        /      \\          \n");
				    printf("       /        \\         \n");
				    printf("       \\        /            \n");
				    printf("        \\      /           \n");
				    printf("         \\    /             \n");
				    printf("          \\  /             \n");
				    printf("           \\/             \n");
				    printf("L'Area e' %f",area4);
			    break;
			case 5:
				system ("CLS");
				float base_minore, base_maggiore, lato_obliquo, proiezione_altezza_base_maggiore, altezza5, area5;
				    printf("Inserisci valore base minore");
				    scanf("%f", &base_minore);
				
				    printf("Inserisci valore base maggiore");
				    scanf("%f", &base_maggiore);
				
				    printf("Inserisci valore lato obliquo");
				    scanf("%f", &lato_obliquo);
				
				    proiezione_altezza_base_maggiore=(base_maggiore-base_minore);
				
				    altezza5=sqrt(pow(lato_obliquo, 2)-(pow(proiezione_altezza_base_maggiore, 2)));
				
				    area5=((base_maggiore+base_minore)*altezza5)/2;
				
					printf("      ____________________                    \n");
					printf("      |                   \\                    \n");
					printf("      |                    \\                   \n");
					printf("      |                     \\  \n");
					printf("      |                      \\  \n");
					printf("      |                       \\  \n");
					printf("      |________________________\\  \n");
					printf("L'Area e' %f                          \n",area5);
			break;
			case 6:
				system ("CLS");
				float baseesagono,latoesagono,perimetroesagono,areaesagono,apotemaesagono;
				    printf ("Inserisci il lato");
				    scanf ("%f",&latoesagono);
				    system ("CLS");
				    perimetroesagono=(latoesagono*6);
				    printf ("\n Il perimetro in cm e': %f'",  perimetroesagono);
				    areaesagono=3*(latoesagono*latoesagono)*0.866;
				    printf ("\n L' area in cm^2 e': %f'",areaesagono);
				    printf("\n");
				    printf("           __________          \n");
				    printf("          /          \\      \n");
				    printf("         /            \\           \n");
				    printf("        /              \\       \n");
				    printf("       /                \\ \n");
				    printf("       \\                /   \n");
				    printf("        \\              /  \n");
				    printf("         \\            / \n");
				    printf("          \\__________/  \n");
			break;
			case 7:
				system ("CLS");
				float baseettagono, latoettagono, perimetroettagono,areaettagono,apotemaettagono;
					printf ("Inserisci il lato");
					scanf ("%f",&latoettagono);
					system ("CLS");
					perimetroettagono=(latoettagono*6);
					printf ("\n Il perimetro in cm e': %f'",  perimetroettagono);
					apotemaettagono= latoettagono*1.038;
					areaettagono=3*(latoettagono*latoettagono)*apotemaettagono;
					printf ("\n L' area in cm^2 e': %f'",  areaettagono);
					printf("\n");
			break;
			case 8:
				system ("CLS");
				float perimetro_ottagono, apotema_ottagono, lato_ottagono, area_ottagono;
				    printf("Inserisci valore lato");
				    scanf("%f", &lato_ottagono);
				    apotema_ottagono=(1.207*lato_ottagono);
				    perimetro_ottagono=(lato_ottagono*8);
				    area_ottagono=(perimetro_ottagono*apotema_ottagono)/2;
				    printf("Il valore dell'area e':%f", area_ottagono);
    		break;
    		case 9:
    			system ("CLS");
    			float apotema_ennagono, perimetro_ennagono, area_ennagono, lato_ennagono;
				    printf("Inserisci valore lato");
				    scanf("%f",&lato_ennagono);
				    apotema_ennagono=(1.374*lato_ennagono);
				    perimetro_ennagono=(lato_ennagono*9);
				    area_ennagono=(perimetro_ennagono*apotema_ennagono)/2;
				    printf("L'area misura:%f",area_ennagono);
			    break;
			case 10:
				system ("CLS");
				float basedecagono, latodecagono, perimetrodecagono,areadecagono,apotemadecagono;
				    printf ("Inserisciil lato");
				    scanf ("%f",&latodecagono);
				    perimetrodecagono=(latodecagono*6);
				    printf ("\n Il perimetro in cm e': %f'",  perimetrodecagono);
				    apotemadecagono= latodecagono*1.539;
				    areadecagono=3*(latodecagono*latodecagono)*apotemadecagono;
				    printf ("\n L' area in cm^2 e': %f'",  areadecagono);
				    printf("\n");
			break;
	    }	
	}
	else{
		return 72;
	}
 }
return 72;
}

