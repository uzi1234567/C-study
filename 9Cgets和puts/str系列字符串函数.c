#include<stdio.h>
#include<string.h>
//ʹ��strϵ���ַ�������������Ҫ�����µ�ͷ�ļ�#inclued<string.h> 
//strϵ���ַ�������������Ҫ���� strlen ��strcpy��strcmp��strcat��
//strlen��������ͳ���ַ������� 
//strcpy�������ڽ�ĳ���ַ������Ƶ��ַ������� 
//strcmp�������ڱȽ������ַ����Ĵ�С 
//strcat�������ڽ������ַ������ӵ�һ��
//ÿ�������ľ����ʽ������ʾ
//#include<string.h>
//size_t strlen(char *str);
//char *strcpy(char *to, const char *from);��const���εĵط�������Է�һ���ַ������� 
//int strcmp(const char *str1 , const char *str2);
//char *strcat(char *str1 , const char *str2);
//���ڴ�������char* ,ֱ�ӷ����ַ���������������ɡ� 
 
int main()
{
	/*****************ͳ���ַ�������************/
	
	
	char c[20] = "wangdao";
	printf("����c���ַ����ĳ���=%d\n",strlen(c));
	
	
	/**************�����ַ���*************/
	
	
	char d[20];
	strcpy(d,c);//��c�е��ַ����ŵ�d�� 
	puts(d);//����ַ���d 
	char e[20];
	strcpy(e,"study");//��const���εĵط�������Է�һ���ַ������� 
	puts(e);
	
	
	/**************�Ƚ��ַ�����С************/
	
	
	printf("�����ַ����ȽϺ�Ľ��=%d\n",strcmp("hello","hello"));//�Ƚ������ַ����Ĵ�С
	//������ֵΪ0ʱstr1=str2
	//������ֵΪ1ʱstr1>str2
	//������ֵΪ-1ʱstr1<str2
	printf("�����ַ����ȽϺ�Ľ��=%d\n",strcmp("how","hello"));//����ֵΪ1
	//how��hello���ԭ���������ַ����ıȽϲ��Ǳȳ��ȶ��ǱȽ϶�Ӧλ�õ�ascii��ֵ
	//h��h��asciiֵһ��o��111��e��101
	//���ȳ�o>eʱ�Ͳ��������±Ƚ���
	//�ó�how > hello����ֵΪ1 
	
	
	/*********�������ַ������ӵ�һ��***********/ 
	
	
	strcat(c,e);//��������ַ����ǰ���ַ����Ҫע�⣬Ŀ������ĳ���Ҫ�ܹ�����ƴ�Ӻ���ַ��� 
	puts(c); 
	return 0;
} 
