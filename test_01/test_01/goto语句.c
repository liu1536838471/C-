#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//int main()
//{  flag:
//	printf("hehe\n");
//	printf("hehe\n");   //goto后面的flag会找到对应的flag继续执行下去，goto只能在一个函数范围内跳转，不能跨函数
//	goto flag;
//	return 0;
//}



 //关机程序，只要运行起来，电脑就在一分钟内关机，如果输入：我是猪，就取消关机

//shutdown -s -t 60 //关机命令
//shutdown -a      //取消关机命令
//int main()
//{
//	//关机
//	//C语言提供了一个函数:system()-执行系统命令的
//	system("shutdown -s -t 180"); //system-stdlib.h
//	char input[20] = { 0 };
//	again:
//	printf("请注意，你的电脑在一分钟内关机，如果输入：我是猪，就取消关机\n");
//	
//	
//	scanf("%s", input);
//	if ((strcmp(input,"我是猪"))==0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//
//	return 0;
//}