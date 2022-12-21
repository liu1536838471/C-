#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<string.h>
////字符串就是一串用双引号括起来的一串字符
////int main() {
////
////	"abcdef";
////	"hello bit";
////	return 0;
////
//
////int main() {
////	//字符数组-数组是一组相同类型的元素
////	//字符串在结尾的位置隐藏了一个\0字符
////	//\0是字符串的结束标志
////	char arr[] = "hello";
////   
////	char arr1[] = "abc";
////	char arr2[] = { 'a','b','c','\0'};
////	char arr3[] = { 'a','b','c' };
////	//打印字符串
////	//printf("%s\n", arr1);
////	//printf("%s\n", arr2);这两个打印的效果一样，字符串默认后面有一个\0字符
////	//这是一种办法区别
////	//还有一种就是求下字符串的长度
////	//int len = strlen("abc");//\0仅作为字符串的结束标志，并不影响字符串的长度，但是在数组中内存中会占用
////	//printf("%d", len);
////	printf("%d\n", strlen(arr1));//这个为3
////	printf("%d\n", strlen(arr3));//这个为随机值
////
////	return 0;
////}
//int ADD(int x, int y) {
//	int z = 0;
//	z = x + y;
//	return z;
//	
//  }//函数的定义
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d%d", &num1, &num2);
//	//int sum = num1 + num2; //这不是函数的方式，我们可以用函数的方式来计算
//	//调用ADD函数
//   int sum=	ADD(num1, num2);
//
//
//	printf("sum=%d", sum);
//
//	return 0;
// }
