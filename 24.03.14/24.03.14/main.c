#include <stdio.h>
/*
int main() {
	int a[5] = { 1,2,3,4,5 };
	int* ptr = (int*)(&a + 1);//&得到的是数组的地址，+1直接跳过整个数组    

	printf("%d,%d", *(a + 1), *(ptr - 1));//答案为2，5

	return 0;
}


struct Test {
	int	Num;
	char* pcName;
	short sDate;
	char cha[2];
	short sBa[4];
}*p = (struct Test*)0x100000;
//假设p的值为0x100000，如下表表达式的值分别是多少？
//已知，结构体Test类型的变量大小为20字节；；x86

int main() {
	printf("%p\n", p + 0x1);//一个结构体指针+1跳过一个结构体的大小
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
	int a[3][2] = { (0,1),(2,3),(4,5) };//逗号表达式，实际结果为{1,3,5}
	int* p;
	p = a[0];//数组名没有单独放在sizeof内部就表示首元素的地址，即a[0][0]的地址
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