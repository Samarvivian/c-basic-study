#define  _CRT_SECURE_NO_WARNINGS 1
//先提示用户输入密码，再确认密码
#include <stdio.h>
int main()
{
	//错误代码，未考虑scanf与getchar的工作原理
	/*char password[20];
	printf("请输入密码：");
	scanf("%s", password);
	printf("请确认密码：（Y/N)");
	int ch = getchar();
	if ('Y' == ch)
	{
		printf("确认成功");
	}
	else
	{
		printf("确认失败");
	}*/

	//改进1
	//char password[20];
	//printf("请输入密码：");
	//scanf("%s", password);
	//printf("请确认密码：（Y/N)");
	//getchar();//清理缓冲区
	//int ch = getchar();
	//if ('Y' == ch)
	//{
	//	printf("确认成功");
	//}
	//else
	//{
	//	printf("确认失败");
	//}
	//return 0;

	//改进2
	//如果输入123456 abcdef
	char password[20] = { 0 };
	printf("请输入密码：");
	scanf("%s", password);
	printf("请确认密码：（Y/N)");
	int tmp = 0;
	while ((tmp=getchar())!='\n')
	{
		;//清理缓冲区多个字符
	}
	int ch = getchar();
	
	if ('Y' == ch)
	{
		printf("确认成功");
	}
	else
	{
		printf("确认失败");
	}

	//总结：scanf函数与getchar函数其实是不怎么有用的
	//在最后改进的程序中，还要求用户输入的密码不能有空格才有效


}