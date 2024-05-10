#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <stdio.h>
#include <string.h>

int main()
{

	char vet[200];
	int b[200];
	int i, a, c=0;
	

	printf("Inserire caratteri: ");
	scanf("%s", &vet);
	
		
	for(i=0;i<strlen(vet);i++)
	{
		for(a=0;a<strlen(vet);a++)
		{
			if(vet[a]==b[a])
				continue;
			
				else if(vet[i]==vet[a])
				{
					c++;
					b[a]=vet[a];	
				}
		}
		
		
		if(c!=0)
			printf(" hai inserito %c, %d volte\n", vet[i], c);
			
		c=0;
	}
		
	
	return 0;
}
