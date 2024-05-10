#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <stdio.h>
#include <string.h>

int main()
{

	char v[100];
	int i, c=1;
	
	
	do
	{	
		printf("Scrivi la parola: ");
		scanf("%s", &v);
	}
	while(strlen(v)>=100);
	
	
		for(i=0;i<(strlen(v)/2);i++)
		{
			if(v[i]==v[strlen(v)-i-1])
				c=0;
				
				else
					break;
		}

	
			if(c==0)
				printf("Plindroma\n");
					
				else
					printf("NO palindroma\n");
				
	
	return 0;
}
