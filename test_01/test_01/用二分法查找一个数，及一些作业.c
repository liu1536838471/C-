#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<string.h>
#include<Windows.h>
//用二分法查找一个有序数组中的 一个数

//int main()
//{
//	 //假设一个数组
//	int arr[] = { 1,3,5,7,9,10,11,13 };
//	//假设要查找的数为
//	int k = 9;
//	//假设左下标为
//	int left = 0;
//	//整个数组的长度为
//	int length = sizeof(arr) / sizeof(arr[0]);
//	//右下标的为，长度减一
//
//	int right = length - 1;
//    //中间的数为
//	int mid = (left + right) / 2;
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//
//		if (arr[mid] < k)//说明k在mid的右边
//		{
//			left = mid+1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid-1;
//		}
//		else
//		{
//			printf("找到了，下标为%d\n", mid);
//			//如果找到了那就结束循环
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到\n");
//
//	}
//	{
//
//	}
//	return 0;
//}

//作业
  //welcome to bit !!!!!
  //####################
  //w##################!
  //we################!!
  //..................
  //welcome to bit !!!!!
//int main()
//{
//	char arr1[] = "welcome to bit !!!!!";
//	char arr2[] = "####################";
//	 //左下标
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (left <= right)
//	{
//
//
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//睡眠一秒
//		system("cls");//清空屏幕
//		left++;
//		right--;
//	}
//	return 0;
// }

//模拟一个用户登录场景，用户可以输入三次密码，三次都错误登录失败退出程序，
//int main()
//{
//	//假设正确的密码为"123456"
//	int i = 0;
//	//用一个字符数组来存储输入的密码
//	char password[] = "";
//	//用一个for循环来登录三次
//	for ( i = 0; i < 3; i++)
//	{
//		printf("请输入密码：");
//		scanf("%s", password);
//		if ((strcmp(password,"123456"))==0) //两个字符串不能用==来比较,要用这个函数strcmp这个函数来比较
//			//如果相等会返回0
//		{
//			printf("登录成功\n");
//			break;//如果登录成功就跳出循环
//		}
//		else
//		{
//			printf("登录失败，请重新登录:\n");
//		}
//
//
//	}
//	if (i==3)
//	{
//		printf("登录失败,程序退出\n");
//	}
//
//	return 0;
// }