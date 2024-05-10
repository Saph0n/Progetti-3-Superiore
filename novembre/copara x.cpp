#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
int main()
{
	
	int x;
	int n;
	int r;
	int min=0;
	int mag=0;
	int ugu=0;
	
	printf("Inserisci il valore da confrontare");
	printf("\n");
	scanf("%d",&n);
	
		printf("\nInserisci tra quanti volaroi vuoi confrontare il precedente numero");
		printf("\n");
		scanf("%d",&x);
	
	for (int c=0;c<x;c++)
	{
	
		
	printf("Inserisci i numeri da confrontare");
	printf("\n");
	scanf("%d",&r);
		
		
		if(r<n)
		{
			min=min+1;
			
		}
		
			else if(r>n)
			{
				
				mag=mag+1;
				
			}
		
				else if(n==r)
				{
					
					ugu=ugu+1;
					
				}
		
		
		
	}
	
	printf("\n I numeri maggiori sono ; %d", mag);
		printf("\n I numeri uguali sono ;%d", ugu);
			printf("\n I numeri minori sono ; %d",min);
	
	
	
	return 0;
}

