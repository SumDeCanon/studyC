#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

/*int main() {
    int n = 0;
    int m = 0;
    scanf("%d %d", &n, &m);
    int arr1[n];//C99 �䳤����,vs��֧��
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
1���ַ�ָ��
int main() {
     const char* p ="acfsjfs";//���ַ������ַ�a�ĵ�ַ����ֵ����p

    printf("%s\n", p);//%s��ӡʱ�����ַ���ʼ��ӡ������\0ֹͣ��%s��ӡ�ַ���
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
2.ָ������
�������ָ�������
int arr[10];��������
char ch[5];�ַ�����
int *arr2[6];�������ָ�������
char *arr3[5];����ַ�ָ�������

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

3.����ָ��
ָ�������ָ��
int *p1[10];
int (*p2)[10];
p1��ָ�����飬����[]���
p2������ָ�룬����*��ϣ���������10��Ԫ�أ�ÿ��Ԫ��ʹint����

������ͨ����ʾ�Ķ���������Ԫ�ص�ַ����������������
1.sizeof(������)���������������ʾ�������飬���������������Ĵ�С
2.&���������������������ʾ����Ȼ���������飬����&������ȡ��������������ĵ�ַ


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
    print2(arr, 3, 5);//arr��ʾ��һ�еĵ�ַ����һ��һά����ĵ�ַ
}