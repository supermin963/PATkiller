/*读入一个正整数 n，计算其各位数字之和，用汉语拼音写出和的每一位数字。

输入格式：
每个测试输入包含 1 个测试用例，即给出自然数 n 的值。这里保证 n 小于 10
​100.
输出格式：
在一行内输出 n 的各位数字之和的每一位，拼音数字间有 1 空格，但一行中最后一个拼音数字后没有空格。*/
#include<cstdio>
#include<String>
using namespace std;

int main(){
    int b,i,j = 0;
    long long n = 0;
    int a[100] = {0};
    string str[10] =  {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};
    scanf("%d", n);
    for(;n%10==0;n = n/10){
        a[j] = n%10;
        j ++;
    }
    for(i = 0;i<100;i++){
        b = b+a[i];
    }
	for (i = 0; i < 10; i++) {
		printf("%c", str[i]);
	}
	return 0;
}