#include <stdio.h>
#include <iostream>
#include <math.h>
/*Questo programma calcola se il numero è positivo o negativo */

int main ()
{
	inizio:
	// dichiarazione delle variabili 
	float numero;
	
	
	// Richiedo i valori in input
	printf ("inserisci il numero");
	scanf ("%f",&numero);
	system ("CLS");
	
	
	// Calcolo se il numero è negativo o positivo
	
	if (numero==0)
	goto sotto;
	
	else
	{
	
	if(numero>0)

	printf("Il numero letto e'positivo");
	
	else
	
	printf("Il numero e' letto e'negativo");
}
	
	//Funziona


	
	//Disegnino
	
	system("color A4");
	printf("\n 	                          														 ");
	printf("\n                            														 ");		
	printf("\n                            														 ");
	printf("\n PPPPPPPPPPP        AAA           BBBBBBBB     LL         OOOOOOOOOOOO");
	printf("\n PPPPPPPPPPPP      AAAAA          BBBBBBBBBB   LL         OOOOOOOOOOOO");
	printf("\n PPP        P     AA   AA         BB      BB   LL         OO        OO");		
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
	return 0;
	
	sotto:
	printf("\n Zero e' un numero che non e' ne negativo ne positivo");
	printf("\n");
	printf("\n");
	system ("PAUSE");
	system ("CLS");
	goto inizio;
}






