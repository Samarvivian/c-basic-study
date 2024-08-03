#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");
	
	
again:
	printf("电脑即将关机，请输入wcl:");
	scanf("%s", input);
	if (strcmp(input, "wcl") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;

	//不知道为什么运行时说
	//'shutdown' 不是内部或外部命令，也不是可运行的程序或批处理文件
	//我还是菜鸡时写出这个程序还是可以运行的
	//看了半天也不知道哪里出现了bug
	//就这样吧
}