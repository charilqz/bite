#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//求平均数
//int main()
//{
//	int x;
//	double sum = 0;
//	int cnt = 0;
//	scanf("%d", &x);
//	while (x != -1)
//	{
//		sum += x;
//		cnt++;
//		scanf("%d", &x);
//	}
//	if (cnt > 0)
//	{
//		printf("%f\n", sum / cnt);
//	}
//	
//}//有问题




//求最大公约数
//int main()
//{
//	int a, b;
//	int min;
//	scanf("%d%d", &a, &b);
//	if (a > b)
//	{
//		min = b;
//	}
//	else
//	{
//		min = a;
//	}
//	int i;
//	int ret;
//	for (i = 1; i < min; i++)
//	{
//		if (a%i == 0)
//		{
//			if (b%i == 0)
//			{
//				ret = i;
//			}
//		}
//	}
//	printf("%d和%d的最大公约数是%d\n", a, b, ret);
//	return 0;
//}
//
//





//int main()
//{
//	int a, b;
//	int min;
//	scanf("%d%d", &a, &b);
//	if (a > b)
//	{
//		min = b;
//	}
//	else
//	{
//		min = a;
//	}
//	int i;
//	int ret;
//	for (i = 1; i < min; i++)
//	if (a%i == 0)
//	{
//		if (b%i == 0)
//		{
//			ret = i;
//		}
//	}
//	printf("%d和%d的最大公约数是%d\n", a, b, ret);
//	return 0;
//}








//分解正因子
//int main()
//{
//	int n, i;
//	printf("请输入整数：");
//	scanf("%d", &n);
//	printf("%d=", n);
//
//	for (i = 2; i <= n; i++)
//	{
//		while (n%i == 0)
//		{
//			printf("%d", i);
//			n /= i;
//			if (n != 0)
//			{
//				printf("*");
//			}
//		}
//	}
//	printf("\n");
//	return 0;
//}





//int main()
//{
//	int n, i;
//	printf("请输入整数：");
//	scanf("%d", &n);
//	printf("%d= ", n);
//	for (i = 2; i <= n; i++)
//	{
//		while (n%i == 0)
//		{
//			printf("%d", i);
//			n /= i;
//			if (n != 0)
//			{
//				printf("*");
//			}
//		}
//	}
//	printf("\n");
//	return 0;
//}






//void sum(int begin, int end)
//{
//	int i;
//	int sum = 0;
//	for (i = begin; i < end; i++)
//	{
//		sum += i;
//	}
//	printf("%d和%d的和是%d\n", begin, end, sum);
//}
//int main()
//{
//	
//	sum(10, 20);
//	sum(20, 30);
//	sum(40,50);
//	return 0;
//}