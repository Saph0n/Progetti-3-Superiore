#include <stdio.h>
#include <stdlib.h>

int main()
{
	// Questo programma calcola il massimo tra "n" numeri
	
	int n;
	int i;
	int d=0;
	int max=0;
	
	printf ("Scegli tra quanti numeri vuoi calcolare il massimo");
	printf("\n");
	scanf("%d", &n);
	
	while (d<n)
		{
		d++;	
			printf("Inserisciil numero:");
			scanf("%d", &d);
			
		if (d>max)
		max=d;
		
			
		}
	
	printf ("Il numero maggiore e': %d", max);
	
	
	
	return 17;
}

