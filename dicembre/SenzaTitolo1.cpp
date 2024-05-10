#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
 int main()
 {
 	int v1[20]={1,2,3,4,5,6,7,8,9,10};
 	int v2[20]={6,1,8,9,10,11,12,13,14,15};
 	int v3[20];
 	int i,j,e=0,z=10,x=10,c=0,t=0;
 	
 	for(i=0;i<z;i++)    
    {
    	t=0;
        for(j=0;j<x;j++) 
        {
            if(v1[i]==v2[j])  
            {                                                                    
                t=1;
            }
        }
        if(t==0) 
        {
            v3[e]=v1[i];
            e++;
            c++;
        }
    }

	 
 	for(i=0;i<c;i++)
 	printf("\nIl vettore 3: %d ",v3[i]);
 	
 	
 	
 	return 0;
 }
