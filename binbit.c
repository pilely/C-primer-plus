//�����ȡ�û������������ ����������һ���ַ�����ַ���ݸ�itobs���������� Ȼ�� �ú���ʹ��λ�������ó���ȷ��1��0����ϣ� ����������ַ�����
#include <stdio.h>
#include <limits.h>   //�ṩCHAR_BIT�Ķ��壬 ��ʾÿ�ֽڵ�λ��
char * itobs(int, char *);
void show_bstr(const char *);

int main(void)
{
	char bin_str[CHAR_BIT * sizeof(int) + 1];  //CHAR_BIT * sizeof(int)��ʾint���͵�λ���� +1����һ��λ�ø�ĩβ
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
	const static int size = CHAR_BIT * sizeof(int);  //int��4�ֽڣ� 32λ�����ƣ� ���Դ˴�size����32

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