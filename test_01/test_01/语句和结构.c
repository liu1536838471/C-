#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
//int main()
//{
//	//一个分号结尾就是一个语句
//	int a = 0;
//	;//空语句
//
//
//	return 0;
//}
//int main()
//{
//	//选择分支结构
//
//	//int age = 10;
//	/*if (age>=18)
//	{
//		printf("成年\n");
//	}*/
//	int age = 60;
//	//if (age<18)
//	//{
//	//	printf("少年\n");
//	//}
//	//else if (18 <= age < 26) { //这样写语法没有错误，逻辑有错误，会先执行18<=60等于1在执行1<26正确,所以不行
//
//	//	printf("青年\n");
//	//}
//	
//
//
//	return 0;
//}

//细节题
//int main()
//{
///*
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//		if (b == 2)
//			printf("hehe\n");
//		else
//			printf("haha\n");*///注意else和最近的if匹配，所以这次没有打印东西，因为a不等于1不执行下面的，没有
//	//对应的else匹配所以不打印，相当于一下情况
//	/*if (a == 1)
//	{
//		if (b == 2)
//			printf("hehe\n");
//		else
//			printf("haha\n");
//	}*/
//
//	//代码1
//	/*if (condition)
//	{
//		return x;
//
//	}
//	return y;*/
//
//	//代码2
//	//if (condition)
//	//{
//	//	return x;
//	//}
//	//else
//	//{
//	//	return y;
//	//}
//	
//	//代码1和代码2表达的是一个意思
//
//	return 0;
//}
 
   //判断一个数是否为奇数
//int main()
//{
//	int a = 0;
//
//	scanf("%d", &a);
//	if (a%2==1)
//	{
//		printf("a为奇数\n");
//	}
//	else
//	{
//		printf("a不是奇数");
//	}
//
//
//	return 0;
//}

  //输出1-100之间的奇数
//int main()
//{
//	int i = 0;
//	for (i=1;i<101; i++)
//	{
//		if (i%2==1)
//		{
//			printf("%d \n", i);
//
//		}
//
//	}
//
//
//	return 0;
//  }


//switch语句

//int main()
//{
//	int i = 0;
//   
//	scanf("%d\n", &i);
//	switch (i)//这个括号里面是整形表达式
//	{
//	case 1:             //后面必须是常量表达式,会和case后面的匹配，并且会一直执行下去知道整个选择结构执行完
//		//所以，一般在每个case语句后面加一个break；break;意思是结束这个选择结构，相当于跳出本身的这个swich语句，
//		//能真正的做到选择
//		printf("星期一\n");
//		break;
//	case 2:
//
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四\n");
//		break;
//	case 5:
//		printf("星期五\n");
//		break;
//	case 6:
//		printf("星期六\n");
//		break;
//	default:              //default表示当其他case不匹配的时候会执行default，其作用可以用来提醒一下
//		//比如输入数字错误 ;
//		printf("输入错误\n"); 
//		break;
//	}
//	return 0;
//  }
//int main()
//{
//	int i = 1;
//	
//		//在while循环中break用于永久的终止循环，相当于，直接跳出while循环
//	//while (i <= 10)
//	//{
//	//	if (i==5)
//	//	{
//	//		break;
//	//	}
//	//	printf("%d ", i);
//	//	i++;
//	//	
//
// //   }      //结果为 1 2 3 4 ，因为当i==5时，就结束整个while循环了
//
//	   //在while循环中,continue的作用是跳过本次循环：continue后面的代码
//	//while (i<=10)
//	//{
//	//	if (i==5)
//	//	{
//	//		continue;
//
//	//	}
//	//	printf("%d", i);  //这次的结果是 1 2 3 4 后面死循环一直执行，因为continue执行后 i
//	//	//一直等于5 ，跳过了后面的代码，开始下一此循环
//	//	i++;         
//
//	//}
//
//	//return 0;
// // }


//for循环

//int main() {
//	//int i = 0;
//	//    //初始话 //判断条件 //调整，
//	//for (i = 0; i < 10; i++)//这三项都可以省略，如果省略判断项为真，死循环
//	//{
//	//	printf("%d",i);
//	//	break;//跳出整个循环，循环结束
//	//}
//	//return 0;
//
//	//变种1
//	//for (  ; ;  )
//	//{
//	//	printf("hehe\n");
//	//}
//	//变种2
//	//int x, y;
//	//for (x=0, y= 0;x<2&&y<5;++x, y++)//也可以又两个变量来控制
//	//{
//	//	printf("hehe\n");
//
//	//}
//	return 0;
//
//}