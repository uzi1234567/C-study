#include<stdio.h>

int main()

{
	int a,b,c,tmp;
	
	while(scanf("%d",&a) !=EOF )//Ϊ�˲���ʱ�������
	{
		a = c;
		b = 0;
		while(a)//        a����˼����a��=0  Ϊ��ʡ����ʱ�� 
		{
			tmp = a%10;
			b = b*10 + tmp; 
			a=a/10;
			
		 }
		 if(c == b)
		 {
		 	printf("yes\n");
		 }
		 else{
		 	printf("no\n");
		 }
		 printf("\nb=%dc=%d\n",b,c);
	}
	return 0;
	
}
