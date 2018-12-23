/*
#include <stdio.h>
int main(void)
{
	char ch;
	int j = 0;

	while ((ch = getchar()) != '#')
	{
		if (ch == '.')
		{
			ch = ' !';
			j++;
		}
		if (ch == '!')
		{
			ch = '!!';
			j++;
		}
	}

	printf("%c %d", ch,j);

	return 0;
}
*/

#include <stdio.h>
int main(void)
{
	char ch;
	int ct1 = 0;
	int ct2 = 0;

	while ((ch = getchar()) != '#')
	{
		switch (ch)
		{
		case '.':
			putchar('!'); 
			ct1++; 
			break;
		case '!':
			putchar('!');
			putchar('!');
			ct2++;
			break;
		default:putchar(ch);
		}
	}
	printf("%d replacement of \n", ct1);
	printf("%d", ct2);

	return 0;
}