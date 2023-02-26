#include<stdio.h>

int main()
{
	int a[3]={2,7,8};
	int *p;
	int j;
	p = a;//*p=2 
	j = *p++;//j=*p=2    *p=*p+1=2+1=3
	printf("a[0]=%d\nj=%d\n*p=%d ",a[0],j,*p);
	//a[0]=2 j=2 *p=3
	return 0;
} 
