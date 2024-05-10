#include <stdio.h>
/* questo programma fa la media tra 3 numeri*/

int main ()
{
	// dichiarazione delle variabili 
	float primo, secondo, terzo, media;
	
	// Richiedio i valori in input
	printf ("inserisci il primo valore");
	scanf ("%f",&primo);
	
	printf ("\nInserisci secondo valore");
	scanf ("%f",&secondo);
	
	printf ("\nInserisci terzo valore");
	scanf ("%f",&terzo);
	// calcolo la media 
	media=(primo+secondo+terzo)/3;
	
	// stampo il risultato
	printf ("\nla media e': %f'",media);
	
	return 0;
	
}
