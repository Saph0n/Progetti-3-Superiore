#include <stdio.h>

void scambia(int *a, int *b) {
	int temp;
	
	temp=*a;
	*a=*b;
	*b=temp;
}

main ()
{
	int x=20, y=30;
	
	scambia(&x,&y);
	printf("\nx vale %d", x);
	printf("\ny vale %d", y);
}
