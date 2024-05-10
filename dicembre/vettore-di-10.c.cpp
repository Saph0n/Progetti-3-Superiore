#include <stdio.h>
#include <stdlib.h>
#include <limits.h>


 int main()
{
		
int c,resto,np,pro=1,som=0,imp,i=0;

	int nc[9];
	
	for(c=0;c<=19;c++){
		
		printf("Inserisci i numeri");
		scanf("%d",&imp);
		
		nc[i++]=imp;
		
		resto=nc[c]%2;
		
		if(resto==0){
			
			pro=pro*nc[c];
			
		
			
		}
		
		else{
			
			som=som+nc[c];
			
		}
		
		
		
	}
	

	printf("\nprodotto= %d",pro);
	
	printf("\nsomma= %d", som);
	
	return 0;
}
