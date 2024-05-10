#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

float calcoli(float r,float area)
{
	
	area=3.14*(r*r);
	
	return area;
}
	
main()
{
	float area,r;
	printf("Inserisci il raggio");
	scanf("%f",&r);
	calcoli(r,area);
	area=calcoli(r,area);
	printf("L' area e %f",area);
	
}	
	

