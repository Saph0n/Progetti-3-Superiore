#include <stdio.h>
#include <stdlib.h>
//inserito un numero controllare se è primo

int main()

{
	int n;
	int o=0;
	int c=0;
	int d=1;
	int resto;
	
	printf("Inserisci il numero di numeri che vuoi ferificare sia primo");
	scanf("%d",&n);
	
	while (o<=n){
		
	
	while(c<3&&d<=n){
		
		resto=n%d;
		d++;
		if (resto==0)
		c++;	
	
	else if (c<3){
		
		printf("Il numero %d e' primo",n);
		o++;
	}
	
	else
	printf("Il numero %d non e' primo",n);
	} 
		
		
		
		
		
	}
	
		
	
		
	
	
	
	
	
	system("color A4");
	printf("\n 	                          														 ");
	printf("\n                            														 ");		
	printf("\n                            														 ");
	printf("\n PPPPPPPPPPP        AAA           BBBBBBBB     LL         OOOOOOOOOOOO");
	printf("\n PPPPPPPPPPPP      AAAAA          BBBBBBBBBB   LL         OOOOOOOOOOOO");
	printf("\n PPP        P     AA   AA         BB      BB   LL         OO        OO");		
	printf("\n PPPPPPPPPPPP    AA     AA        BB      BB   LL         OO        OO");
	printf("\n PPPPPPPPPPP    AA       AA       BBBBBBBB     LL         OO        OO");
	printf("\n PPP           AAAAAAAAAAAAA      BB      BB   LL         OO        OO");
	printf("\n PPP          AAAAAAAAAAAAAAA     BB      BB   LL         OO        OO");
	printf("\n PPP         AA             AA    BBBBBBBBBB   LLLLLLLLL  OOOOOOOOOOOO");
	printf("\n PPP        AA               AA   BBBBBBBB     LLLLLLLLL  OOOOOOOOOOOO");
	printf("\n 	                          														 ");
	printf("\n 	                          														 ");
	printf("\n 	                          														 ");
	
	return 17;
	
}

