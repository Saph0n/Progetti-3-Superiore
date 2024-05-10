#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <stdio.h>
#include <string.h>

int main()
{
	
	char veti[50], vetf[50];
	int i, c, a, b=1;
	
		printf("Inserisci la parola: ");
		scanf("%s",veti);
	

vetf[0]=veti[0];
	
		
	for(i=1; i<=strlen(veti); i++)
	{
		a=1;
		
		for(c=0; c<=b; c++)
		{
			if(veti[i]==vetf[c])
			{
				a=0;
				c=b;
			}
	
		}
		
			if(a==1)
			{
				vetf[b]=veti[i];
				b++;
			}

	}
	
	
	printf("La parola senza lettere doppie : %s",vetf);
	
		
	return 0;
}
