#include <stdio.h>
int main(void)
{
	int n;
	int ct_even = 0;
	double sumeven = 0.0;
	int ct_odd = 0;
	double sumodd = 0.0;
	
	while (scanf("%d", &n) == 1 && n != 0)
	{
		if (n % 2 == 0)
		{
			sumeven += n;
			++ct_even;
		}
		else
		{
			sumodd += n;
			++ct_odd;
		}
	}
	printf("Number of evens: %d", ct_even);
	if (ct_even > 0)
		printf("Average: %g", sumeven / ct_even);
	putchar('\n');

	printf("Number of odd: %d", ct_odd);
	if (ct_odd > 0)
		printf("The average: %g", sumodd / ct_odd);
	putchar('\n');
	printf("\nDone\n");

	return 0;
}