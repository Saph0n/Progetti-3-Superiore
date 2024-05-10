#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <math.h>
int main()
{
	
	int vet[10];
	int k;
	int val;
	int c;
	int somma=0;
	int resto;
	int q,s;
	float r;
	
	printf("Inserici la quantita di valori");
	scanf("%d",&s);
	
	if(s>0&&s<=10)
{
	
	
	for (c=0;c<s;c++){
		
		
		printf("\nInserisci il valore");
		scanf("%d",&val);
		
		
		
		
		vet[c]=val;
		resto=val%2;
		
		if(resto!=0){
			
			q=val*val;
			
			somma=somma+q;
		
			q=0;
		}
	}
	
	if (somma>=0){
	
	r=sqrt (somma);
	
	printf("\nLa radice quadrata della somma dei quadrati delle componenti di indice dispari e':  %f",r);
	
	}
	
	else{
		
		printf("\nNon so ancora fare la radice di un numero negativo");
	}
	
}
	
	return 0;
}
