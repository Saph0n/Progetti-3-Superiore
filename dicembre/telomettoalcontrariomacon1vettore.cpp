#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
 int main()
{
	
	int vet1[100];
	int k,i,u=0,h=0;
	
	printf("Inserici la quantita delle variabili");
	scanf("%d",&k);
	
	
	for(i=0;i<k;i++)
	{
	
	printf("Inserici un valore");
	scanf("%d",&vet1[i]);
	
	}
i=0;	
		printf("I valori al contrario sono:");
		
			for(u=k-1;u>=0;u--)
			{
				h=vet1[i];
			vet1[u]=h;
			i++;
					
			}
i=0;			
				while(i!=k){
		
				printf("\n valore: %d",vet1[i]);
				i++;
				
				}
			
	return 0;
}
