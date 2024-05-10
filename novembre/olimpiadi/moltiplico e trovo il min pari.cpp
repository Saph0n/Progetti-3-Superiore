#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
int main()
{
	// Quest oprogramma fa la * di n coppie e stampa solo l piu piccola pari
	
	int n;
	int q;
	int w;
	int mol=0;
	unsigned int min=UINT_MAX;
	int resto;	
	int z=0;
	
	printf("Inserisci la quantita delle coppie");
	printf("\n");
	scanf("%d",&n);
	
	while(z<n){
		
		z++;
		
		printf("Inserisci il  primo numero della coppia");
		printf("\n");
		scanf("%d",&q);
		
		printf("Inserisci il secondo numero della coppia");
		printf("\n");
		scanf("%d",&w);
		
	 mol=q*w;
	
		//printf("%d",mol);	
	 resto=mol%2;
	
	  if(mol<min&&resto==0){
	  	
	  	
	  	min=mol;
	  	
	  	
	  }
		
	
			
		
		
	}
	
	
	
	
	
	printf("La coppia di numeri moltiplicata minima e pari e'%d",min);
	
	
	
	
	return 0;	
}
