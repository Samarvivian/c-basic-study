#define  _CRT_SECURE_NO_WARNINGS 1
//����ʾ�û��������룬��ȷ������
#include <stdio.h>
int main()
{
	//������룬δ����scanf��getchar�Ĺ���ԭ��
	/*char password[20];
	printf("���������룺");
	scanf("%s", password);
	printf("��ȷ�����룺��Y/N)");
	int ch = getchar();
	if ('Y' == ch)
	{
		printf("ȷ�ϳɹ�");
	}
	else
	{
		printf("ȷ��ʧ��");
	}*/

	//�Ľ�1
	//char password[20];
	//printf("���������룺");
	//scanf("%s", password);
	//printf("��ȷ�����룺��Y/N)");
	//getchar();//��������
	//int ch = getchar();
	//if ('Y' == ch)
	//{
	//	printf("ȷ�ϳɹ�");
	//}
	//else
	//{
	//	printf("ȷ��ʧ��");
	//}
	//return 0;

	//�Ľ�2
	//�������123456 abcdef
	char password[20] = { 0 };
	printf("���������룺");
	scanf("%s", password);
	printf("��ȷ�����룺��Y/N)");
	int tmp = 0;
	while ((tmp=getchar())!='\n')
	{
		;//������������ַ�
	}
	int ch = getchar();
	
	if ('Y' == ch)
	{
		printf("ȷ�ϳɹ�");
	}
	else
	{
		printf("ȷ��ʧ��");
	}

	//�ܽ᣺scanf������getchar������ʵ�ǲ���ô���õ�
	//�����Ľ��ĳ����У���Ҫ���û���������벻���пո����Ч


}