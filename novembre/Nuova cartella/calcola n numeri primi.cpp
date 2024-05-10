#include <stdio.h>
#include <stdlib.h>
//inserito un numero controllare se è primo

int main()

{
	
	int n;
	int c=0;
	int d=1;
	int resto;
	int f=0;
	int k;
	
	printf("Inserisci il numero che vuoi verificare che sia primo");
	printf("\n");
	scanf("%d",&n);
	system("CLS");
	
	if (n==1){
		
		printf("Sotto il numero 1 non ci sono numeri primi (apparte quegli negativi))");
		return 17;
	}
		f=n;
		f=f-n;
		
	while(f<=n&&d<=n){
		
		f++;
		
		resto=f%d;
		d++;
		if (resto==0)
		f=k;
		printf("\n %d e' primo",k);
			
		
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
