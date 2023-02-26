#include<stdio.h>
//	//i++代表的是i=i+1
//	//++i直接按照优先级顺序 
//前++是先++然后变量参与运算，后++是先变量参与运算然后++

	int main()
	{
	    int i = 1;
	    int a = ++i;//前++ 
	    int c = 1;
	    int b = c++;//后++ **********后++拆分两步b=c c=c+1 
	    printf("%d\n",a);
	    printf("%d\n",b);
	    printf("%d\n",c);
	    printf("c占用的字节数为：%d", sizeof(c));
	    //sizeof()为查看变量所占的字节数，（）里只能放变量不能放表达式 
	} 
