#include <stdio.h>
#include <iostream>
#include <math.h>
/* Questo progamma trova l area il eprimetro e la diagonale  */

  main ()

{

	// dichiarazione delle variabili 
	float base,perimetro,altezza, somma,sottrazzione,moltiplicazione,divisione,diagonale, area;
	
	
	// Richiedo i valori in input
	printf ("Inserisci la base:");
	scanf ("%f",&base);
	system ("CLS");
	
	printf ("Inserisci l' aletzza :");
	scanf ("%f",&altezza);
	system ("CLS");
	
	
	
	
	
	// Uso lo switch
	
		int a;
			
		
		printf("Scegliere l' operazione che si deve fare:\n-1 per il perimetro \n-2 per l' area'\n-3 per lunghezza della diagonale");
		printf("\n");
		scanf("%d",&a);
		system ("CLS");
	
	switch (a)
	{
			
		case 1:
			perimetro= (base*2)+(altezza*2);
			printf ("\n Il perimetro e': %f", perimetro);	
			break;
		case 2:
			area= (base*altezza);
			printf ("\n L'area e': %f", area);
			break;
		case 3:
			diagonale= sqrt((altezza*altezza)+(base*base));
			printf ("\n La diagonale e': %f", diagonale);
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

