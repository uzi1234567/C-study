#include<stdio.h>
//%d不能识别字符导致无限循环打印的解决办法就时清空内存缓冲区 
//具体操作是在while里接入rewind接口只有微软能用 mac用不了    rewind(stdin)清空标准缓冲区，防止手抖输入导致死循环 
 	int main()
 	{
 		int i , ret;
 		while(rewind(stdin), (ret = scanf("%d", &i))!=EOF)//while是实现循环的，后面要有一个小括号（） 
// 		scanf出错时候返回EOF
//   EOF在stdio.h包中     #define EOF (-1)   方便人们看 EOF就是-1 
//也就是说当scanf没有成功赋值的时候返回值是-1
//当scanf成功赋值的时候返回值是成功赋值变量的数量 
//可以通过ret来接收scanf的返回值
//当输入a时返回值为0说明成功赋值变量为0个 
		 {
		 printf("i=%d\n", i);
		 } 
 		
 		return 0;
	 }
