#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void Swap(int* x, int* y)
{
	int z = 0;
	z = *x;
	*x = *y;
	*y = z;
}
int main()
{
	int a = 10;
	int b = 20;
	printf("a=%d b=%d\n", a, b);
	Swap(&a, &b);
	printf("a=%d b=%d", a, b);
	return 0;
}