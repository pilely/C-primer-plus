//����һ������26��Ԫ�ص����飬 �������д��26��Сд��ĸ
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