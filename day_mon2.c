#include <stdio.h>
int main(void)
{
	const int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};  //�ñ���������Ԫ�ظ���
	int index;

	for (index = 0; index < sizeof days / sizeof days[0]; index++)
		printf("Month %2d has %d days.\n", index+1, days[index]);
	//sizeof���������������Ĵ�С�����ֽ�Ϊ��λ���� ����sizeof days�����������С�����ֽ�Ϊ��λ��
	//sizeof days��0����������һ��Ԫ�صĴ�С�����ֽ�Ϊ��λ�������������С���Ե���Ԫ�صĴ�С��������Ԫ�صĸ���

	return 0;
}