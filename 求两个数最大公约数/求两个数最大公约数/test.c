#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	/*int i = 0;
	int j = 0;
	scanf("%d %d", &i, &j);
	int min = i < j ? i : j;
	int a = 0;
	for (a = min; a >= 1; a--)
	{
		if (i % a == 0 && j % a == 0)
		{
			printf("���Լ��Ϊ%d", a);
			break;
		}
	}*/

	//շת�����,���ÿ���i��j�Ĵ�С��ϵ
	int i = 0;
	int j = 0;
	scanf("%d %d", &i, &j);
	int num = 0;
	while (num = i % j)
	{
		
		i = j;
		j = num;
	}
	printf("���Լ��Ϊ%d", j);
	return 0;
	//��С������=i*j/���Լ��
}