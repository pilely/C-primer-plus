#include <stdio.h>
#define NAME "GIGATHINK, INC"
#define PLACE "Megapolis, CA 94904"
#define ADDRESS "101 Megabuck Plaze"
#define WIDTH 40

void statbar(void);  //����ԭ��

int main(void)
{
	statbar();    //��������
	printf("%s\n", NAME);
	printf("%s\n", ADDRESS);
	printf("%s\n", PLACE);
	statbar();

	return 0;
}

void statbar(void)   //��������
{
	for (int count = 1; count <= WIDTH; count++)
		putchar('*');
	putchar('\n');
}