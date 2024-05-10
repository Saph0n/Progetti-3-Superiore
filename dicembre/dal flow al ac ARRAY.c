#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
 int main()
 {
 	int a[50];
 	int b[50];
 	int dim,i,j,trovato,k;
 	
 	// Acqusizioni delle rele dimenzione dell' array
 	
 	printf("Inserisci la dimensione del vettore");
 	
	 	do{
	 		
	 		scanf("%d",&dim);
	 		
		}while(dim>50||dim<0);
 	
 	
 	// Caricamento del primo vettore
 	
 	for(i=0;i<dim;i++){
 		
 		printf("Inserisci un numero");
 		scanf("%d",&a[i]);
 		
	 }
 	
 	b[0]=a[0];
 	
 	//La variabile k è l' indice di posizione all intero del vettore B
 	
 	
 	k=1;
 	
 		for(i=1;i<dim;i++){
 			
 			trovato=1;
 			
 			for(j=0;j<k;j++){
 				
 				if(a[i]==b[j]){
 					
 					trovato=0;
 					j=k;
 					
				 }
 				
 				
 						
					 
 				
 				
			 }
 			
 					if(trovato==1){
 						
 					b[k]=a[i];
 					k=k+1;
 						
					}
 			
 			
 			
		 }
		 
		 printf("Contenuto del vettore");
		 
		 	for(i=0;i<k;i++){
		 		
		 		printf("%d",b[i]);
			 }
 	
 	
 	
 	return 0;
 }
