#include <stdio.h>
/*
int main() {
	int aa[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
	int* ptr1 = (int*)(&aa + 1);//&a代表整个数组的地址
	int* ptr2 = (int*)(*(aa + 1));//aa代表数组元素地址，即首行地址
	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
	return 0;
}

int main() {
	char* a[] = { "work","at","alibaba" };
	char** pa = a;

	pa++;
	printf("%s\n", *pa);//%s打印字符串从首字符地址开始打印直到字符串结束
	return 0; 
}
*/

int main() {
	char* c[] = { "ENTER","NEW","POINT","FIRST" };
	char** cp[] = { c + 3,c + 2,c + 1,c };
	char*** cpp = cp;
	printf("%s\n", **++cpp);
	printf("%s\n", *-- * ++cpp + 3);
	printf("%s\n", cpp[-1][-1] + 1);
	return 0;
}