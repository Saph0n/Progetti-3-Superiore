#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
 int main()
 {
 	
 	int vet1[50];
	int vet2[50];	
 	int k,i=0,a,s,d,u=0,w=0,o=0,conta=0;
 	
 	
 	printf("Inserici la quantita delle variabili");
	scanf("%d",&k);
 	
 	for(i=0;i<k;i++)
	 {
	 	
	 	printf("Inserisci le variabili");
	 	scanf("%d",&vet1[i]);
	 		vet2[i]=vet1[i];
	 }
 i=0;	
 		for(i=0;i<k;i++)
		{
 			a=vet1[i];
 			
 			while(o<k)
		 	{
			 	u=u+w;
				 printf("ciao");
 			
	 			if(a==vet1[u]){
	 				printf("ciaobello");
	 				conta++;
				 }
	 			
 				u++;
		 		o++;
		 	}
		 	u=u+w;
		 	printf("ciaopablo");
		}
 	
 	
 	printf("ci sono %d  doppioni",conta);
 	
 	
 	return 0;
 }
