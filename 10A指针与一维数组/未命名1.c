#include<stdio.h>

void chang(int *j)
{
	*j=5;
}
int main()
{
	int i=10;
	chang(&i);
	printf("i=%d",i);
	
}
