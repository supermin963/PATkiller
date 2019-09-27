#include<cstdio>
int f(int n){
    if(n==0||n==1)
        return n;
    else    return (f(n-1)+f(n-2));    
}

int main(){
    int a =f(6);
    printf("%d\n",a);
    return 0;
}