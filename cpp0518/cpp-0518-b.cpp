#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#if 0
void test(char **p) {


}

int main() {
	//char arr[] = "asdsfsaas";
	char *arr[5] = { "ad", "asdsad", "sdsfssad", "sdasda", "sdsd" };
	test(arr);
	test(&arr[0]);
	system("pause");
	return 0;
}
#endif

#if 0
//char *mymalloc() {
//	static char a[100];
//	return a;
//}

void mymalloc1(char **p) {
	static char a[100];
	*p = a;
}

int main() {
	char *str = NULL;
	mymalloc1(&str);
	//str = mymalloc();
	strcpy(str, "hello world");
	puts(str);
	system("pause");
	return 0;
}
#endif

#if 0
int main() {
	int a[] = { 1, 2, 3, 4 };
	printf("%d\n", sizeof(a));//16
	printf("%d\n", sizeof(a+0));//4
	printf("%d\n", sizeof(*a));//4
	printf("%d\n", sizeof(a+1));//4
	printf("%d\n", sizeof(a[1])); //4
	printf("%d\n", sizeof(&a));//4
	printf("%d\n", sizeof(*&a));//16
	printf("%d\n", sizeof(&a+1));//4
	printf("%d\n", sizeof(a[0]));//4
	printf("%d\n", sizeof(a[0]+1));//4

	char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
	printf("%d\n", sizeof(arr));//6
	printf("%d\n", sizeof(arr + 0));//4
	printf("%d\n", sizeof(*arr));//1
	printf("%d\n", sizeof(arr[1]));//1
	printf("%d\n", sizeof(&arr));//4
	printf("%d\n", sizeof(&arr + 1));//4
	printf("%d\n", sizeof(&arr[0] + 1));//4

	printf("%d\n", strlen(arr));//?
	printf("%d\n", strlen(arr + 0));//?
	//printf("%d\n", strlen(*arr));//char类型不能放在strlen（）里面，
	//printf("%d\n", strlen(arr[1]));
	//printf("%d\n", strlen(&arr));
	//printf("%d\n", strlen(&arr + 1));
	printf("%d\n", strlen(&arr[0] + 1));

	char arr[] = "abcdef";
	printf("%d\n", sizeof(arr));
	printf("%d\n", sizeof(arr + 0));
	printf("%d\n", sizeof(*arr));
	printf("%d\n", sizeof(arr[1]));
	printf("%d\n", sizeof(&arr));
	printf("%d\n", sizeof(&arr + 1));
	printf("%d\n", sizeof(&arr[0] + 1));

	printf("%d\n", strlen(arr));//6
	printf("%d\n", strlen(arr + 0));//6
	//printf("%d\n", strlen(*arr));
	//printf("%d\n", strlen(arr[1]));
	//printf("%d\n", strlen(&arr));
	//printf("%d\n", strlen(&arr + 1));
	printf("%d\n", strlen(&arr[0] + 1));//5

	char *p = "abcdef";
	printf("%d\n", sizeof(p));//4
	printf("%d\n", sizeof(p + 1));//4
	printf("%d\n", sizeof(*p));// 1
	printf("%d\n", sizeof(p[0]));//1
	printf("%d\n", sizeof(&p));//4
	printf("%d\n", sizeof(&p + 1));//4
	printf("%d\n", sizeof(&p[0] + 1));//4

	//printf("%d\n", strlen(p));
	//printf("%d\n", strlen(p + 1));
	//printf("%d\n", strlen(*p));
	//printf("%d\n", strlen(p[0]));
	//printf("%d\n", strlen(&p));
	//printf("%d\n", strlen(&p + 1));
	//printf("%d\n", strlen(&p[0] + 1));

	system("pause");
	return 0;
}
#endif

#if 0
//1. sizeof(数组名)，这里的数组名表示整个数组，计算的是整个数组的大小。
//2. &数组名，这里的数组名表示整个数组，取出的是整个数组的地址。
//3. 除此之外所有的数组名都表示首元素的地址。
int main() {
	int a[3][4] = { 0 };
	printf("%d\n", sizeof(a));
	printf("%d\n", sizeof(a[0][0]));
	printf("%d\n", sizeof(a[0]));
	printf("%d\n", sizeof(a[0] + 1));
	printf("%d\n", sizeof(*(a[0] + 1)));
	printf("%d\n", sizeof(a + 1));
	printf("%d\n", sizeof(*(a + 1)));
	printf("%d\n", sizeof(&a[0] + 1));
	printf("%d\n", sizeof(*(&a[0] + 1)));
	printf("%d\n", sizeof(*a));
	printf("%d\n", sizeof(a[3]));
	system("pause");
	return 0;
}
#endif

#if 0
int main() {
	int a = 6;
	int *p = &a;
	printf("%p\n", p);
	printf("%p\n", p + 0x1);
	printf("%p\n", (unsigned long)p + 0x1);
	printf("%p\n", (short*)p + 0x1);
	printf("%p\n", (unsigned int*)p + 0x1);
	system("pause");
	return 0;
}
#endif

#if 0
int main()
{
	char *c[] = { "ENTER", "NEW", "POINT", "FIRST" };
	char **cp[] = { c + 3, c + 2, c + 1, c };
	char ***cpp = cp;
	printf("%s\n", **++cpp);//POINT
	printf("%s\n", *--*++cpp + 3);//ER
	printf("%s\n", *cpp[-2] + 3);//ST
	printf("%s\n", cpp[-1][-1] + 1);//EW
	system("pause");
	return 0;
}
#endif

#if 0
int main() {
	char *a[] = { "work", "at", "alibaba" };
	char **pa = a;
	pa++;
	printf("%s\n", *pa);
	system("pause");
	return 0;
}
#endif

#if 0
int main(int argc, char * argv[]) {
	int a[3][2] = { (0, 1), (2, 3), (4, 5) };//int a[3][2] = { 1, 3, 5 };
	int *p;
	p = a[1];
	printf("%d\n", p[0]);
	system("pause");
	return 0;
}
#endif

#if 0
int main()
{
	int a[4] = { 1, 2, 3, 4 };
	int *ptr1 = (int *)(&a + 1);
	int *ptr2 = (int *)((int)a + 1);
	printf("%x,%x\n", ptr1[-1], *ptr2);
	system("pause");
	return 0;
}
#endif
