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
			printf("最大公约数为%d", a);
			break;
		}
	}*/

	//辗转相除法,不用考虑i与j的大小关系
	int i = 0;
	int j = 0;
	scanf("%d %d", &i, &j);
	int num = 0;
	while (num = i % j)
	{
		
		i = j;
		j = num;
	}
	printf("最大公约数为%d", j);
	return 0;
	//最小公倍数=i*j/最大公约数
}