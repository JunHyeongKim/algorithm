#include <stdio.h>
int main()
{

	int i, j;
	int A[i][j];

	for (i=0; i<5; i++)
	{

		for (j = 0; j < 5; j++)
		{

			A[i][j] = j + 1;
			printf("%d", A[i][j]);

		}

		printf("\n");

	}
	
	return 0;
}
