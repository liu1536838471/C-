#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>//�����������ͷ�ļ�
#include<time.h>//ʱ�����ͷ�ļ�

//void menu()
//{
//	printf("*******************\n");
//	printf("****** 1.play *****\n");
//	printf("****** 0.exit *****\n");
//
//}
//void game()
//{
//	//��������Ϸ��ʵ��
//	//1.���������
//   int ret=	rand()%100+1;//%100��������0-99��Ȼ��+1��1-100
//
//   //2.������
//   int guess = 0;
//   while (1)
//   {
//	   printf("������:>");
//	   scanf("%d", &guess);
//	   if (guess>ret)
//	   {
//		   printf("�´���\n");
//	   }
//	   else if (guess < ret) {
//		   printf("��С��\n");
//	   }
//	   else
//	   {
//		   printf("�¶���\n");
//		   break;
//	   }
//   }
//
//
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));//ʱ���
//	do
//	{
//		menu();//��ӡ�˵�
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			break;
//		default:
//			printf("�����������������:\n");
//			break;
//		}
//
//
//	} while (input);
//
//	return 0;
//}