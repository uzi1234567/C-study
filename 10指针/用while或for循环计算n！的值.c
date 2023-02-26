#include<stdio.h>

int main()
{
	int n;
	int a=1;
	int i=1;
	printf("ÇëÊäÈënµÄÖµ\n");
	scanf("%d",&n);
	while(i<=n)
	{
		a=a*i;
		i++; 
		
	}
	printf("n!=%d",a);	
} 
