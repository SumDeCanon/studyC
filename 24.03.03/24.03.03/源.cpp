/*
数组参数、指针参数
一维数组传参
二维数组传参
形参的二维数组，行可以省略，列不可
二维数组的数组名，表示首元素的地址，其实是第一行的地址
函数指针。。指向函数的指针



#include <stdio.h>


int Add(int x, int y) {
	return x + y;
}
int main() {
	int arr[5] = { 0 };
	int(*p)[5] = &arr;

	printf("%p\n", &Add);
	printf("%p\n", Add);//对于函数来说，&函数名和函数名都是函数的地址

	int (*pf)(int, int) = &Add;
}



#include <stdio.h>

int main() {
	//数组指针
	int arr2[5];
	int (*parr)[5] = &arr2;

	char* arr3[6];
	char* (*p3)[6] = &arr3;
	//指针数组
	int* arr[5];
	char* ch[5];
}
*/
#include <stdio.h>

int main() {
	(*(void(*)())0)();
	//以上代码是一次函数调用，调用的是0作为地址处的函数。1.把0强制类型转换为：无参，返回类型是void的函数的地址；2.调用0地址处的这个函数
	void(*signal(int, void(*)(int)))(int);
	/*以上代码第一次函数声明，声明的signal函数的第一个参数的类型是int, 
	第二个参数的类型是函数指针，该函数指针指向的函数参数是int，返回类型是void，signal函数的返回类型也是一个函数指针，该函数指针指向的函数参数是int，返回类型是void。*/
	return 0;
}