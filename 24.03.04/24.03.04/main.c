/*
#include <stdio.h>

int main() {
	//函数指针数组
	int(*pfArr[])(int, int) = { 0,Add,Sub,Mul,Div };

	//指向【函数指针数组】的指针
	int (*(*ppfArr)[5])(int, int) = &pfArr;

	return 0;
}
回调函数
一个通过函数指针调用的函数，如果你把函数的指针（地址）作为参数传递给另一个函数，而这个指针被用来调用其所指向的函数时，我们就说这是回调函数。

void qsort(void
*/  

#include<stdio.h>

int cmp_int(const void* e1, const void* e2) {
	return(*(int*)e2 - *(int*)e1);
}

int main() {
	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
	int sz = sizeof(arr) / sizeof(arr[0]);

	qsort(arr, sz, sizeof(arr[0]), cmp_int);

	int i = 0;
	for (i = 0;i < sz;i++) {
		printf("%d ", arr[i]);
	}

	return 0;
}