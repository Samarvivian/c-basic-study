#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	//����n�Ľ׳�
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

	//����1��+2!+~+10!
	//�㷨1
	//int i = 0;
	//int j = 0;
	//int ret = 1;
	//int sum = 0;
	//for (i = 1; i <= 10; i++)
	//{
	//	ret = 1;//����׳�֮ǰ��Ҫ��ret��ʼ��Ϊ1
	//	for (j = 1; j <= i; j++)
	//	{
	//		ret *= j;
	//	}
	//	sum += ret;
	//}
	//printf("%d", sum);

	//�㷨2��һ��ѭ��ֱ�Ӹ㶨
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