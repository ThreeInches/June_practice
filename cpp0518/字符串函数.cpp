#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#if 0
int main() {
	char a[10] = { 'a', 'b', 'c', 'd', 'e' };
	char b[] = { 'a', 'b', 'c', 'd', 'e' };
	char c[] = "123456";
	char str[] = "abc\012abc";
	char str1[] = "abc\0abc";
	int n, m, z;
	n = strlen(a);
	m = strlen(b);
	z = strlen(c);
	printf("%d,%d,%d\n", n, m, z);
	int p, q;
	p = strlen(str);
	q = strlen(str1);
	printf("%d,%d\n", p, q);
	system("pause");
	return 0;
}
#endif

//strcpy
#if 0
int main() {
	char a[20] = "12345678";
	char b[20] = "qwer";
	strcpy(a, b);
	printf("%s\n", a);
	puts(a);
	//for (int i = 0; i < 20; i++) {
	//	putchar(a[i]);
	//}
	system("pause");
	return 0;
}
#endif

#if 0
//strcat拼接一个字符串
int main() {
	char a[20] = "12345678";
	char b[20] = "qwer";
	strcat(a, b);
	puts(a);
	system("pause");
	return 0;
}
#endif

#if 0
//strcmp比较两个字符串
int main() {
	char a[20] = "12345678";
	char b[20] = "qwer";
	int c = strcmp(a, b);
	printf("%d", c);
	system("pause");
	return 0;
}
#endif

#if 0
//strtok
int main() {
	//"i,am.a student"
	char str[] = "i,am.a student";
	char sep[] = ",. ";
	char *tok = NULL;
	for (tok = strtok(str, sep); tok != NULL; tok = strtok(NULL, sep)) {
		puts(tok);
	}
	system("pause");
	return 0;
}
#endif