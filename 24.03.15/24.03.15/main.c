#include<stdio.h>

/*
�ַ��������ַ�������
1.1strlen
ר��������һ���ַ����ĳ���


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
	return 0;//strlen����ֵ���޷�������
}
strcat
�ַ���׷��
*/

int main() {
	char name[20] = { 0 };
	strcpy(name, "zhang\0san");

	printf("%s\n", name);
}