#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <stdio.h>
#include <string.h>
 int main()
 {
 	char vet1[100];
 	char vet2[100];
 	int len;
 	
 	printf("Inserisci il primo vettore");
 	scanf("%s",vet1);
 	printf("\nInserisci il secondo vettore");
 	scanf("%s",&vet2);
 	
 	
	if (strcmp(vet1,vet2)==0)
	printf("\nI due vettori sono uguali");
	
		else if(strcmp(vet1,vet2)<0)
		printf("Il primo vettore e piu grande del secondo");
		
			else if(strcmp(vet1,vet2)>0)
			{
			printf("Il primo vettore e piu piccolo del secondo");
			}
	 
	 printf("\nLa parola concatenata e  %s%s",vet1,vet2);



len=strlen(vet1);

	printf("\nIl primo vettore e lungo %d ",len);



 	
 	return 0;
 }
