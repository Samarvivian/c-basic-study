#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int num = 7;//Ҫ���ҵ�Ԫ��
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;
	
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] < num)
		{
			left = mid + 1;

		}
		else if (arr[mid] > num)
		{
			right = mid - 1;
		}
		else
		{
			printf("�ҵ��ˣ��±�Ϊ%d", mid);
			break;//һ��Ҫ�ǵ��˳�ѭ��
		}
	}
	if (left > right)
	{
		printf("�Ҳ���");
	}
	return 0;
}