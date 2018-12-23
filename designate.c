#include <stdio.h>
#define MONTHS 12
int main(void)
{
	int days[MONTHS] = { 31, 28,[4] = 31, 30, 31,[1] = 29 };  //C99新特性：指定初始化器，可以在初始化列表中使用带方括号的下标指明待初始化的元素
	int i;

	for (i = 0; i < MONTHS; i++)
		printf("%2d  %d\n", i + 1, days[i]);

	return 0;
}