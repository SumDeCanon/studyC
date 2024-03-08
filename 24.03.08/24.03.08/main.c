#include<stdio.h>
#include<string.h>

int main() {
	char arr[] = { 'a','b','c','d','e','f' };
	//char arr[] = "abcdef";//[a b c d e f \0]
	/*
	strlen是求字符串长度的，关注的是字符串中的\0,计算的是\0之前出现的字符的个数
	strlen是库函数，指针对字符串
	sizeof只关注占用内存空间的大小，不在乎内存中放了什么
	sizeof是操作符
	*/
	printf("%d\n", sizeof(arr));
	printf("%d\n", sizeof(arr+0));
	printf("%d\n", sizeof(*arr));
	printf("%d\n", sizeof(arr[1]));
	printf("%d\n", sizeof(&arr));
	printf("%d\n", sizeof(&arr+1));
	printf("%d\n", sizeof(&arr[0]+1));

	printf("%d\n", strlen(arr));//随机值 遇到\n停止计算,从地址往后数 
	printf("%d\n", strlen(arr+0));//随机值

	printf("%d\n", strlen(*arr));//野指针，，strlen('a')-->strlen(97)
	printf("%d\n", strlen(arr[1]));//野指针strlen(98)
	printf("%d\n", strlen(&arr));//随机值
	printf("%d\n", strlen(&arr+1));//随机值-6跳过一个数组（包含6个字符）
	printf("%d\n", strlen(&arr[0]+1));//随机值-1

	char* p = "abcdef";
	printf("%d\n", sizeof(p));
	printf("%d\n", sizeof(p+1));
	printf("%d\n", sizeof(* p));
	printf("%d\n", sizeof(p[0]));
	printf("%d\n", sizeof(&p));
	printf("%d\n", sizeof(&p+1));
	printf("%d\n", sizeof(&p[0]+1));

	printf("%d\n", strlen(p));
	printf("%d\n", strlen(p+1));
	printf("%d\n", strlen(*p));
	printf("%d\n", strlen(p[0]));
	printf("%d\n", strlen(&p));
	printf("%d\n", strlen(&p+1));
	printf("%d\n", strlen(&p[0]+1));

	return 0;
}