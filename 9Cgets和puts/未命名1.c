#include<stdio.h>

int main()
{
	char c[2];//字符数组的数组名里存的就是字符数组的起始地址 
	gets(c);//输入
	//scanf函数在读取字符串时遇到空格就认为读取结束，所以当输入字符串存在空格时，可以用gets函数进行读取 
	puts(c);//输出
	//puts只能输出字符串，而printf不仅能输出字符串还能输出整型和浮点型数据 
}
