#include<cstdio>
int main(){
    int a[10];
    int flag=0;

    for(int i=0;i<10;i++){
        scanf("%d",&a[i]);
    }//将数据读入。形式为0-9各多少个

    for(int i=1;i<10;i++){
        if(a[i]) flag =i;
        printf("%d",flag);
        a[flag]=a[flag]-1;//找到除0外的第一不为零的数，然后输出撒。别忘了减去
        break;//找到了就中断！
    }
    
    for(int i=0;i<10;i++){
            for(int j=0;j<a[i];j++){
                printf("%d",i);//遍历，如果这个格子有几个就输出几个
            }
    }

    return 0;
}

