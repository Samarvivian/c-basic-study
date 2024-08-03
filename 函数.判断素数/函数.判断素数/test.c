#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int is_prime(int i)
{
	int a = 0;
	for (a = 2; a <= sqrt(i); a++)
	{
		if (i % a == 0)
		{
			return 1;
		}
	}
	return 0;
}
int main()
{
	int x = 0;
	scanf("%d", &x);
	int flag = is_prime(x);
	if (flag)
	{
		printf("%d不是素数\n", x);
	}
	else
	{
		printf("%d是素数\n", x);
	}
	return 0;
}