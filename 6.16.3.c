#include <stdio.h>
int main(void)
{
	int i, j;
	for (i = 0; i < 5; i++)
	{
		for (j = 4-i; j < 5; j++)
			printf("$");
		printf("\n");
	}

	return 0;
}