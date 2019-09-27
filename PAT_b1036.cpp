#include<stdio.h>
int main() {
	int n;
	char a;
	scanf("%d %c", &n, &a);//input n&char
	for (int i = 0; i < n; i++) {
		printf("%c", a);
	}//output first line of char
	printf("\n");
	for (int j = 0; j < (n / 2 + n % 2 - 2); j++) {
		printf("%c", a);
		for (int i = 0; i < n - 2; i++) {
			printf(" ");
		}
		printf("%c\n", a);
	}
	for (int i = 0; i < n; i++) {
		printf("%c", a);
	}
	return 0;
}