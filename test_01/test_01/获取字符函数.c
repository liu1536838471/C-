#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
//int main()
//{
//	//
//	char password[20] = { 0 };
//	printf("请输入密码:>");
//	scanf("%s", password);//注意字符数组名本来就是一个地址，所以不用取址符号
//	printf("请确认密码(Y/N):>");
//	//先拿掉缓存区里面的字符
//   //	getchar();//这中办法只能清理缓存区里面的一个字符
//	int tmp = 0;
//	while ((tmp=getchar())!='\n')
//	{
//
//	}
//    int	 ch = getchar();//键盘上输入的字符会先放入缓存区，然后再从缓存区里面拿字符，getchar最后拿的字符有一个\n
//	//怎么办呢，把缓存区里面的字符拿掉就行
//	
//	   
//	if (ch=='Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("确认失败\n");
//	}
//
//	return 0;
//}