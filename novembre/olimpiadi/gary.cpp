#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
int main()
{
	
	// quanti giorni ci mette il gatto  risalire la montagna

inizio:	

	int a;
	int b;
	int h;
	int tot=0;
	int btot=0;
	int d=0;
	

	
	printf("\nInserisci di quanti centimentri che avansera da sveglio");
	printf("\n");
	scanf("%d",&a);
	system("CLS");
		
		printf("Inserisci di quanti centimetri scivolera mentre dorme");
		printf("\n");
		scanf("%d",&b);
		if (b<=0){
		
		printf("\nLa lumanca deve percorre aleno 1 cm quando dorme");
		goto inizio;	
		}
			system("CLS");
			printf("Quanta e' alta la montagna?");
			printf("\n");
			scanf("%d",&h);
			if(h>=1000){
				
			printf("\nIl valore della salita deve essere <= a 1000");
			goto inizio;	
			}
	
	if (a<=b){
		
		printf("Gary moria (e' trppo lenta/o RIP) e noi vogliamo che sproviva si che inserisci un numero a>b ");
		goto inizio;
	}
	
		else if(a>b){
		
		tot=a-b;
		
	}
	
	while (btot<=h){
		
		d++;
		
		btot=btot+tot;
		
	}
	
	
	printf("Gary ci mettera %d  giorni",d);
	
	
	
	
	return 0;
}
