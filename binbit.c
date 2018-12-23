//程序读取用户输入的整数， 将该整数和一个字符串地址传递给itobs（）函数， 然后， 该函数使用位运算计算得出正确的1和0的组合， 并将其放入字符串中
#include <stdio.h>
#include <limits.h>   //提供CHAR_BIT的定义， 表示每字节的位数
char * itobs(int, char *);
void show_bstr(const char *);

int main(void)
{
	char bin_str[CHAR_BIT * sizeof(int) + 1];  //CHAR_BIT * sizeof(int)表示int类型的位数， +1是留一个位置给末尾
	int number;

	puts("Enter integers and see them in linary");
	puts("Non-numeric input terminates program.");
	while (scanf_s("%d", &number) == 1)
	{
		itobs(number, bin_str);
		printf("%d is ", number);
		show_bstr(bin_str);
		putchar('\n');
	}
	puts("Bye!");
	
	return 0;
}

char * itobs(int n, char *ps)
{
	int i;
	const static int size = CHAR_BIT * sizeof(int);  //int是4字节， 32位二进制， 所以此处size等于32

	for (i = size - 1; i >= 0; i--, n >>= 1)
		ps[i] = (1 & n) + '0';
	ps[size] = '\0';

	return ps;
}

void show_bstr(const char * str)
{
	int i = 0;

	while (str[i])
	{
		putchar(str[i]);
		if (++i % 4 == 0 && str[i])
			putchar(' ');
	}
}