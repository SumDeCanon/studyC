/*
* strcat,strcpy,strcmp���ǳ��Ȳ������Ƶ��ַ�������
1.4 strcmp

#include<stdio.h>
#include<string.h>
int main() {
	char arr1[20] = "zhangsan";
	char arr2[] = "zhangsanfeng";

	//�Ƚ�һ�������ַ����Ƿ���Ȳ���ֱ�ӣ�arr1==arr2��,Ӧ����strcmp
	int ret = strcmp(arr1, arr2);
	if (ret < 0)
		printf("<\n");
	else if (ret == 0)
		printf("==\n");
	else
		printf(">\n");
}
���������Ƶ��ַ�������
strncpy
strncat
strncmp
*/

