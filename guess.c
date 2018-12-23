#include <stdio.h>
int main(void)
{
	int guess = 1;
	char respond;

	printf("Enter an integer from 1-100, I will try to guess it.\n");
	printf("Respond with a y if my guess is right and with an n if it is wrong.\n");
	printf("Um...is your number %d?\n", guess);

	while ((respond = getchar()) != 'y')
	{
		if (respond == 'n')
			printf("Well, then, is it %d\n", ++guess);
		else
			printf("Sorry, I understand only y or n.\n");
		while (getchar() != '\n')
			continue;
	}
	printf("I knew I could do it!\n");
	return 0;
}