#include<stdio.h>
 
void change(int *j)//��������i�ĵ�ַ��*j����j=&i 
{
	*j=5;//*j�ͷ��ʵ���i�Ŀռ佫i�Ŀռ丳ֵ5
	//���������i��ֵ����5
	//ÿһ����������ջ�л���һ������������
	//������ͬ�ĺ�����������ͬ�ı�����
	//��������������Ӧ�ĵ�ַ�ǲ�ͬ�� 
}
int main()
{
	int i=10;
	printf("before  change i=%d\n",i);//ִ��change����֮ǰi��ֵ 
	change(&i); //��i�ĵ�ַ 
//i�ĵ�ַ��ʵ�� 
	printf("after  change i=%d\n",i);
	return 0; 
} 
