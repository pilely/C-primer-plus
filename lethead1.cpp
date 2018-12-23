#include <stdio.h>
#define NAME "GIGATHINK, INC"
#define PLACE "Megapolis, CA 94904"
#define ADDRESS "101 Megabuck Plaze"
#define WIDTH 40

void statbar(void);  //函数原型

int main(void)
{
	statbar();    //函数调用
	printf("%s\n", NAME);
	printf("%s\n", ADDRESS);
	printf("%s\n", PLACE);
	statbar();

	return 0;
}

void statbar(void)   //函数定义
{
	for (int count = 1; count <= WIDTH; count++)
		putchar('*');
	putchar('\n');
}