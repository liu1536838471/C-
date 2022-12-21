#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
//全局变量范围作用于整个工程，可以在另一个源文件里面声明使用
int g_val = 2022;
//int main()
//{
//	printf("1:%d\n", g_val);
//	{
//		printf("2:%d\n", g_val);
//	}
//	
//	printf("3:%d\n", g_val);
//	return 0;
//
//}
//变量的生命周期：变量创建和销毁之间
//局部变量的生命周期：进入局部范围生命周期开始，出局部范围生命周期结束
//全局变量的生命周期：程序的生命周期

//常量
