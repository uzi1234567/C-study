#include<stdio.h>
//%d����ʶ���ַ���������ѭ����ӡ�Ľ���취��ʱ����ڴ滺���� 
//�����������while�����rewind�ӿ�ֻ��΢������ mac�ò���    rewind(stdin)��ձ�׼����������ֹ�ֶ����뵼����ѭ�� 
 	int main()
 	{
 		int i , ret;
 		while(rewind(stdin), (ret = scanf("%d", &i))!=EOF)//while��ʵ��ѭ���ģ�����Ҫ��һ��С���ţ��� 
// 		scanf����ʱ�򷵻�EOF
//   EOF��stdio.h����     #define EOF (-1)   �������ǿ� EOF����-1 
//Ҳ����˵��scanfû�гɹ���ֵ��ʱ�򷵻�ֵ��-1
//��scanf�ɹ���ֵ��ʱ�򷵻�ֵ�ǳɹ���ֵ���������� 
//����ͨ��ret������scanf�ķ���ֵ
//������aʱ����ֵΪ0˵���ɹ���ֵ����Ϊ0�� 
		 {
		 printf("i=%d\n", i);
		 } 
 		
 		return 0;
	 }
