#include<stdio.h> 

	int main()
	{
		char c[5] = {'h','e','l','l','o'}; 
		char d[5] = "how";
		printf("%s-----%s\n",c,d);//%s后面要跟的是字符数组名字和字符串常量 
		char e[20];
		scanf("%s",e);//scanf输入字符串时可以不加取地址符& 
		printf("%s",e);
	}
