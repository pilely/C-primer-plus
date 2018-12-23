#include <stdio.h>
int main(void)
{
	char ch;
	int i, j, k;
	i = j = k = 0;
	
	while ((ch = getchar()) != '#')
	{
		if (ch == ' ')
			i++;
		else if (ch == '\n')
			j++;
		else
			k++;
	}
	printf("%d %d %d\n", i, j, k);

	return 0;
}