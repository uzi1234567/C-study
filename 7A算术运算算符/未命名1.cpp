#include<stdio.h>

	int main()
	{
		int a;
		printf("请输入一个值\n");
		scanf("%d",&a);
		while(a!=0)
		{
			printf("%d", a%10);
			a=a/10;
		}
		printf("\n");
		return 0;
	}
