#include <stdio.h>
/*
int main() {
	int a[5] = { 1,2,3,4,5 };
	int* ptr = (int*)(&a + 1);//&�õ���������ĵ�ַ��+1ֱ��������������    

	printf("%d,%d", *(a + 1), *(ptr - 1));//��Ϊ2��5

	return 0;
}


struct Test {
	int	Num;
	char* pcName;
	short sDate;
	char cha[2];
	short sBa[4];
}*p = (struct Test*)0x100000;
//����p��ֵΪ0x100000�����±���ʽ��ֵ�ֱ��Ƕ��٣�
//��֪���ṹ��Test���͵ı�����СΪ20�ֽڣ���x86

int main() {
	printf("%p\n", p + 0x1);//һ���ṹ��ָ��+1����һ���ṹ��Ĵ�С
	printf("%p\n", (unsigned long)p + 0x1);//0x100001
	printf("%p\n", (unsigned int*)p + 0x1);//0x100004

	return 0;
}

int main() {
	int a[4] = { 1,2,3,4 };
	int* ptr1 = (int*)(&a + 1);
	int* ptr2 = (int*)((int)a + 1);
	printf("%x,%x", ptr1[-1], *ptr2);
	return 0;
}

int main() {
	int a[3][2] = { (0,1),(2,3),(4,5) };//���ű��ʽ��ʵ�ʽ��Ϊ{1,3,5}
	int* p;
	p = a[0];//������û�е�������sizeof�ڲ��ͱ�ʾ��Ԫ�صĵ�ַ����a[0][0]�ĵ�ַ
	printf("%d", p[0]);//*p
	return 0; 
}*/

int main() {
	int a[5][5];
	int(*p)[4];
	p = a;
	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
	return 0;
}