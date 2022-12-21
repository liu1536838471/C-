#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
//int main()
//{
//	int a = 10;//a在内存中分配4个字节
//	printf("%p\n", &a);//%p专门用来打赢地址的，&为取址符号
//
//	int* pa = &a;//pa是用来存放地址的，在C语言中pa叫指针变量
//	//*说明pa是指针变量
//	//int 说明pa执行的对象是int类型的
//	char ch = 'w';
//	char* pc = &ch;
//
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	//指针就是地址
//	int* pa = &a;
//	*pa= 20;//*解引用操作，*pa就是通过pa里面存储的地址，找到a，换言之就是*pa=a；
//	//指针指向的是第一个字节的内存地址，因为一个内存单元一个占一个字节大小
//	printf("%d", a);
//
//	return 0;
//}