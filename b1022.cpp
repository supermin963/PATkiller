#include<stdio.h>
int main() {
	int a, b, c, d;
	int i;
	int e[32] = {};//����װd���Ƶĸ�����ֵ
	scanf("%d%d%d", &a, &b, &d);
	c = a + b;//���
	for (i = 0; c % d != 0; i++) {
		e[i] = c % d;
		c = c / d;
	}
	for (i = 0; e[i] != 0;)i++;
	for (; i >= 0; i--) {
		printf("%d", e[i]);
	}
	return 0;
}