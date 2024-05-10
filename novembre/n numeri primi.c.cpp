#include <stdio.h>
#include <stdlib.h>
//inserito un numero controllare se è primo

int main()

{
	
	int n;
	int c=0;
	int d=1;
	int resto;
	int k=0;
	int q;
	
	printf(" Questo programma trova n numeri primi");
	printf("\n");
	
	printf("\nInserisci il numero dei numeri primi che vuoi verificare");
	printf("\n");
	scanf("%d",&q);
	system("CLS");
	
	
	
	while (k<q){
		
		printf("\nInserisci il numero che vuoi verificare che sia primo");
	printf("\n");
	scanf("%d",&n);
	
		
		
		while(c<3&&d<=n){
		
		resto=n%d;
		d++;
		if (resto==0)
		c++;	
	}
	
	if (c<3){
		
		printf("Il numero %d e' primo",n);
		k++;
	}
	
	else
	
	printf("Il numero %d non e' primo",n);
	
	c=0;
	d=1;
	n=0;	
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

