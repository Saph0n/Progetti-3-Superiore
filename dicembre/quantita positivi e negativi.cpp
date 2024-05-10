#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <math.h>
int main()
{
	int vet[100];
	int val,c,k;
	int p=0;
	int n=0;
	
	
	printf("Inserisci la quantita di valori");
	scanf("%d",&k);
	
	if(k>0&&k<=100)
{
	
	
	for(c=0;c<k;c++){
		
		
		printf("Inserisci il valore");
		scanf("%d",&val);
		
		vet[c]=val;
		
		if (vet[c]>=0){
			
			p=p+1;
			
		}
		
		else if(vet[c<0]){
			
			n=n+1;
			
		}
		
		
		
		
	}

}
	
	printf("Hai inserito %d numeri positivi",p);
	printf("\nHai inserito %d numeri negativi",n);
	
	
	
	
	return 0;
}
