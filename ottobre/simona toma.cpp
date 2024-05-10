#include <stdio.h>
#include <math.h>


int main ()
{
    //dichiarazione delle variabili
    float base, altezza, area, perimetro, lato_obliquo;

    //Richiedo i valori in input
    printf ("Inserisci lato obliquo");
    scanf("%f",&lato_obliquo);

    printf ("\n Inserisci base");
    scanf("%f",&base); 

    //calcolo valore altezza
    altezza=sqrt(pow(lato_obliquo, 2)-(pow(base/2, 2)));

    //calcolo valore area
    area=(base*altezza)/2;
    printf("\nIl valore dell'area e': %f", area);

    //calcolo valore perimetro
    perimetro=(base+lato_obliquo+lato_obliquo);
    printf("\nIl valore del perimetro e': %f", perimetro);

    return 0;
}
