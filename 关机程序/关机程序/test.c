#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");
	
	
again:
	printf("���Լ����ػ���������wcl:");
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

	//��֪��Ϊʲô����ʱ˵
	//'shutdown' �����ڲ����ⲿ���Ҳ���ǿ����еĳ�����������ļ�
	//�һ��ǲ˼�ʱд����������ǿ������е�
	//���˰���Ҳ��֪�����������bug
	//��������
}