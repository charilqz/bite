#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int arr[]={1, 2, 3, 4, 5, 6, 7};
	printf("%p\n", arr);
	printf("%p\n", &arr[0]);
	return 0;



//�Ż���ð�ݺ���
//void bubble_sort(int arr[],int  sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//        int flag = 1;//��������������
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



//ð�ݺ����÷�
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//ÿ��ð������
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
//		printf("%d ", arr[i]);//arr[i]��˼�������ַ����е�һ��
//	}
//	return 0;
//}














//��ά����Ĵ���
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





//��ά����ĳ�ʼ��
//int arr[3][4] = { 1, 2, 3, 4 };
//int arr[3][4] = { { 1, 2 }, { 3, 4 } };
//int arr[][4] = { { 2, 3 },{ 4, 5 } };












// int arr[3][4]//����3��4��
//char arr[3][4];
//double arr[2][4];

//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);//�����ַ����ĸ���
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		//printf("%d", arr[i]);
//		printf("&arr[%d]=%p\n", i, &arr[i]);//��ӡ�ַ�������ķ�ʽ
//	}//16���ƣ�abcdef����10-15
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
//		printf("%c ", arr[i]);//%c��������ַ���
//	}
//	return 0;
//}
//
//







//һά����Ĵ����ͳ�ʼ��
//�ܽ᣺1.strlen��sizeofû��ʲô����
      //2.�����ַ����ĳ���-ֻ������ַ����󳤶�-�⺯��-ʹ��ͷ�ļ�
      //3.sizeof������������飬���ʹ�С-��λ���ֽ�-������


//int main()
//{
//	char arr4[] = "abcdef";
//	printf("%d\n", sizeof(arr4));
//	//sizeof����arr4��ռ�Ŀռ�Ĵ�С
//	printf("%d\n",strlen(arr4));
//	//strlen���ַ����ĳ��ȡ���'\0'֮ǰ���ַ����ĸ���
//	return 0;
//}



//int main()
//{
//	int arr[10] = { 1, 2, 3 };//����ȫ��ʼ����ʣ�µ�Ԫ��Ĭ�ϳ�ʼ��Ϊ0
//	char arr2[5] = { 'a', 'b' };
//	char arr3[5] = "ab";
//	return 0;
//}
