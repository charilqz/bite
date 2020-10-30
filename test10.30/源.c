#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int arr[]={1, 2, 3, 4, 5, 6, 7};
	printf("%p\n", arr);
	printf("%p\n", &arr[0]);
	return 0;



//优化版冒泡函数
//void bubble_sort(int arr[],int  sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//        int flag = 1;//假设数列已有序
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j]>arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//
//	}
//}
//int main()
//{
//	int i = 0;
//	int arr[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//
//	}
//		return 0;
//	
//}



//冒泡函数用法
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//每趟冒泡排序
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j]>arr[j+1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);//arr[i]意思是任意字符串中的一个
//	}
//	return 0;
//}














//二维数组的创建
//int main()
//{
//	int arr[3][4] = { { 1, 2, 3 }, { 4, 5 } };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr[%d][%d]=%p\n", i, j, &arr[i][j]);
//		}
//	}
//	return 0;
//}





//二维数组的初始化
//int arr[3][4] = { 1, 2, 3, 4 };
//int arr[3][4] = { { 1, 2 }, { 3, 4 } };
//int arr[][4] = { { 2, 3 },{ 4, 5 } };












// int arr[3][4]//代表3行4列
//char arr[3][4];
//double arr[2][4];

//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算字符串的个数
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		//printf("%d", arr[i]);
//		printf("&arr[%d]=%p\n", i, &arr[i]);//打印字符串储存的方式
//	}//16进制：abcdef代表10-15
//	return 0;
//}




//int main()
//{
//	char arr[] = "abcdef";
//	int i = 0; 
//	int len = strlen(arr);
//	//for (i = 0; i < 6; i++)
//	for (i = 0; i < len;i++)
//	{
//		printf("%c ", arr[i]);//%c用于输出字符串
//	}
//	return 0;
//}
//
//







//一维数组的创建和初始化
//总结：1.strlen和sizeof没有什么关联
      //2.是求字符串的长度-只能针对字符串求长度-库函数-使用头文件
      //3.sizeof计算变量，数组，类型大小-单位是字节-操作符


//int main()
//{
//	char arr4[] = "abcdef";
//	printf("%d\n", sizeof(arr4));
//	//sizeof计算arr4所占的空间的大小
//	printf("%d\n",strlen(arr4));
//	//strlen求字符串的长度——'\0'之前的字符串的个数
//	return 0;
//}



//int main()
//{
//	int arr[10] = { 1, 2, 3 };//不完全初始化，剩下的元素默认初始化为0
//	char arr2[5] = { 'a', 'b' };
//	char arr3[5] = "ab";
//	return 0;
//}
