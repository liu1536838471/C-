#define _CRT_SECURE_NO_WARNINGS 
//声明下上个源文件的全局变量
#include<stdio.h>
extern int g_val;
//int main() {
//
//	printf("%d", g_val);
//	return 0;
//
//}

//常量

//#define MAX 10000;标识符常量不能改
//int main() {
//	//1.字面常量
//	//3.14
//	//10；
//	//'a'
//	//"abcdef"
//
//	//2.const修饰的常变量
//	//int num = 10;//变量
//	//const int num = 10;//常变量，不能发生改变，不能重新给他赋值覆盖，本质属性的变量
//	//
//	//int arr[10] = { 0 };
//	//int n = 0;
//	//int arr2[n] = { 0 };//不行,n是变量不能放进去，必须要是常量型
//
//	//3.#define 定义的标识符常量
//	/*int n = MAX;
//	printf("n=%d", n);
//	*/
//
//
//
//	return 0;
//}

////性别
//enum Sex
//{
//	//枚举类型的变量的未来可能取值
//	MALE=3,//枚举常量不能改，这个地方算是赋初值
//FEMALE,
//SECRET,
//};
//int main()
//{
//	//4.枚举常量
////可以一一列举的常量
//	enum Sex s = MALE;
//
//	return 0;
//}