#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>

 //函数的递归就是自己调用自己，能简化一些事情
//int main()
//{ 
//	printf("hehe\n");
//	main();
//
//	return 0;
//}

 //例题
  //123456  打印出 1 2 3 4 5 6
//  n/10 减少一位,在打印出n%10最后一位
//  12345 (6)
// 1234 (5)
// 123 (4)
//void print(int num)
//{
//	if (num>9)
//	{
//		print(num / 10);            //   递归的话先一直调用自己，等最后一遍函数调用玩完，从后往前执行
//		                            // 下面的程序，所以先打印1 ，后面依次增大打印
//	}
//	printf("%d ", num % 10);
//
//  }
//
//int main() {
//
//	int num = 0;
//	scanf("%d", &num);
//	print(num);
//
//	return 0;
//  }

//void test(int n)
//{
//	
//	if (n<10000)
//	{
//		test(n + 1);
//	}
// }
//int main()
//{
//	test(1);
//	return 0;
//}

//写一个 自己实现求字符长度的函数

int my_strlen(char* arr)
{     //用一个变量来计数
	int count = 0;
	while (1)
	{
		if (*arr != '\0')
		{
			arr++;
			count++;
		}
		else
		{
			break;
		}

	}
	return count;

}

int main()
{
	char arr[] = "abc000000000000";
	       //当字符串放在字符数组里面存储的时候，字符串末尾是有一个隐藏的'\0'字符，只不过不算长度，算字符串结束的标志
	printf("%d", my_strlen(arr));

	return 0;
  }