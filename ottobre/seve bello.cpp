#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, max=0;
	int i, j;
	
	printf("Inserire la quantita di numeri di qui si vuole trovare il massimo: ");
	printf("\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Inserire %d^ valore:",i+1);
		j=i;
		scanf("%d",&j);
		if(j>max)
		max=j;
	}
	printf("Il numero massimo e': %d", max);
	
}
