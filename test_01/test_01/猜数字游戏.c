#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>//生成随机数的头文件
#include<time.h>//时间戳的头文件

//void menu()
//{
//	printf("*******************\n");
//	printf("****** 1.play *****\n");
//	printf("****** 0.exit *****\n");
//
//}
//void game()
//{
//	//猜数字游戏的实现
//	//1.生成随机数
//   int ret=	rand()%100+1;//%100的余数是0-99，然后+1：1-100
//
//   //2.猜数字
//   int guess = 0;
//   while (1)
//   {
//	   printf("猜数字:>");
//	   scanf("%d", &guess);
//	   if (guess>ret)
//	   {
//		   printf("猜大了\n");
//	   }
//	   else if (guess < ret) {
//		   printf("猜小了\n");
//	   }
//	   else
//	   {
//		   printf("猜对了\n");
//		   break;
//	   }
//   }
//
//
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));//时间戳
//	do
//	{
//		menu();//打印菜单
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			break;
//		default:
//			printf("输入错误，请重新输入:\n");
//			break;
//		}
//
//
//	} while (input);
//
//	return 0;
//}