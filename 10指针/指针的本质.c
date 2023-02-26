#include<stdio.h>

int main()
{
	int i=5;
	int *i_pointer=&i;//定义一个整型指针变量
	//int *a,*b,*c; 
	//&取地址符，指针变量的初始化一定是某个变量取地址
	//通过此操作我们可以获取一个变量i的地址值 
	printf("%d\n",i_pointer);
	printf("i=%d\n",i); //直接访问
	printf("*i_pointer=%d\n",*i_pointer);//间接访问
	//先拿出i_pointer的地址，然后根据地址找值
	//*取值符号：取地址中所对应的值
	//*与&优先级相同 
	return 0; 
} 
