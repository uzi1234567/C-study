#include<stdio.h> 

//小写转换为大写 
	int main()
	{
		char c;
		while(scanf("%c", &c) != EOF)
		{
			if(c != '\n')
			{
				printf("%c",c - 32);
			 } else{
			 	printf("\n");
			 }
		 } 
	 } 
