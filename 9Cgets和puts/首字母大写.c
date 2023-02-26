#include<stdio.h>

//一般d称为形参
void print(char d[])
{
	int i = 0;
	while(d[i] != '\0')
	{
		printf("%c",d[i]);
		i++;
	}
	printf("\n");
	//将首字母变大写 
	d[0] = d[0] - 32;
}
int main()
{
	char c[10] = "hello";
	print(c);//一般把c成为实参，调用print函数时是将c的值赋予d 
	printf("%s\n",c); 
	return 0;
}
