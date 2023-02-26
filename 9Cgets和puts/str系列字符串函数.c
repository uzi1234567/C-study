#include<stdio.h>
#include<string.h>
//使用str系列字符串操作函数需要引用新的头文件#inclued<string.h> 
//str系列字符串操作函数主要包括 strlen 、strcpy、strcmp、strcat等
//strlen函数用于统计字符串长度 
//strcpy函数用于将某个字符串复制到字符数组中 
//strcmp函数用于比较两个字符串的大小 
//strcat函数用于将两个字符串连接到一起
//每个函数的具体格式如下所示
//#include<string.h>
//size_t strlen(char *str);
//char *strcpy(char *to, const char *from);有const修饰的地方后面可以放一个字符串常量 
//int strcmp(const char *str1 , const char *str2);
//char *strcat(char *str1 , const char *str2);
//对于传参类型char* ,直接放入字符数组的数组名即可。 
 
int main()
{
	/*****************统计字符串长度************/
	
	
	char c[20] = "wangdao";
	printf("数组c内字符串的长度=%d\n",strlen(c));
	
	
	/**************复制字符串*************/
	
	
	char d[20];
	strcpy(d,c);//将c中的字符串放到d中 
	puts(d);//输出字符串d 
	char e[20];
	strcpy(e,"study");//有const修饰的地方后面可以放一个字符串常量 
	puts(e);
	
	
	/**************比较字符串大小************/
	
	
	printf("两个字符串比较后的结果=%d\n",strcmp("hello","hello"));//比较两个字符串的大小
	//当返回值为0时str1=str2
	//当返回值为1时str1>str2
	//当返回值为-1时str1<str2
	printf("两个字符串比较后的结果=%d\n",strcmp("how","hello"));//返回值为1
	//how比hello大的原因是两个字符串的比较不是比长度而是比较对应位置的ascii码值
	//h和h的ascii值一样o是111而e是101
	//当比出o>e时就不会在往下比较了
	//得出how > hello返回值为1 
	
	
	/*********将两个字符串连接到一起***********/ 
	
	
	strcat(c,e);//将后面的字符串填到前面字符串里。要注意，目标数组的长度要能够容纳拼接后的字符串 
	puts(c); 
	return 0;
} 
