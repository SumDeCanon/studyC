/*
* strcat,strcpy,strcmp都是长度不受限制的字符串函数
1.4 strcmp

#include<stdio.h>
#include<string.h>
int main() {
	char arr1[20] = "zhangsan";
	char arr2[] = "zhangsanfeng";

	//比较一下两个字符串是否相等不能直接（arr1==arr2）,应该用strcmp
	int ret = strcmp(arr1, arr2);
	if (ret < 0)
		printf("<\n");
	else if (ret == 0)
		printf("==\n");
	else
		printf(">\n");
}
长度受限制的字符串函数
strncpy
strncat
strncmp
*/

