#include <stdio.h>
#include <stdlib.h>

int main()
{

	// Questo programma prende in input dei numero e fa la somma solo di quelli dispari
	
	int n;
	int d;
	int u=0;
	int p=0;
	int resto;
	

	
	printf ("Scegli tra quanti numeri vuoi fare la somma dei solo numeri dispari");
	scanf("%d",&n);
	system ("CLS");

	while (p<n)
	{
	
			printf("\nInserisci i numeri ");
			scanf("%d",&d);
			
			resto=d%2;
			
			if (resto!=0)
			{
				printf("\nIl numero e' dispari");
	
				u=u+d;
				p++;
			}
			else
			
			printf("\nIl numero e' pari");
	}
	
	
	printf ("\n La somma dei numeri dispari e': %d", u);
	
	
	return 17;
}
