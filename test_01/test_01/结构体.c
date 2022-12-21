//#define _CRT_SECURE_NO_WARNINGS 
//#include<stdio.h>
//
////结构体可以让C语言创建出新的类型出来
////创建一个学生类型
//struct stu
//{
//	char name[20];//成员变量
//	int age;
//	double score;
//};
//
////创建 一个书的类型
//struct Book
//{
//	char name[20];
//	float price;
//	char id[30];
//};
//int main()
//{
//	struct stu s = { "张三",20,85.5 };//结构体的创建和初始化
//printf("1: %s %d %lf\n", s.name, s.age, s.score);//结构体变量.成员变量
//struct stu* pa = &s;
//printf("2: %s %d %lf\n", (*pa).name, (*pa).age, (*pa).score);
//printf("3: %s %d %lf\n", pa->name, pa->age, pa->score);//结构体的指针指向成员变量，pa->
//     
//	return 0;
//}