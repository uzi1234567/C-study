#include<stdio.h>

int main()

{
	int a,b,c,tmp;
	
	while(scanf("%d",&a) !=EOF )//为了测试时多次输入
	{
		a = c;
		b = 0;
		while(a)//        a的意思就是a！=0  为节省编译时间 
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
