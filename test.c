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
//	//���������
//	int rand_ret = rand()%100+1;
//	int guess;	
//	//������
//	while (1)
//	{
//		printf("�����֣�>");
//		scanf("%d", &guess);
//		if (guess > rand_ret)
//		{
//			printf("�´���");
//		}
//		else if (guess < rand_ret)
//		{
//			printf("��С��");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶���");
//			break;
//		}
//	}
//}
//int main()
//{
//	//��������Ϸ
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("��ѡ��>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("%�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//�ػ�����
int main()
{
	char input[10] = { 0 };
	system("shutdown -s -t 60");//syetemϵͳִ�к�����ִ��ϵͳ�ⲿ����
again:
	printf("���Խ���һ���Ӻ�ػ���������룺�������Ϳ���ȡ����ϵ\n�����룺");
	scanf("%s", input);
	if (0 == strcmp(input, "������"))
	{
		system("shudown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}
