//此程序存在的问题：在程序提示输入第二组数据的时候，还没输入的时候，程序就推出了
//原因是输入行中紧跟在数字后面的换行符，scanf函数把这个换行符留在队列中， getchar不会跳过换行符，所以在下一轮迭代的时候， getchar读取了换行符，赋值给了ch，结束了循环。

#include <stdio.h>
void display(char cr, int lines, int width);
int main(void)
{
	int ch;
	int rows, cols;
	printf("Enter a character and two integers: \n");
	while ((ch = getchar()) != '\n')
	{
		scanf("%d %d", &rows, &cols);
		display(ch, rows, cols);
		printf("Enter another character and two integers;\n");
		printf("Enter a newline to quit.\n");
	}
	printf("Bye!\n");

	return 0;
}

void display(char cr, int lines, int width)
{
	int row, col;

	for (row = 1; row <= lines; row++)
	{
		for (col = 1; col <= width; col++)
			putchar(cr);
		putchar('\n');
	}
}