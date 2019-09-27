#include <stdio.h>
int k[50] = { 0 };
int main() {
	int a, b, c;//input a,b,c all %d
	int d;
	scanf("%d %d %d", &a, &b, &d);
	c = a + b;
	int j = 0;
    if (c!=0){//需要考虑c为0的情况
	    while (c) {
		    k[j] = c % d;
		    j++;
		    c = c / d;
	    }
    }
    else
    {
        printf("0");//为零直接输出咯
    }
	for (j = j - 1; j >= 0; j--) {
		printf("%d", k[j]);
	}
	return 0;
}
