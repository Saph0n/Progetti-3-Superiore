#include <stdio.h>
#include <stdlib.h>
#include <limits.h>


void calcoli(float ra,float *aria){
	
	*aria=3.14*(ra*ra);
	
}


main(){
float r,area;
printf("Inserisci il raggio");
scanf("%f",&r);
calcoli(r,&area);

printf("L' area e %f",area);

}


