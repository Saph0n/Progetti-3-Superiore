#include <stdio.h>
#include <iostream>
#include <math.h>
/* Questo progamma calcola la somma la sottrazzione la divisione la moltiplicazione tra 2 numeri  */

  main ()

{

	// dichiarazione delle variabili 
	float numero1,numero2, somma,sottrazzione,moltiplicazione,divisione;
	
	
	// Richiedo i valori in input
	printf ("Inserisci il primo numero:");
	scanf ("%f",&numero1);
	system ("CLS");
	
	printf ("Inserisci il secondo numero:");
	scanf ("%f",&numero2);
	system ("CLS");
	
	
	
	
	
	// Uso lo switch
	
		int a;
			
		
		printf("Scegliere l' operazione che si deve fare:\n-1 per la somma \n-2 per la sottrazine\n-3 per la moltiplicazione\n-4 per la divisione");
		printf("\n");
		scanf("%d",&a);
		system ("CLS");
	
	switch (a)
	{
			
		case 1:
			somma= numero1+ numero2;
			printf ("\n La somma tra i due numeri e': %f", somma);	
			break ;
		case 2:
			sottrazzione= numero1-numero2;
			printf ("\n La sottrazzione tra i due numeri e': %f", sottrazzione);
			break ;
		case 3:
			moltiplicazione= numero1*numero2;
			printf ("\n La moltiplicazione tra i due numeri e': %f", moltiplicazione);
			break;
		case 4:
			divisione=numero1/numero2;
			printf ("\n La divisione tra i due numeri e': %f", divisione);
			break;
		default:
		printf ("Scelta non valida");	
		
	}
	

 	
	//Disegnino
	
	system("color A4");
	printf("\n 	                          														 ");
	printf("\n                            														 ");		
	printf("\n                            														 ");
	printf("\n PPPPPPPPPPP        AAA           BBBBBBBB     LL         OOOOOOOOOOOO");
	printf("\n PPPPPPPPPPPP      AAAAA          BBBBBBBBBB   LL         OOOOOOOOOOOO");
	printf("\n PPP       PP     AA   AA         BB      BB   LL         OO        OO");		
	printf("\n PPPPPPPPPPPP    AA     AA        BB      BB   LL         OO        OO");
	printf("\n PPPPPPPPPPP    AA       AA       BBBBBBBB     LL         OO        OO");
	printf("\n PPP           AAAAAAAAAAAAA      BB      BB   LL         OO        OO");
	printf("\n PPP          AAAAAAAAAAAAAAA     BB      BB   LL         OO        OO");
	printf("\n PPP         AA             AA    BBBBBBBBBB   LLLLLLLLL  OOOOOOOOOOOO");
	printf("\n PPP        AA               AA   BBBBBBBB     LLLLLLLLL  OOOOOOOOOOOO");
	printf("\n 	                          														 ");
	printf("\n 	                          														 ");
	printf("\n 	                          														 ");
	system("PAUSE");
	
	
}




