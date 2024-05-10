#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(){
	
 int mat[11][100];
 int z=2,x,q=1,j,contamesi,somma=0,media,i=0;
 
 do{
 
 	printf("Inserisci la quanita di mesi che vuoi prendere in considerazione");
 	scanf("%d",&z);
 	printf("\n");
 }while(z<2);


	for(i=0;i<10;i++){
		
		for(j=0;j<z;j++){
			
			printf("Inserisci i numeri di articolo %d venduti nel %d^ su %d mesi",i+1,q,z);
			scanf("%d",&mat[i][j]);
			
			if(q>=z)
			q=0;
			
			q++;
		}
		
	}
	    
	for(i=0;i<10;i++){
		
			for(j=0;j<z;j++){
				
				somma=somma+mat[i][j];
				
			}
		
		media=somma/z;
		printf("\nIn media hai venduto %d articoli di articoli %d ",media,i+1);
		somma=0;
	}
	
	
	
	return 0;
}
