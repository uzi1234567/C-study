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
	//������ĸ���д 
	d[0] = d[0] - 32;
}
int main()
{
	char c[10] = "hello";
	print(c);//һ���c��Ϊʵ�Σ�����print����ʱ�ǽ�c��ֵ����d 
	printf("%s\n",c); 
	return 0;
}
