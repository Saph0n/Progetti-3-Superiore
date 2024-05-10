#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
int main()
{
	
	int n=0;
	
	for (int resto;n<=100;n++)
	{
		
		resto=n%2;
		
		if(resto==0)
		{
			printf ("\n%d",n);
			
			
		}
		
	}
	
	return 0;
	
}
