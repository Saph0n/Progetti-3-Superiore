#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <stdio.h>
#include <string.h>
int main()
{

	int vet1[100];
	int vet2[10]; 
	int z, i, x, a;
	
	
	printf("Inserisci la quantita di numeri ");
	scanf("%d", &z);
	
	
	for(i=0;i<10;i++)
	{
		vet2[i]=0;
	}	
	
	
	for(i=0;i<z;i++)
	{
		printf("inserisci il numero: ");
		scanf("%d", &vet1[i]);
		
		if(vet1[i]>99)
		{
			printf("Il numero deve essere minore di 99");
			i--;
		}
			
			else
			{
				if(vet1[i]<10)
					vet2[0]++;
					
					else if(vet1[i]>9 && vet1[i]<20)
						vet2[1]++;
					
						else if(vet1[i]>19 && vet1[i]<30)
							vet2[2]++;
					
							else if(vet1[i]>29 && vet1[i]<40)
								vet2[3]++;
						
									else if(vet1[i]>39 && vet1[i]<50)
										vet2[4]++;
								
										else if(vet1[i]>49 && vet1[i]<60)
											vet2[5]++;
									
											else if(vet1[i]>59 && vet1[i]<70)
												vet2[6]++;
												
												else if(vet1[i]>69 && vet1[i]<80)
													vet2[7]++;
												
													else if(vet1[i]>79 && vet1[i]<90)
														vet2[8]++;
													
														else if(vet1[i]>89 && vet1[i]<100)
															vet2[9]++;
				}		
	}
	
i=0;
x=9;
	

	for(a=0;a<10;a++)
	{		
		if(i==0)
			printf("\nI numei  inferioni di 10 sono: %d", vet2[a]);
			
			else
				printf("\nnumeri compresi tra %d e %d sono: %d", i, x, vet2[a]);	
		
		i+=10;
		x+=10;
	}	
	

	return 0;
}
