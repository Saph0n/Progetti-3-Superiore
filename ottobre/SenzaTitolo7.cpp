#include <stdio.h>
#include <iostream>
#include <math.h>
/* Questo progamma  */
{
int main ();



	// dichiarazione delle variabili 
	float numero1,numero2, somma,a, massimo;

		
	
	// Richiedo i valori in input
	printf ("inserisci il primo numero");
	scanf ("%f",&numero1);
	system ("CLS");
	
	printf ("inserisci il secondo numero");
	scanf ("%f",&numero2);
	system ("CLS");
	
	
	
	
	
	// Uso lo switch
	
		int a;
		
		printf("scegliere l' operazione che si deve fare:\n-1 per la somma \n-2 per la sottrazzione\n-3 per la moltiplicazione\n-4 per la divisione");
	scanf("%d",&a);
	switch(a)
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

	
	
	
	
	
	
	// scrivo il risulato
	printf ("\n Il numero piu' grande e': %f", massimo);
 	
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

