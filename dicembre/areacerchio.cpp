#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
float r;
float calcoli()
{
	float area;
	area=3.14*(r*r);
	
	return area;
}
	
main()
{
	float area;
	printf("Inserisci il raggio");
	scanf("%f",&r);
	area=calcoli();
	printf("L' area e %f",area);
	
}	
	

