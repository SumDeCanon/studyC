#include<stdio.h>
#include<string.h>

int main() {
	char arr[] = { 'a','b','c','d','e','f' };
	//char arr[] = "abcdef";//[a b c d e f \0]
	/*
	strlen�����ַ������ȵģ���ע�����ַ����е�\0,�������\0֮ǰ���ֵ��ַ��ĸ���
	strlen�ǿ⺯����ָ����ַ���
	sizeofֻ��עռ���ڴ�ռ�Ĵ�С�����ں��ڴ��з���ʲô
	sizeof�ǲ�����
	*/
	printf("%d\n", sizeof(arr));
	printf("%d\n", sizeof(arr+0));
	printf("%d\n", sizeof(*arr));
	printf("%d\n", sizeof(arr[1]));
	printf("%d\n", sizeof(&arr));
	printf("%d\n", sizeof(&arr+1));
	printf("%d\n", sizeof(&arr[0]+1));

	printf("%d\n", strlen(arr));//���ֵ ����\nֹͣ����,�ӵ�ַ������ 
	printf("%d\n", strlen(arr+0));//���ֵ

	printf("%d\n", strlen(*arr));//Ұָ�룬��strlen('a')-->strlen(97)
	printf("%d\n", strlen(arr[1]));//Ұָ��strlen(98)
	printf("%d\n", strlen(&arr));//���ֵ
	printf("%d\n", strlen(&arr+1));//���ֵ-6����һ�����飨����6���ַ���
	printf("%d\n", strlen(&arr[0]+1));//���ֵ-1

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