#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
 int main(){
 	
 	int oreS[12][30];
 	int j,i,m,totore,media,segnamax,segnamin,max=0,min=999999999,com=0;
 		
	for(i=0;i<12;i++)
	{
		
		for(j=0;j<30;j++)
		{
			
			printf("Quante ore hai studiato nel %d giorno del %d mese\n",j+1,i+1);
			scanf("%d",&oreS[i][j]);
			
		}
		
		
	}
 		
		 	for(i=0;i<3;i++)
			{
				
					for(j=0;j<5;j++)
					{
						
						totore=totore+oreS[i][j];
						
					}
				
				
			}
	 		
	 					for(i=0;i<3;i++)
						{
				
							for(j=0;j<5;j++)
							{
								
								com=com+oreS[i][j];
								
							}
							media=com/30;
							printf("Il %d mese ha studiato in media mensile %d ore in una giornata\n",i+1,media);
							com=0;
						}
	 	
 								for(i=0;i<3;i++)
								{
				
									for(j=0;j<5;j++)
									{
										
										com=com+oreS[i][j];
										
									}
				
									if(max<com){
										
										max=com;
										segnamax=i;
									}
									else if(min>com){
										
										min=com;
										segnamin=i;
									}
									
								}
 								
 								printf("Il mese in qui ha studiato di piu è stato il %d con ben %d ore di studio\n",segnamax,max);
 								printf("Il mese in qui ha studiato di meno è stato il %d con ben %d ore di studio",segnamin,min);
 	return 0;
 }
