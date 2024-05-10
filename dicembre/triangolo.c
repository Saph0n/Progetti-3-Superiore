#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
float b,h;
float calcoli()
{
	
	a=b*h/2;
	
	i=2*(b*h/2)/h;
	
	p=b+h+(2*(b*h/2)/h);

	
}
	
main()
{
	float ri,b,h;
	printf("Inserisci la base");
	scanf("%f",&b);
		printf("Inserisci l' altezza'");
		scanf("%f",&h);
		
		ri=calcoli();
		printf("L' area e %f",ri);	
		ri=calcoli();
		printf("L' ipotenusa e %f",ri);	
		ri=calcoli();
		printf("L' perimetro e %f",ri);	
}	
	
