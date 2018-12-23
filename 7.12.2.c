//读取输入，读到“#”字符停止，程序打印每个输入的字符以及对应的ASCII码，每行打印8个“字符-ASCII码”组合。

#include <stdio.h>
int main(void)
{
	char ch;
	int j = 0;

	while ((ch = getchar()) != '\n')
	{
		printf("%c-%d  ", ch, ch);
		j++;
		if (j % 8 == 0)
			printf("\n");
	}
	//printf("%c-%d  ", '\n', '\n');
	return 0;
}

/*
vs2017下的输出如下

abcdefghijk
a-97  b-98  c-99  d-100  e-101  f-102  g-103  h-104
i-105  j-106  k-107
-10     

*/