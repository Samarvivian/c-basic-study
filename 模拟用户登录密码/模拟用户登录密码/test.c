#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	char password[] = { 0 };
	//假设密码为wcl,只有3次机会
	printf("请输入密码：");
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		scanf("%s", password);
		if (strcmp(password, "wcl") == 0)
		{
			printf("输入正确\n");
			break;
		}
		else
		{
			printf("输入错误，重新输入:");
		}
	}
	if (i == 3)
	{
		printf("三次均不正确\n");
	}
	return 0;
}