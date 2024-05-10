#include<stdlib.h>
#include<stdio.h>

int main()
{
	
int n, m, e, k, max = 0;
	

	printf("Impiegati massimi: ");
	scanf("%d", &n);
	
		printf("Impiegati minimi: ");
		scanf("%d", &m);
	
		printf("Soldi: ");
		scanf("%d", &e);	
	
	
			while(m <= n)
			{
				k = e % m;
				
				if(k > max)
					max = k;
				m++;
			}
			
				k = max;
	
	
					printf("k e' uguale a : %d", k);
	

	return 0;
}

