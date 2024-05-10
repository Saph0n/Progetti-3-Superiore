#include <stdio.h>
#include <iostream>
#include <math.h>
#include <unistd.h>
#include <conio.h>
#include <dos.h>
/* questo programma fa il perimetro e l area  */
int main ()
{

//ettagonooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo
	
	float baseettagono, latoettagono, perimetroettagono,areaettagono,apotemaettagono;

	
	
    // Richiedo i valori in input

    printf ("Inserisciil lato");
    scanf ("%f",&latoettagono);
    system ("CLS");



    // Calcolo perimetro
    perimetroettagono=(latoettagono*6);
    printf ("\n Il perimetro in cm e': %f'",  perimetroettagono);

    // Calcolo l area
    apotemaettagono= latoettagono*1.038;
    areaettagono=3*(latoettagono*latoettagono)*apotemaettagono;
    printf ("\n L' area in cm^2 e': %f'",  areaettagono);
    printf("\n");
	system ("PAUSE");
}

