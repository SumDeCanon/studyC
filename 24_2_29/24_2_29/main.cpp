#define _CRT_SECURE_NO_WARNINGS 1

//将一个数组中的数字元素按奇数在前，偶数在后的顺序排序

#include<stdio.h>

void arr_odd(int arr[], int sz)
{
	int left = 0;
	int right = sz;
	while (left < right)
	{
		while (arr[left] % 2 == 1)
		{
			left++;
		}
		while (arr[right] % 2 == 0)
		{
			right--;
		}
		if (left < right)
		{
			int tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
			left++;
			right--;
		}
	}
}

int main()
{
	int arr[10] = { 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0;i < sz;i++)
	{
		scanf("%d", arr + i);
	}
	arr_odd(arr, sz);
	for (int i = 0;i < sz;i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}

