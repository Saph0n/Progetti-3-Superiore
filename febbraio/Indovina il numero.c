#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include <time.h>
//Questo programma indovina il numero
float visualizza();

void controlla();

int main(){
	
	
int n;

do{

	inizio:;

	  n=visualizza(&n);

	if(n==0)
	return 0;
	
		else if(n<0)
		goto inizio;

			else if(n>0)
			controlla(n);
			
}while(n!=0);

}

float visualizza(int *n){

	
		printf("Prova ad indovinare il numero misterioso: (compreso tra 1 e 10) (0 per terminare)\n");
		scanf("%d",&*n);

	return *n;
}

void controlla(int n){
	
	int nm;
	
	srand(time(NULL));
	nm=rand()%10;
	
	if(n==nm)
	printf("BRAVO HAI INDOVINATO\n");

		else
		printf("RITENTA!\n");
	

}
