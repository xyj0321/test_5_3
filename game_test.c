#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//void menu()
//{
//	printf("*******************************\n");
//	printf("****1. paly      2. exit  *****\n");
//	printf("*******************************\n");
//}
//void game()
//{
//	//生成随机数
//	int rand_ret = rand()%100+1;
//	int guess;	
//	//猜数字
//	while (1)
//	{
//		printf("猜数字：>");
//		scanf("%d", &guess);
//		if (guess > rand_ret)
//		{
//			printf("猜大了");
//		}
//		else if (guess < rand_ret)
//		{
//			printf("猜小了");
//		}
//		else
//		{
//			printf("恭喜你，猜对了");
//			break;
//		}
//	}
//}
//int main()
//{
//	//猜数字游戏
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("请选择：>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("%退出游戏\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//关机程序
int main()
{
	char input[10] = { 0 };
	system("shutdown -s -t 60");//syetem系统执行函数，执行系统外部命令
again:
	printf("电脑将在一分钟后关机，如果输入：我是猪，就可以取消关系\n请输入：");
	scanf("%s", input);
	if (0 == strcmp(input, "我是猪"))
	{
		system("shudown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}
