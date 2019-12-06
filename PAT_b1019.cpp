#include<cstdio>
using namespace std;

void num2arry(int num, int a[]){
    for(int i=0; i<4;i++){
        a[i]=num%10;
        num = num/10;
    }
}

int main(){
    int num,max,min;//接收的数字
    int a[4];
    scanf("%d",&num);

    
}