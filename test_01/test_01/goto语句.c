#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//int main()
//{  flag:
//	printf("hehe\n");
//	printf("hehe\n");   //goto�����flag���ҵ���Ӧ��flag����ִ����ȥ��gotoֻ����һ��������Χ����ת�����ܿ纯��
//	goto flag;
//	return 0;
//}



 //�ػ�����ֻҪ�������������Ծ���һ�����ڹػ���������룺��������ȡ���ػ�

//shutdown -s -t 60 //�ػ�����
//shutdown -a      //ȡ���ػ�����
//int main()
//{
//	//�ػ�
//	//C�����ṩ��һ������:system()-ִ��ϵͳ�����
//	system("shutdown -s -t 180"); //system-stdlib.h
//	char input[20] = { 0 };
//	again:
//	printf("��ע�⣬��ĵ�����һ�����ڹػ���������룺��������ȡ���ػ�\n");
//	
//	
//	scanf("%s", input);
//	if ((strcmp(input,"������"))==0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//
//	return 0;
//}