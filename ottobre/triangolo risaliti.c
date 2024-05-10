#include <stdlib.h>
#include <stdio.h>


int main()
{
    // questo programma determina il perimetro e l'area di un triangolo isoscele
    
    float base,latoobliquo,altezza,perimetro,area,lato2;
    
    printf ("Inserisci un valore per la base: ");
    scanf ("%f", &base);
   
    printf ("Inserisci un valore per i lati obliqui: ");
    scanf ("%f", &latoobliquo);
    
	
	scanf ("%f", &lato2);
    
    if(latoobliquo!=lato2)
    exit(0);
    
    
    
    else
   
    perimetro = latoobliquo + lato2 + base;
    printf ("perimetro: %f", perimetro);
    
    altezza = sqrt(latoobliquo * lato2 - base / 2 * base / 2);
    
    area= (base * altezza) / 2;
    printf ("area: %f", area);
    
    system ("PAUSE");
    return 0;
}
