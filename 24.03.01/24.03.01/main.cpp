#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

/*int main() {
    int n = 0;
    int m = 0;
    scanf("%d %d", &n, &m);
    int arr1[n];//C99 变长数组,vs不支持
    int arr2[m];
    int i = 0;
    for (i = 0; i < n; i++) {
        scanf("%d ", arr1 + i);
    }
    for (i = 0; i < m; i++) {
        scanf("%d ", arr2 + i);
    }
    //  cmp_nm(arr1, arr2,n,m);
    int j = 0;
    int k = 0;
    while ((j < n) && (k < m)) {
        if (arr1[j] < arr2[k]) {
            printf("%d ", arr1[j]);
            j++;
        }
        else {
            printf("%d ", arr2[k]);
            k++;
        }
    }
    if (j < n) {
        for (;j < n;j++) {
            printf("%d ", arr1[j]);
        }
    }
    else {
        for (;k < m;k++) {
            printf("%d ", arr2[k]);
        }
    }
    return 0;
}
1，字符指针
int main() {
     const char* p ="acfsjfs";//把字符串首字符a的地址，赋值给了p

    printf("%s\n", p);//%s打印时从首字符开始打印，遇到\0停止，%s打印字符串
    return 0;
}

int main(){
    const char* p1 = "abcdef";
    const char* p2 = "abcdef";

    char arr1[] = "abcdef";
    char arr2[] = "abcdef";

    if (p1 == p2)
        printf("p1 == p2\n");
    else
        printf("p1 != p2\n");

    if (arr1 == arr2)
        printf("arr1 == arr2\n");
    else
        printf("arr1 != arr2\n");
}
2.指针数组
用来存放指针的数组
int arr[10];整形数组
char ch[5];字符数组
int *arr2[6];存放整型指针的数组
char *arr3[5];存放字符指针的数组

int main() {
    int arr1[] = { 1,2,3,4,5 };
    int arr2[] = { 6,2,3,4,5 };
    int arr3[] = { 7,6,3,4,5 };

    int* parr[3] = { arr1,arr2,arr3 };

    int i = 0;
    for (i = 0; i < 3;i++) {
        int j = 0;
        for (j = 0;j < 5;j++) {
            printf("%d ", *(parr[i] + j));
        }
        printf("\n");
    }
    return 0;
}

3.数组指针
指向数组的指针
int *p1[10];
int (*p2)[10];
p1是指针数组，先与[]结合
p2是数组指针，先与*结合，该数组有10个元素，每个元素使int类型

数组名通常表示的都是数组首元素地址，但是有两个例外
1.sizeof(数组名)，这里的数组名表示整个数组，计算的是整个数组的大小
2.&数组名，这里的数组名表示的依然是整个数组，所以&数组名取出的是整个数组的地址


int main()
{
    int arr[10] = { 0 };
    printf("%p\n", arr);
    printf("%p\n", &arr[0]);

    int sz = sizeof(arr);
    printf("%d\n", sz);

    return 0;
}

*/

void print2(int(*p)[5], int r, int c) {
    int i = 0;
    for (i = 0;i < r;i++) {
        int j = 0;
        for (j = 0;j < c;j++) {
            printf("%d", p[i][j]);
        }
        printf("\n");
    }
}
int main() {
    int arr[3][5] = { 1,2,3,4,5,2,3,4,5,6,3,4,5,6,7 };
    print2(arr, 3, 5);//arr表示第一行的地址，是一个一维数组的地址
}