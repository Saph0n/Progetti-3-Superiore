#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <math.h>
int main()
{
	float vet1[100];
	float vet2[100];
	int c,val,q,m,k;
	
	printf("Inserisci la quantita di valori che vuoi inserire nel vettore");
	scanf("%d",&k);
	
	if(k>0&&k<=100)
{
	
	
	for(c=0;c<k;c++)
	{
		
		printf("\nInserisci il valore");
		scanf("%d",&val);
		
			q=val*val;
			
				vet1[c]=val;
				vet2[c]=q;
				
					m=vet2[c]-vet1[c];
					
						printf("La differenza e: %d",m);
						
						m=0;
						q=0;
						
	}
	
}

return 0;	
}
