#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void menu()
{
	printf("*******************\n");
	printf("****   1.guess ****\n");
	printf("****   0.exit  ****\n");
	printf("*******************\n");
}
void game()
{
	//生成随机数
	int ret = 0;
	ret = rand() % 100 + 1;
	//猜数字
	int guess = 0;
	printf("请输入数字：");
	
	while (1)
	{
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("猜大了\n");
		}
		else if (guess < ret)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("恭喜你猜对了\n");
			break;
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)(time(NULL)));
	do {
		menu();
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出\n");
			break;
		default:
			printf("选择错误，请重新选择\n");
			break;
		}
	} while (input);

	return 0;
}