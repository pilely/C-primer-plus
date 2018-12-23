#include <stdio.h>
#include <string.h>
int main(void)
{
	char a[10];
	char b[10];

	printf("Enter your last name: ");
	scanf("%s", a);
	printf("Enter your first name: ");
	scanf("%s", b);

	printf("%s %s\n", a, b);
	printf("%7d %8d\n", strlen(a), strlen(b));
	printf("%s %s\n", a, b);
	printf("%-7d %-9d\n", strlen(a), strlen(b));


	return 0;
}