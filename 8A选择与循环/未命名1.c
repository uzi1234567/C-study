#include<stdio.h>
//单目运算符 ！（属于逻辑运算符） 
//算数运算符 加 减 乘 除 取模 
//关系运算符 > < >= <= == !=
//逻辑运算符 &&与 ||或  
//算数运算符优先级高于关系运算符高于大部分逻辑运算符 
 
	int main()
	{
		int i;
		while(scanf("%d",&i) !=EOF)
		{
			if(i>0)
			{
				printf("i is bigger than 0\n");
			}else{
					printf("0 is biigger than i\n");
			     }
		}
	}
