#include <stdio.h>
int main(void)
{
	const int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};  //让编译器计算元素个数
	int index;

	for (index = 0; index < sizeof days / sizeof days[0]; index++)
		printf("Month %2d has %d days.\n", index+1, days[index]);
	//sizeof给出它的运算对象的大小（以字节为单位）， 所以sizeof days是整个数组大小（以字节为单位）
	//sizeof days【0】是数组中一个元素的大小（以字节为单位），整个数组大小除以单个元素的大小就是数组元素的个数

	return 0;
}