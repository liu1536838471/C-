#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
//声明函数，意思就是告诉一下有这个函数
extern int Add(int x, int y);
//无法解析的外部符号 _Add，函数 _main 中引用了该符号	test_01
//D : \C语言\test_01\test_01\两个源文件之间的引用关系2.obj	1
//跟全局变量一样，加static关键字的只能在自己所在的源文件里面使用，不能在外部源文件使用，识别不了

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum=%d", sum);
//
//	return 0;
//
//}