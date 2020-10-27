#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//正整数分解质因
int main()
{
	int n, i;
	
	printf("请输入整数: ");
	scanf("%d", &n);
	printf("%d=", n);
	
	for(i = 2; i <= n; i++)
	{
		while (n%i==0)
		{
			printf("%d", i);
			n /= i;
			if (n!=1)
			
				printf("*");
			
		}
	}
	printf("\n");
	return 0;
}












//int main()
//{
//	int i, j;
//	int max = 0;
//	scanf("%d%d", &i, &j);
//	if (i < j)
//	{
//		max = j;
//		printf("max=%d", j);
//	}
//	else
//	{
//		max = i;
//		printf("max=%d", i);
//	}
//
//	
//	return 0;
//}
//		
//	
//		
//		
//		
	
	
	
	
	











//int main()
//{
//	int i = 0;
//	int sum = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += i;
//		
//	}
//	printf("sum=%d", sum);
//	return 0;
//		
		
		
	












//int main()
//{
//	int i, j, result;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			result = i*j;
//			printf("%d*%d=%-3d", i, j, result);
//			
//		}
//		printf("\n");
//	}
//	
//	return 0;
//}
//int main()
//{
//	int i, j, result;
//	for (i = 1; i < 10; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			result = i*j;
//			printf("%d*%d=%-3d", i, j, result);
//		}
//		printf("\n");
//	}
//	return 0;
//}