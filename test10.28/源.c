#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//函数的声明
//int Add(int x,int y)
//函数的定义
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
#include"add.h"
int main()
{
	int a = 10;
	int b = 20;
	int sum = 0;
	//函数的调用
	sum = Add(a, b);
	printf("%d\n", sum);
	return 0;
}















//int binary_search(int arr[], int k, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		
//		else if (arr[mid]>k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//
//			return mid;
//		}
//	}
//	return -1;
//}
////找数字的下标
//int main()
//{//二分法
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k,sz);
//	if (ret == -1)
//	{
//		printf("找不到指定的数字\n");
//	}
//	else
//		printf("找到了，下标是: %d\n", ret);
//	return 0;
//}



int is_leap_year(int y)
{
	if ((y % 4 == 0 && y % 100 != 0) ||( y % 400 == 0))
		return 1;
	else
		return 0;
}

int main()
{
	int year = 0;
	for (year = 1000; year <= 2000; year++)
	{
		if (1 == is_leap_year(year))
			printf("%d ", year);
	}
	return 0;
}















//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j < n; j++)
//	{
//		if (n%j == 0)
//			return 0;
//		
//	}return 1;
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i)//添加上不要忘记 == 1)
//			printf("%d ", i);
//	}
//	return 0;
//}
//
//
//







//void Swap(int *pa, int*pb)
//{
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int tmp = 0;
//	printf("a=%d,b=%d\n", a, b);
//	Swap(&a, &b);
//	printf("a=%d,b=%d\n", a, b);
//	return 0;
//}