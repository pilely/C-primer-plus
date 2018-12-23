//创建一个包含26个元素的数组， 并在其中存放26个小写字母
#include <stdio.h>
#define num 26
int main(void)
{
	char ch[num];
	int i;

	for (i = 0; i < num; i++)
		ch[i] = 'a' + i;
	for (i = 0; i < num; i++)
		printf("%c", ch[i]);

	return 0;
}