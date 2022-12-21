#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
//define是一个预处理指令
//1.define定义符号
#define MAX 1000
//int main()
//{
//	printf("%d\n", MAX);
//	return 0;
//}

//2.define定义宏
#define ADD(x,y) (x+y) //宏其实就是替换
//int main()
//{                 //相当于这里是2+3
//	printf("%d\n", ADD(2, 3));//5
//	printf("%d\n", 4 * ADD(2, 3));//11,所以只是替换，要把x+y改成(x+y);
//
//
//	
//	return 0;
//}