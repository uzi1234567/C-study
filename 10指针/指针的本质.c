#include<stdio.h>

int main()
{
	int i=5;
	int *i_pointer=&i;//����һ������ָ�����
	//int *a,*b,*c; 
	//&ȡ��ַ����ָ������ĳ�ʼ��һ����ĳ������ȡ��ַ
	//ͨ���˲������ǿ��Ի�ȡһ������i�ĵ�ֵַ 
	printf("%d\n",i_pointer);
	printf("i=%d\n",i); //ֱ�ӷ���
	printf("*i_pointer=%d\n",*i_pointer);//��ӷ���
	//���ó�i_pointer�ĵ�ַ��Ȼ����ݵ�ַ��ֵ
	//*ȡֵ���ţ�ȡ��ַ������Ӧ��ֵ
	//*��&���ȼ���ͬ 
	return 0; 
} 
