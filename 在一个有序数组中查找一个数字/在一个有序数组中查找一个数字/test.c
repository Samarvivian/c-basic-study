#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int num = 7;//要查找的元素
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
			printf("找到了，下标为%d", mid);
			break;//一定要记得退出循环
		}
	}
	if (left > right)
	{
		printf("找不到");
	}
	return 0;
}