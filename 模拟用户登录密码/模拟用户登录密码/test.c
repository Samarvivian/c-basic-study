#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	char password[] = { 0 };
	//��������Ϊwcl,ֻ��3�λ���
	printf("���������룺");
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		scanf("%s", password);
		if (strcmp(password, "wcl") == 0)
		{
			printf("������ȷ\n");
			break;
		}
		else
		{
			printf("���������������:");
		}
	}
	if (i == 3)
	{
		printf("���ξ�����ȷ\n");
	}
	return 0;
}