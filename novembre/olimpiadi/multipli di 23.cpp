#include <stdio.h>
#include <stdlib.h>
	
int main()

{	
	
	// Questo programma trova i multipli di 23
	
	int p=0;
	int n;
	int d=0;
	int a=0;
	int resto;
	
	
	printf("Questo programma trova i numeri che sono multiupli di 23");
	printf ("\n");
	system ("PAUSE");
	system("CLS");
	
	while (p<17)
	{
		printf("Inserisci i numeri che sono multipli di 23, se hai finito digita 0");
		printf("\n");
		scanf("%d", &n);
		resto=n%23;
	
	if (n==0){
	 
	 p=p+17;
		
	}
	
	
	else if(resto==0){
		
		a=a+1;
	}	
				
		
		
	}
	
	printf ("I numeri multipli di 23 sono:%d",a);
	
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


