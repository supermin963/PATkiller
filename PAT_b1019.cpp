#include<cstdio>
#include<algorithm>
using namespace std;

void num2arry(int num, int a[]){
    for(int i=0; i<4;i++){
        a[i]=num%10;
        num = num/10;
    }
}//用来作为的函数。
int arry2num(int a[]){
    int num=0;
    for(int i=0;i<4;i++){
        num=num*10+a[i];
    }
    return num;
}
bool cmp(int a, int b){
    return a>b;//从大到小排序
}

int main(){
    int num,max,min;//接收的数字最大值最小值
    int a[4];
    scanf("%d",&num);
    while(1){
        num2arry(num,a);
        sort(a,a+4);//从小到大排序
        min=arry2num(a);
        sort(a,a+4,cmp);
        max=arry2num(a);
        num=max-min;
        printf("%04d - %04d = %04d\n",max,min,num);
        if(num==0||num==6174)
            break;

    }
    return 0;    
}