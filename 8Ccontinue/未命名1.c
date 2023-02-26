#include<stdio.h>

int main()
//1-100的奇数 求和 
{
	int i, total;
	for(i=1,total=0;i<=100; i++)
	{
		if( i % 2 == 0 ) //如果i是偶数 
		{
			continue; //结束本轮循环 直接跳到i++
			//在while循环中也同样适用
			//break是终止循环，直接跳到循环外面 
		}
		total = total + i;
		 
	}
	printf("total=%d\n",total);
}
