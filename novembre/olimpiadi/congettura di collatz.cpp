#include <stdio.h>
#include <stdlib.h>

int main()
{

// Questo programma prende dato un numero n se n è 1 l algoritmo termina se invece n è pari si divide per 2 altrimenti se n è
// dispari si moltiplica per 3 e si aggunge 1

int n;
int resto;
int l=1;

printf(" Insersci un numero");
printf("\n");
scanf("%d",&n);

while(n!=1){
	
	resto=n%2;
	
	if (resto==0){
		
	n=n/2;
	printf("\nN e' uguale a: %d",n);
	l++;		
	}
	
	else if(resto!=0){
		
	n=(n*3)+1;	
	printf("\nN e' uguale a: %d",n);
		l++;
	}
	
	
	
}

printf("\nCi ho messo %d passaggi",l);
/*
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
*/

return 0;
}
