#include<stdio.h> 

	int main()
	{
		char c[5] = {'h','e','l','l','o'}; 
		char d[5] = "how";
		printf("%s-----%s\n",c,d);//%s����Ҫ�������ַ��������ֺ��ַ������� 
		char e[20];
		scanf("%s",e);//scanf�����ַ���ʱ���Բ���ȡ��ַ��& 
		printf("%s",e);
	}
