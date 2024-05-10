#include <stdio.h>
#include <iostream>
#include <math.h>
#include <unistd.h>
#include <conio.h>
#include <dos.h>
/* questo programma fa il perimetro e l area di un triangolo isoscele */

int main ()
{

	
	inizio:
	
	// dichiarazione delle variabili 
	float base, lato,lato2, perimetro, altezza, area,mbase;
	
	
	
	// Richiedo i valori in input
	printf ("inserisci la base");
	scanf ("%f",&base);
	system ("CLS");
	
	printf ("Inserisciil lato");
	scanf ("%f",&lato);
	system ("CLS");
	
	printf ("Inserisciil secondo lato");
	scanf ("%f",&lato2);
	system ("CLS");
	
		
	
	// Meta base che pensavo di usare per la formula del altezza
	mbase=(base/2);
	// go to mi rifa ripartire il programma
	if (lato2 != lato)
	goto nnfunge;   
	
	else 
	
	// Calcolo perimetro,altezza e area
	perimetro=(base+lato+lato);
	printf ("\n Il perimetro in cm e': %f'",perimetro);
	

	altezza= sqrt(pow(lato,2) - pow ((base/2),2));
	
	area= (base*altezza)/2;
	printf("\n L' area in cm^2 e': %f'",area);
	
	//Disegnino
	
	system("color A4");
	printf("\n                              ");
	printf("\n                              ");
	printf("\n            A                 ");
	printf("\n           /|\\               ");
	printf("\n          / | \\              ");
	printf("\n         /  |  \\             ");
	printf("\n        /   |   \\            ");
	printf("\n       /    |    \\           ");
	printf("\n      /     |     \\          ");
	printf("\n     /      |      \\         ");
	printf("\n    /_______|_______\\        ");
	
	return(0);
	
	
	//Qua scrive che il triangolo non è isoscele e fa riniziare il programma
	nnfunge:
	
	printf ("Questo programma risolve solo il perimetro e l area di triangoli isocile");
	printf("\n");
	printf("\n");
	printf("\nEEEEEEE  RRRRRRR   RRRRRRR   OOOOOOOO  RRRRRRR     ");
	printf("\nE        R      R  R      R  O      O  R      R    ");
	printf("\nE        R      R  R      R  O      O  R      R    ");
	printf("\nEEEEEEE  RRRRRRR   RRRRRRR   O      O  RRRRRRR     ");
	printf("\nE        R   R     R   R     O      O  R   R       ");
	printf("\nE        R    R    R    R    O      O  R    R      ");
	printf("\nEEEEEEE  R     R   R     R   OOOOOOOO  R     R     ");
	printf("\n                                                   ");
	printf("\n                                                   ");
	printf("\n                                                   ");
	system ("PAUSE");
	system ("CLS");
	goto inizio;







}


