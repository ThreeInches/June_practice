#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#if 0
int main() {
	//sem
	//9.0
	//1001.0
	//1.001
	//0(符号位) 10000010(127+3) 001 (32-8-1-3)00000000000000000
	//00000000 00000000 00000000 00001001

	int n = 9;
	float* pFloat = (float*)&n;
	printf("n = %d\n", n);
	printf("*pFloat = %f\n", *pFloat);
	*pFloat = 9.0;
	printf("n = %d\n", n);
	printf("*pFloat = %f\n", *pFloat);
	system("pause");
	return 0;
}

int main() {
	char a = -1;
	signed b = -1;
	unsigned c = -1;
	printf("%d,%d,%d", a, b, c);
	putchar('\n');
	printf("%u,%u,%u", a, b, c);
	system("pause");
	return 0;
}

int main() {
	char a = -128;
	//10000000
	//11111111
	//10000000
	//11111111 11111111 11111111 10000000
	char b = -127;
	//01111111
	//10000000
	//10000001
	//11111111 11111111 11111111 10000001
	char c = -126;
	//01111110
	//10000001
	//10000010
	//11111111 11111111 11111111 10000010
	printf("%d,%d,%d", a, b, c);
	putchar('\n');
	printf("%u,%u,%u", a, b, c);
	system("pause");
	return 0;
}

int main() {
	int a = 20;
	int b = -10;
	//10000000 00000000 00000000 00001010 => 10(源码)
	//11111111 11111111 11111111 11110101 => -10(反码)
	//11111111 11111111 11111111 11110110 => -10(补码)
	//ff ff ff f6
	system("pause");
	return 0;
}

int main (){
	int a = 1;
	int b = -1;
	//00000000 00000000 00000000 00000001 => 1
	//10000000 00000000 00000000 00000001 => -1(源码)
	//11111111 11111111 11111111 11111110 => -1(反码)
	//11111111 11111111 11111111 11111111 => -1(补码)
	system("pause");
	return 0;
}
#endif

#if 0
//通过函数指正调用函数
int add(int a, int b) {
	return a + b;
}

int mul(int a, int b) {
	return a - b;
}

void test(int a, int b, int(*p)(int, int)) {

}

int main() {
	printf("%d",test(1,2,add));
	printf("%d",test(1,2,mul));
	system("pasue");
	return 0;
}
#endif

#if 0
int cmp(const void* p1, const void* p2) {
	return *(int *)p1 - *(int *)p2;
}

int main() {
	int arr[] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 10 };
	int size = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, size, sizeof(int), cmp);
	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
	putchar('\n');
	system("pause");
	return 0;
}
#endif

#if 0

//int  main() {
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	int(*p)[10];
//	p = &arr;
//	return 0;
//}

int main() {
	int a[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};//a可以当做指针数组来处理 int(*)[4]
	int b[10];//b代表数组b首元素首地址
	printf("%d,%d\n", a, *a);
	printf("%d,%d\n", a, a + 1);
	printf("%d,%d\n", *a, *a + 1);
	printf("%d,%d\n", *(a + 1), a[1]);
	printf("%d,%d,%d,%d,%d\n", **a, *(*a + 1), *(*(a + 1 + 1)), *(*a + 1 + 1), *(*(a + 1) + 3));
	//1 2 9 3 8
	int(*p)[4];
	int i, j;
	p = a;
	for (p = a; p < a + 3; p++) {
		for (j = 0; j < 4; j++) {
				printf("%d ", *(*p + j));
			}
		putchar('\n');
	}
	//for (i = 0; i < 3; i++) {
	//	for (j = 0; j < 4; j++) {
	//		printf("%d ", *(*(p + i) + j));
	//	}
	//	putchar('\n');
	//}
	system("pause");
	return 0;
}
#endif

#if 0
int main() {

	system("pause");
	return 0;
}
#endif

#if 0
void output(int arr[][4]) {

}

void output1(int(*p)[4]) {

}

int main() {
	int arr[3][4] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };
	output(arr);
	return 0;
}
#endif

#if 0
int main() {
	int arr[3][4] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };
	int(*p)[4];//数组指针
	int *q[3];//指针数组
	int i, j;
	p = arr;
	for (i = 0; i < 3; i++) {
		q[i] = arr[i];
	}
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 4; j++) {
			printf("%d ", *(q[i] + j));
		}
		putchar('\n');
	}
	system("pause");
	return 0;
}
#endif

#if 0

int main() {
	//char name[60][30];
	//char(*name)[5] = { "lili", "zhansan", "ssdsadasda", "aa", "sdad" };
	char *name[5] = { "cili", "zhansan", "ssdsadasda", "aa", "sdad" };
	printf("%c\n", *name[0]);
	//char tmp[20];
	char* p = "111";
	char* q = "222";
	//strcpy(tmp, p);
	//strcpy(p, q);
	//strcpy(q, tmp);
	char *tmp = NULL;
	tmp = p;
	p = q;
	q = tmp;
	puts("%s", p);
	puts("%s", q);
	system("pause");
	return 0;
}
#endif

#if 0
int main(){
	int arr[5];
	int* parr1[10];
	int(*parr2)[10];
	int(*parr3[10])[5];//数组指针数组
}
#endif

#if 0
void test(int a[], int n) {
	printf("%d\n", sizeof(a));//4
}

int main() {
	int a[100];
	printf("%d\n", sizeof(a));//400
	test(a, 100);
	system("pause");
	return 0;
}
#endif

#if 0
void test(int* p, int n);
void test1(int**p, int n);
int main() {
	int* p[4];
	test1(p, 4);
}
#endif

#if 0
int main(){
	int a = 5;
	int *p = &a;
	int **q = &p;
	printf("%d,%d,%d", a, *p, **q);
	system("pause");
	return 0;
}
#endif

#if 0
int main(){
	int a[5] = { 1, 2, 3, 4, 5 };
	int *q[5] = { &a[0], &a[1], &a[2], &a[3], &a[4] };
	int **p = q;
	int i;
	for (i = 0; i < 5; i++) {
		//printf("%d ",*q[i]);
		printf("%d ", **(q + i));
	}
	putchar('\n');
	for (p = q; p < q + 5; p++) {
		printf("%d ", **p);
	}
	system("pause");
	return 0;
}
#endif