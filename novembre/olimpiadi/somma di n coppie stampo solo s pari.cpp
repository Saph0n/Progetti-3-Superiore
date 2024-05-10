#include <stdio.h>
#include <stdlib.h>

int main()
{
// questo programma fa la somma delle coppie dei numeri e stampa solo le somme pari, se non i sono somme pari stampa -1	

int n;
int z=0;
int q;
int w;
int s;
int resto;
int m=0;

	
	printf(" Inserisci il numero delle coppie di qui vuoi fare la somma");
	printf("\n");
	scanf("%d",&n);
	system("CLS");
	while (z<n){
	
	
	z++;
	
	
		printf("Inserisci il  primo numero della coppia");
		printf("\n");
		scanf("%d",&q);
		
		printf("Inserisci il secondo numero della coppia");
		printf("\n");
		scanf("%d",&w);
		system ("CLS");
		
		s=q+w;
		
		resto=s%2;
		
		if (resto==0&&s>m){
			
		m=s;	
			
		}
		
	}
	

	if(m!=0)
	printf("La somma pari piu guarnde delle coppie dei numeri digitati e':%d",m);
	else
	printf("-1");
	
	return 17;
}
