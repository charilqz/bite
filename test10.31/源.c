#define  _CRT_SECURE_NO_WARNINGS 1
//��������Ϸ
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void game()
{
	int ret = 0;
	int i = 0;
	int num = 0;
	//������ɲ�ͬ����
	srand((unsigned)(time(NULL)));
	ret = rand() % 101;
	printf("���ˣ���ʼ��Ϸ!\n");
	for (i = 0; i < 9; i++)
	{
		scanf("%d", &num);
	
		if (num < ret)
		{
			printf("��С�ˡ������\n");
			continue;
		}
		else if (num > ret)
		{
			printf("�´��ˣ������\n");
			continue;
		}
		else
		{
			printf("��ϲ�㣬�¶���\n");
		}
	}
	if (i == 9)
	{
		printf("���ź�����Ϸʧ��!");
	}
}
int main()
{
	int choose = 0;
	int i = 0;
	printf("�Ƿ�����������Ϸ��������1Ϊ������Ϸ������2Ϊ�˳���Ϸ��\n");
	scanf("%d", &choose);
	switch(choose)
	{
	  case 1:game();
		  break;
	  case 2:exit(0);
		  break;
	default:printf("�����"); break;
	}
    L:system("pause");
	system("cls");
	printf("�Ƿ����������Ϸ?��1���룬������˳�");
	scanf("%d", &i);
	if (i == 1)
		game();
	else exit(0);
	goto L;
	system("pause");
	return 0;
}






//������ɲ�ͬ������
//#include<stdio.h>
//#include<time.h>
//#include<stdlib.h>
//int main()
//{
//	int i;
//	srand((unsigned)(time(NULL)));
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", rand() % 100);
//	}
//	return 0;
//}


//#include<stdio.h>
//#include<time.h>
//#include<stdlib.h>
//int main()
//{
//	int i;
//	srand((unsigned)(time(NULL)));
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d\n", rand()%100);
//	}
//	return 0;
//} 