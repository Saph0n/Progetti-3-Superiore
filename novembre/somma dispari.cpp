#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
int main()
{

	int c;
	int resto;
	int somma;
	int n;
	
	printf ("Tra quanti numeri vuoi fare la somma ");
	printf("\n");
	scanf("%d",&c);
	
	for (int z=0;z<c;z++)
	{
	
	
		printf("Inserisci il numero che vuoi sommare");
		printf("\n");
		scanf("%d",&n);
		
		resto=n%2;
		
			if (resto!=0)
			{
				
			somma=somma+n;	
				
			}
	
	}
	
	
	printf("La somma dei solo numeri disparie':  %d",somma);
	
	
	return 0;
}

