#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
//int main() {
//
//	int a = 10;
//	int b = 20;
//	//函数的声明,是告诉又这个函数
//	int Add(int, int);
//
//	int c=Add(a, b);       //这种情况下调用Add不行，会报错，因为编译器从上往下扫描，没有发现Add函数，所以要
//	                       //声明一下
//	printf("%d\n", c);
//
//	return 0;
//}
//函数的定义
//int Add(int x, int y) {
//
//	return x + y;
//}


//一般来说，一些库函数的声明都放在头文件里面，而对应的函数定义或者叫函数实现都放在对应的.c文件中，
//所以我们一般用的#include<.h>要使用的函数就是代表声明一下告诉编译器有