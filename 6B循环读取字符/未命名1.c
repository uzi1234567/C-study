#include<stdio.h> 

//Сдת��Ϊ��д 
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
