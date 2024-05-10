#include <stdio.h>
#include <stdlib.h>
//data l' equazione ax+b=0 con a e b assegnati da te calcola x

int main()

{
	
	float a;
	float b;
	float x;


	printf("Inserisci a");
	printf("\n");
	scanf("%f",&a);
	
	printf("Inserisci b");
	printf("\n");
	scanf("%f",&b);
	
	if(a==0&&b==0){
	printf("L equazione e' indeterinata");
		
	}
	else if(a==0&&b!=0){
		
	printf("L' equazione e' impossibile'");
		
	}
	
	else if (b>=0){
		
		x=-b/a;
		printf("X e' uguale a %f",x);
		
		
	}
	else if(b<=0){
		
		x=+b/a;
		printf("X e' uguale a %f",x);
		
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

