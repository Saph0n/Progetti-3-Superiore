#include <stdio.h>
#include <iostream>
#include <math.h>
/*Questo programma trova il massimo tra tre numeri */

int main ()
{
	// dichiarazione delle variabili 
	float numero1,numero2,numero3,massimo;
	
	
	// Richiedo i valori in input
	printf ("inserisci il primo numero");
	scanf ("%f",&numero1);
	system ("CLS");
	
	printf ("inserisci il secondo numero");
	scanf ("%f",&numero2);
	system ("CLS");
	
	printf ("inserisci il terzo numero");
	scanf ("%f",&numero3);
	system ("CLS");
	
	
	
	// Calcolo il massimo tra tre numeri
	
	massimo = numero1;
 	if (numero2>massimo)
 		massimo = numero2;
 	if (numero3>massimo)
 		massimo = numero3;
	
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




