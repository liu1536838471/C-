#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//��ʮ�������е����ֵ
//int main() {
//	//�ȸ�����������洢����
//	int arr[10] = { 0 };
//	//��������
//	int i = 0;
//	//����forѭ����������
//	for ( i = 0; i <10 ; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	//��һ���������洢�������
//	int max = arr[0];
//	//��������������ָ������бȽ�
//	for ( i = 1; i < 10; i++)
//	{
//		if (max<arr[i])
//		{
//			max = arr[i];
//		} 
//	}
//	//��ӡ��ʮ������
//	for ( i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	//��Ӯ��������
//	printf("\nmax=%d", max);
//
//
//
//	return 0;
//
//
//}
//��10�����ֵ�ƽ��ֵ
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
//	//���
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