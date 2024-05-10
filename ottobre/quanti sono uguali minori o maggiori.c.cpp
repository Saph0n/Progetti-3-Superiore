#include <stdio.h>
#include <stdlib.h>

int main()
{

	// Questo programma prende in input un numero intero e lo paragona ad altri numeri
	int p=0;
	int n;
	int d;
	int u=0;
	int s=0;
	int m=0;
	

	
	printf ("Scegli il numero (X) con qui vuoi paragonare gli alri numeri");
	scanf("%d", &n);
	system ("CLS");

	while (p<17)
	{
	
	
			
			printf("Inserisci i numeri con cui vuoi paragonare il numero inserito prima, se invece non vuoi piu paragonare inserisci 0:");
			scanf("%d", &d);
			
			if(d==0)
			{
				p=p+17;
			}
			
			if (d>n){
				
				s=s+1;
			}
			 else if(d<n&&d!=0){
				m=m+1;
			}
				
			if(d==n){
				
				u=u+1;
			}
	}
	
	
	printf ("\nI numeri che sono uguali a X sono ': %d", u);
	printf ("\nI numeri che sono maggiori a X sono ': %d", s);
	printf ("\nI numeri che sono miori a X sono ': %d", m);
	
	
	return 17;
}
