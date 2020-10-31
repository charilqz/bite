#define  _CRT_SECURE_NO_WARNINGS 1
//猜数字游戏
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void game()
{
	int ret = 0;
	int i = 0;
	int num = 0;
	//随机生成不同数字
	srand((unsigned)(time(NULL)));
	ret = rand() % 101;
	printf("好了，开始游戏!\n");
	for (i = 0; i < 9; i++)
	{
		scanf("%d", &num);
	
		if (num < ret)
		{
			printf("猜小了。请继续\n");
			continue;
		}
		else if (num > ret)
		{
			printf("猜大了，请继续\n");
			continue;
		}
		else
		{
			printf("恭喜你，猜对了\n");
		}
	}
	if (i == 9)
	{
		printf("很遗憾，游戏失败!");
	}
}
int main()
{
	int choose = 0;
	int i = 0;
	printf("是否进入猜数字游戏？（输入1为进入游戏，输入2为退出游戏）\n");
	scanf("%d", &choose);
	switch(choose)
	{
	  case 1:game();
		  break;
	  case 2:exit(0);
		  break;
	default:printf("输错了"); break;
	}
    L:system("pause");
	system("cls");
	printf("是否继续进入游戏?按1进入，任意键退出");
	scanf("%d", &i);
	if (i == 1)
		game();
	else exit(0);
	goto L;
	system("pause");
	return 0;
}






//随机生成不同的数字
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