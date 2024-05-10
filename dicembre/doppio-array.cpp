#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <limits.h>

 int main()
 {
 	int i=0,va,vb,c=1717,v=1717;
 	
 	int aa[c];
 	int bb[v];
 	
 	do{
 		
 		printf("Inserisci il numero intero");
 		scanf("%d",&aa[i]);
 		
 		va=aa[i];
 		
	 		
			printf("Inserisci un altro numero intero");
	 		scanf("%d",&bb[i]);
 		
 			vb=bb[i];
 			
 		i++;
 		c++;
 		v++;
 		
	}while(va!=-1&&vb!=-1);
 	
 	
 	
 	return 0;
 }
