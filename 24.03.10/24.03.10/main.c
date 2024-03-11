#include<stdio.h>

int main() {

	int a[3][4] = { 0 };
	printf("%d\n", sizeof(a));//48
	printf("%d\n", sizeof(a[0][0]));//4
	printf("%d\n", sizeof(a[0]));//代表第一行的数组名，数组名单独放在sizeof内部表示整个数组，故为16
	printf("%d\n", sizeof(a[0]+1));//&a[0][0]+1,代表第一行第二个元素的地址
	printf("%d\n", sizeof(*(a[0]+1)));//第一行第二个元素的大小为4个字节
	printf("%d\n", sizeof(a+1));//a表示首元素地址，二维数组的首元素是他的第一行，a就是第一行的地址，数组的地址+1就是第二行的地址，地址就是4或8个字节
	printf("%d\n", sizeof(*(a+1)));//第二行整个数组的大小，答案为 16
	printf("%d\n", sizeof(&a[0]+1));//对第一行的数组名取地址，拿出的是第一行的地址，+1后得到的是第二行的地址，4或8
	printf("%d\n", sizeof(*(&a[0]+1)));//第二行的地址解应用就是16
	printf("%d\n", sizeof(*a));//第一行地址解引用，答案是16
	printf("%d\n", sizeof(a[3]));//16



	return 0;
}