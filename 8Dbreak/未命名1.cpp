#include<stdio.h>

int main()
//1-100��ͣ����ʹ���2000��ֹѭ�� 
{
	int i, total;
	for(i=1,total=0;i<=100; i++)
	{
		if( total > 2000 ) //���total����2000 
		{
			break; //���ʹ���2000����ֹѭ�� 
			//break����ֹѭ����ֱ������ѭ������ 
		}
		total = total + i;
		 
	}
	printf("total=%d\n i=%d",total,i); 
	//���i=64
	//64û�мӽ�������i=63��ʱ����Ѿ�����2000�� 
}
