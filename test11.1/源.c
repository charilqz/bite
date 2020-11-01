#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//复习





//判断是否闰年
//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j < n; j++)
//	{
//		if (n%j == 0)
//			return 0;
//	}return 1;
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++);
//	{
//		if (is_prime(i))
//			printf("%d ", i);
//	}
//	return 0;
//}


	
//

//int main()
//{
//	int year = 0;
//	int ret = is_leap_year;
//	for (year = 1000; year <= 2000; year++)		printf("%d ", year);
//	}int is_leap_year(int y)
//{
//	if ((y % 4 == 0 && y % 400 != 0 || (y % 400 == 0))
//		return 1;
//	else
//		return 0;
//
//}
//	return 0;
//}
//int is_leap_year(int y)
//{
//	if ((y % 4 == 0) && y % 400 != 0 || (y % 100 == 0))
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (1 == is_leap_year(year))
//			printf("%d ", year);
//	}
//	return 0;
//}




//找数字下标（二分法）
//int bingary_search(int arr[], int k, int sz)
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
//		else if (arr[mid]>k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//
//			return mid;
//		}
//	
//	}
//	return -1;
//
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9,10};
//	int k = 7;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	int ret = binary_search(arr, k,sz);
//	if (ret == -1)
//	{
//		printf("找不到指定的数字\n");
//	}
//	else
//	
//
//		printf("找到了，下标是: %d\n", ret);
//	
//	return 0;
//
//}
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






//斐波那契数列
//int Fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		 return Fib(n - 1) + Fib(n - 2);
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d",&n);
//	ret = Fib(n);
//	printf("ret=%d\n", ret);
//	return 0;
//
//}

//int Facl(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i<=n; i++);
//	{
//		ret *= i;
//	}
//	return ret;
//
//}
//int main()
//{
//	int ret = 0;
//	int n = 0;
//	scanf("%d", &n);
//	ret = Facl(n);
//	printf("%d\n", ret);
//	return 0;
//	
//}
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n/10);
//	}
//	printf("%d", n % 10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	print(num);
//	return 0;
//}

//void Swap(int *pa, int *pb)
//{
//	int tmp = 0;
//	tmp = *pa;
//    *pa = *pb;
//	*pb = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a=%d b=%d\n", a, b);
//	Swap(&a, &b);
//	printf("a=%d,b=%d\n", a, b);
//	return 0;
//}





//函数求字符串长度
//int my_strlen(char*arr[])
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}//有问题



//非函数求字符串长度
//#include<string.h>
//int main()
//{
//	char arr[] = "bit";
//	int len = strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}





//int arr[3][4] = { 1, 2, 3, 4 };
//int arr[][4] = { { 1, 2 }, { 3, 4 } };




//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int tmp = 0;
//		int j = 0;
//		int flag = 1;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j]>arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];//arr不是整形
//			    arr[j + 1] = tmp;
//				flag = 0;//没有顺序的时候
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//
//	}
//
//
//}
//int main()
//{
//	int i = 0;
//	int arr[] = {0,1,2,3,4,5,6,7,8,9};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);//冒泡函数
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//





//#include<stdio.h>
//#include<time.h>
//#include<stdlib.h>
//void game()
//{
//	int ret = 0;
//	int i = 0;
//	int num = 0;
//	srand((unsigned)(time(NULL)));
//	ret = rand() % 101;
//	printf("开始游戏\n");
//	for (i = 0; i < 9; i++)
//	{
//		scanf("%d",&num);
//		if (num < ret)
//		{
//			printf("猜小了,请继续\n");
//			continue;
//		}
//		else if (num>ret)
//		{
//			printf("猜大了,请继续\n");
//			continue;
//		}
//		else
//			printf("猜对了\n");
//
//	}
//	if (i == 9)
//	{
//		printf("猜数失败");
//	}
//}
//int main()
//{
//	int i = 0;
//	int choose = 0;
//	printf("是否进入游戏？（输入1为进入游戏，输入2为退出游戏\n");
//	scanf("%d", &choose);
//	switch (choose)
//	{
//	case 1:game();
//		break;
//	case 2:exit(0);
//		break;
//	default:printf("输错了"); break;
//	}
//	return 0;
//}
