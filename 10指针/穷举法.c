#include<stdio.h>

int main()
{
	int a;//10
	int b;//5
	int c;//2
	int d;//1
	int e;//方法数 
	for(a=1;a<=6;a++)
	{
		for(b=1;b<=12;b++)
		{
			for(c=1;c<=34;c++)
			{
				for(d=1;d<=34;d++)
				{
					if( a + b + c + d == 40 && a * 10 + b * 5 + c * 2 + d * 1 == 100 )
					{
						e++;
					}
				}
			}
		}
	}
	printf("满足条件的方案有%d种",e);
} 
