#include<stdio.h>

/*
字符函数和字符串函数
1.1strlen
专门用来求一个字符串的长度


#include<string.h>
int main() {
	char arr[] = "abcdef";
	int len = strlen(arr);

	printf("%d\n", len);
	return 0;
}

int main() {
	if (strlen("abc") - strlen("abcdef") > 0) {
		printf(">\n");
	}
	else {
		printf("<\n");
	}
	return 0;//strlen返回值是无符号整型
}
strcat
字符串追加
*/

int main() {
	char name[20] = { 0 };
	strcpy(name, "zhang\0san");

	printf("%s\n", name);
}