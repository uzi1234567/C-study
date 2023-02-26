#include<stdio.h>

int main()
//1-100求和，当和大于2000终止循环 
{
	int i, total;
	for(i=1,total=0;i<=100; i++)
	{
		if( total > 2000 ) //如果total大于2000 
		{
			break; //当和大与2000就终止循环 
			//break是终止循环，直接跳到循环外面 
		}
		total = total + i;
		 
	}
	printf("total=%d\n i=%d",total,i); 
	//输出i=64
	//64没有加进来，当i=63的时候和已经大于2000了 
}
