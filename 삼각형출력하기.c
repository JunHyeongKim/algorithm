#include <stdio.h>
int main()
{
	
	
	int i = 0 , j = 0;
	
	for (i=1; i<=16; i++)
	{
		
		for (j=1; j<i; j++)
		{
			
			printf("%d ",j);
			
		}
		
		printf("\n");
	}
	
	return 0;
} 
