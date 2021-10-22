#include <stdio.h>

void main_7_9()
{
	int array5[5][5] = {
		{ 1, '\0', '\0', '\0', '\0'},
		{ 1, 2, '\0', '\0', '\0' },
		{ 1, 2, 3, '\0', '\0' },
		{ 1, 2, 3, 4, '\0' },
		{ 1, 2, 3, 4, 5 }

	};
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			printf(" %d ", array5[i][j]);
		}
		printf("\n");

	}
	return 0;
}