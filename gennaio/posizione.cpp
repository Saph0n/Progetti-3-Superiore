#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#define n 1
#define m 3

int main(){
	
	int mat[n][m];
	int i,j;
	for(i=0;i<n;i++){
		
		for(j=0;j<m;j++){
			
			printf("Inserire valore");
			scanf("%d",&mat[i][j]);
			
		}
		
	}
	
	for(i=0;i<n;i++){
		
		for(j=0;j<m;j++){
			
		if(j%2==0){
			
			if(mat[i][j]>3&&mat[i][j]<25)
			printf("Il numero %d rispetta le condizioni\n",mat[i][j]);
			
				else
				printf("Il numero %d NON rispetta le condizioni\n",mat[i][j]);
		}
			
			else if(j%2!=0){
			
				if(mat[i][j]%2==0)
				printf("Il numero %d NON rispetta le condizioni\n",mat[i][j]);	
				
					else
					printf("Il numero %d  rispetta le condizioni\n",mat[i][j]);
					
			}
			
		}
		
	}
	
	
	
	
	
	return 0;
}
