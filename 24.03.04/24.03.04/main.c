/*
#include <stdio.h>

int main() {
	//����ָ������
	int(*pfArr[])(int, int) = { 0,Add,Sub,Mul,Div };

	//ָ�򡾺���ָ�����顿��ָ��
	int (*(*ppfArr)[5])(int, int) = &pfArr;

	return 0;
}
�ص�����
һ��ͨ������ָ����õĺ����������Ѻ�����ָ�루��ַ����Ϊ�������ݸ���һ�������������ָ�뱻������������ָ��ĺ���ʱ�����Ǿ�˵���ǻص�������

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