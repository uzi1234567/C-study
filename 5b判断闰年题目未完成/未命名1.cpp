#include<stdio.h> 
	
	int main()
	{
		int year;
		printf("���������:\n"); 
		scanf("%d", &year);
		if( year % 400 == 0 || year % 4 == 0 && year % 100 != 0 )
		//year % 400 == 0 || year % 4 == 0 && year % 100 != 0
		{
			printf("%d��������\n",year);
		 } else{
		 	printf("%d�겻������\n",year);
		 }
	}
