#include<stdio.h>
 
void change(int j)//j称为形参 
{
	j=5;
}
int main()
{
	int i=10;//i是局部变量 
	printf("before  change i=%d\n",i);//执行change函数之前i的值 
	change(i);//调用change函数并且将i的值赋给j 
	//此时i称为实参
	//值传递就是将实参的值赋与形参  
	printf("after  change i=%d\n",i);//执行change函数之后i的值 
	return 0; 
} 
