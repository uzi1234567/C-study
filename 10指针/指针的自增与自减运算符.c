#include<stdio.h>

int main()
{
	int a[3]={2,7,8};
	int *p;
	int j;
	p = a;//让指针变量p指向数组的开头 
	j = *p++;
	//任何时候看见后++第一步都是先讲++去掉
	//j=*p  *与++的优先级相同因此先算*p然后算p++ 
	//j=*p   p++
	/*******
				j = (*p)++
				j = *p
				(*p++)
	
	
	
	*******/
	printf("a[0]=%d\nj=%d\n*p=%d ",a[0],j,*p);
	return 0;
} 
