#include<stdio.h>

//һ��d��Ϊ�β� 
void print(char d[])
{
	int i = 0;
	while(d[i] != '\0')
	{
		printf("%c",d[i]);
		i++;
	}
	printf("\n");
}
int main()
{
	char c[10] = "hello";
	print(c);//һ���c��Ϊʵ�Σ�����print����ʱ�ǽ�c��ֵ����d 
	return 0;
}
