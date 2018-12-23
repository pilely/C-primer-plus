#include <stdio.h>
int main(void)
{
	int i, j;

	printf("This program computes moduli.\n");
	printf("Enter an integer to serve as the second operand: ");
	scanf("%d", &i);
	printf("Now enter the first operand: ");
	scanf("%d", &j);
	while (j > 0)
	{
		printf("%d\n", j % i);
		printf("Enter next value: ");
		scanf("%d", &j);
	}
	printf("Done");
	
	return 0;
}
