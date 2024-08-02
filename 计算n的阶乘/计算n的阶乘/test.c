#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	//计算n的阶乘
	/*int i = 0;
	int j = 0;
	int ret = 1;
	scanf("%d", &i);
	for (j = 1; j <= i; j++)
	{
		ret *= j;
	}
	printf("%d", ret);
	return 0;*/

	//计算1！+2!+~+10!
	//算法1
	//int i = 0;
	//int j = 0;
	//int ret = 1;
	//int sum = 0;
	//for (i = 1; i <= 10; i++)
	//{
	//	ret = 1;//计算阶乘之前，要把ret初始化为1
	//	for (j = 1; j <= i; j++)
	//	{
	//		ret *= j;
	//	}
	//	sum += ret;
	//}
	//printf("%d", sum);

	//算法2，一层循环直接搞定
	int i = 0;
	int j = 0;
	int ret = 1;
	int sum = 0;
	for (i = 1; i <= 10; i++)
	{
		
		ret *= j;
		
		sum += ret;
	}
	printf("%d", sum);
	return 0;
}