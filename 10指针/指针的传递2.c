#include<stdio.h>
 
void change(int *j)//当传的是i的地址则*j就是j=&i 
{
	*j=5;//*j就访问到了i的空间将i的空间赋值5
	//所以输出的i的值就是5
	//每一个函数都在栈中划出一个独立的区域
	//两个不同的函数可以有相同的变量名
	//这两个变量名对应的地址是不同的 
}
int main()
{
	int i=10;
	printf("before  change i=%d\n",i);//执行change函数之前i的值 
	change(&i); //传i的地址 
//i的地址是实参 
	printf("after  change i=%d\n",i);
	return 0; 
} 
