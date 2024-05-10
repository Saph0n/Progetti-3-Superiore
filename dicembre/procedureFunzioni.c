#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

void n1perCento (float*); 
float n2Piu8 (float);
float divideN3sommaN1 (float,float *);
void sommaMedia (float, float, float, float*, float*);

int main ()
{	
	float n1, n2, n3, somma=0, media;
	printf("Inserisci il 1 valore: ");
	scanf("%f", &n1);
		printf("Inserisci il 2 valore: ");
		scanf("%f", &n2);
			printf("Inserisci 3 valore: ");
			scanf("%f", &n3);
			
				n1perCento(&n1);
				
					n2=n2Piu8(n2);
					
						n3=divideN3sommaN1(n3, &n1);

	sommaMedia(n1, n2, n3, &somma, &media);  

	printf("\n1 %.2f", n1);
			printf("\n2 %.2f", n2);
				printf("\n3 %.2f", n3);
					printf("\n4 %.2f", somma);
						printf("\n5 %.2f", media);
	return 0;
}
	
	void n1perCento (float *n1) 
	{
		
		*n1=*n1*100;
		
	}
		
		float n2Piu8 (float n2) 
		{
			
			n2=n2+8;
			return n2;
			
		}
			
			float divideN3sommaN1 (float n3,float *n1)
			{
				
				n3=n3/4;
					*n1+=86;
						return n3; 
				
			}
				
					void sommaMedia (float n1, float n2, float n3, float *somma, float *media)
					{
						
						*somma=n1+n2+n3;
							*media=*somma/3;
							
					}

