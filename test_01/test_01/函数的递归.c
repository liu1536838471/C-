#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>

 //�����ĵݹ�����Լ������Լ����ܼ�һЩ����
//int main()
//{ 
//	printf("hehe\n");
//	main();
//
//	return 0;
//}

 //����
  //123456  ��ӡ�� 1 2 3 4 5 6
//  n/10 ����һλ,�ڴ�ӡ��n%10���һλ
//  12345 (6)
// 1234 (5)
// 123 (4)
//void print(int num)
//{
//	if (num>9)
//	{
//		print(num / 10);            //   �ݹ�Ļ���һֱ�����Լ��������һ�麯���������꣬�Ӻ���ǰִ��
//		                            // ����ĳ��������ȴ�ӡ1 ���������������ӡ
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

//дһ�� �Լ�ʵ�����ַ����ȵĺ���

int my_strlen(char* arr)
{     //��һ������������
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
	       //���ַ��������ַ���������洢��ʱ���ַ���ĩβ����һ�����ص�'\0'�ַ���ֻ�������㳤�ȣ����ַ��������ı�־
	printf("%d", my_strlen(arr));

	return 0;
  }