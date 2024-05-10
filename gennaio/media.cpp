#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#define n 7
#define m 8 
 int main(){
 	
	 int mat[n][m];
 	int i,j;
 	
 	for(i=0;i<n-1;i++){
 		
 		printf("Inserisci i voti del %d studnte\n",i+1);
 		
	 	
		 	for(j=0;j<m-1;j++){
	 			
	 			printf("Inserisci il %d voto",j+1);
	 			scanf("%d",&mat[i][j]);
	 			
			 }
 		
 		
 		
	 }
 	
 	
 	
return 0;
 }
