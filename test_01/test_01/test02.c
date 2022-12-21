#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//求十个数字中的最大值
//int main() {
//	//先给个整型数组存储数字
//	int arr[10] = { 0 };
//	//输入数字
//	int i = 0;
//	//来个for循环存入数字
//	for ( i = 0; i <10 ; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	//找一个变量来存储最大数字
//	int max = arr[0];
//	//用数组里面的数字跟他进行比较
//	for ( i = 1; i < 10; i++)
//	{
//		if (max<arr[i])
//		{
//			max = arr[i];
//		} 
//	}
//	//打印这十个数字
//	for ( i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	//打赢最大的数字
//	printf("\nmax=%d", max);
//
//
//
//	return 0;
//
//
//}
//求10个数字的平均值
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//
//	for ( i = 0; i < 10; i++)
//	{
//
//		scanf_s("%d\n", &arr[i]);
//
//	}
//	//求和
//	int sum = 0;
//	for ( i = 0; i < 10; i++)
//	{
//		sum = sum + arr[i];
//	}
//	int ave = sum / 10;
//	printf("aveg=%d\n", ave);
//
//	return 0;
//}