#include<stdio.h>

int main()
//1-100������ ��� 
{
	int i, total;
	for(i=1,total=0;i<=100; i++)
	{
		if( i % 2 == 0 ) //���i��ż�� 
		{
			continue; //��������ѭ�� ֱ������i++
			//��whileѭ����Ҳͬ������
			//break����ֹѭ����ֱ������ѭ������ 
		}
		total = total + i;
		 
	}
	printf("total=%d\n",total);
}
