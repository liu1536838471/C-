#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<string.h>
#include<Windows.h>
//�ö��ַ�����һ�����������е� һ����

//int main()
//{
//	 //����һ������
//	int arr[] = { 1,3,5,7,9,10,11,13 };
//	//����Ҫ���ҵ���Ϊ
//	int k = 9;
//	//�������±�Ϊ
//	int left = 0;
//	//��������ĳ���Ϊ
//	int length = sizeof(arr) / sizeof(arr[0]);
//	//���±��Ϊ�����ȼ�һ
//
//	int right = length - 1;
//    //�м����Ϊ
//	int mid = (left + right) / 2;
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//
//		if (arr[mid] < k)//˵��k��mid���ұ�
//		{
//			left = mid+1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid-1;
//		}
//		else
//		{
//			printf("�ҵ��ˣ��±�Ϊ%d\n", mid);
//			//����ҵ����Ǿͽ���ѭ��
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ���\n");
//
//	}
//	{
//
//	}
//	return 0;
//}

//��ҵ
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
//	 //���±�
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (left <= right)
//	{
//
//
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//˯��һ��
//		system("cls");//�����Ļ
//		left++;
//		right--;
//	}
//	return 0;
// }

//ģ��һ���û���¼�������û����������������룬���ζ������¼ʧ���˳�����
//int main()
//{
//	//������ȷ������Ϊ"123456"
//	int i = 0;
//	//��һ���ַ��������洢���������
//	char password[] = "";
//	//��һ��forѭ������¼����
//	for ( i = 0; i < 3; i++)
//	{
//		printf("���������룺");
//		scanf("%s", password);
//		if ((strcmp(password,"123456"))==0) //�����ַ���������==���Ƚ�,Ҫ���������strcmp����������Ƚ�
//			//�����Ȼ᷵��0
//		{
//			printf("��¼�ɹ�\n");
//			break;//�����¼�ɹ�������ѭ��
//		}
//		else
//		{
//			printf("��¼ʧ�ܣ������µ�¼:\n");
//		}
//
//
//	}
//	if (i==3)
//	{
//		printf("��¼ʧ��,�����˳�\n");
//	}
//
//	return 0;
// }