#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void leggiCoeff (float*, float *, float *);
float calcoloDet(float, float, float);
void calcolaSol (float, float, float, float, float*, float*);

int main ()
{
	float a, b, c, delta, x1, x2;
	leggiCoeff(&a, &b, &c); 
	delta=calcoloDet(a, b, c);
	

		calcolaSol(a, b, c, delta, &x1, &x2);
		
			printf("\nL equazione : %.1fx^2+(%.1fx)+(%.1f)=0", a, b, c);
				printf("\ndelta= %.2f", delta);
					printf("\n1 soluzione= %.2f.\n2 soluzione= %.2f", x1, x2);
	
	return 0;
}

	void leggiCoeff (float *a, float *b, float *c)
	{
		printf("Inserisci  a: ");
		scanf("%f", &*a);
			printf("Inserisci  b: ");
			scanf("%f", &*b);
				printf("Inserisci  c: ");
				scanf("%f", &*c);
	}
	
		float calcoloDet (float a, float b, float c)
		{
			
			float delta=0;
			
			delta=(b*b)-4*(a*c);
			
			return delta;
			
		}
		
			void calcolaSol (float a, float b, float c, float delta, float *x1, float *x2)
			{
				
				*x1=((-b)+sqrt(delta))/2*a;
				
				*x2=((-b)-sqrt(delta))/2*a;
				
			}
