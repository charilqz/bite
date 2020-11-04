#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int is_Prime(int n)
{
	int j = 0;
	for (j = 2; j < n; j++)
	{
		if (n%j == 0)
			return 0;
	}return 1;
}
int main()
{
	int i = 0;
	for (i = 100; i <= 200; i++)
	{
		if (is_Prime(i))
		{
			printf("%d", i);
		}
	}return 0;
}
//int main()
//{
//	int n, i;
//	scanf("%d", &n);
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
//	return 0;
//}
//


//int main()
//{
//	int a, b;
//	int min;
//	scanf("%d%d", &a, &b);
//	if ( a>b )
//	{
//		min = a;
//	}
//	else
//	{
//		min = b;
//	}
//	int ret;
//	int i;
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
//
//}

//int main()
//{
//	int num = 0;
//	printf("  n  n cubed\n");
//	for (num = 0; num <= 6; num++)
//	{
//		printf("%5d %5d\n", num, num*num*num);
//
//	}
//	return 0;
//}



//int main()
//{
//	int c = 9;
//	int b = c % 8;
//	int d = c & 7;
//	printf("%b%d", b, d);
//		return 0;
//}



//int main()
//{
//	int jane,tarzan,cheeta;
//	cheeta = tarzan = jane = 68;//三重赋值
//	printf("                  cheeta  tarzan  jane\n");
//	printf("First round score %4 %8d %8\n", cheeta, tarzan, jane);
//	return 0;
//}





//#define PRAISE "You are an extraordinary being."
//int main()
//{
//	char name[40];
//	printf("What is you name?");
//	scanf("%s",name);
//	printf("Hello, %s. %s\n", name, PRAISE);
//	return 0;
//}