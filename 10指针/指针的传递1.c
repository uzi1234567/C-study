#include<stdio.h>
 
void change(int j)//j��Ϊ�β� 
{
	j=5;
}
int main()
{
	int i=10;//i�Ǿֲ����� 
	printf("before  change i=%d\n",i);//ִ��change����֮ǰi��ֵ 
	change(i);//����change�������ҽ�i��ֵ����j 
	//��ʱi��Ϊʵ��
	//ֵ���ݾ��ǽ�ʵ�ε�ֵ�����β�  
	printf("after  change i=%d\n",i);//ִ��change����֮��i��ֵ 
	return 0; 
} 
