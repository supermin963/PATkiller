#include<stdio.h>
int main(){
    char words[90][90];
    int num=0;
    while(scanf("%s",words[num])!=EOF){
        num++;
    }//scanf!是以空格为标志录入的。
        for(int i= num-1;i>=0;i--){
            printf("%s",words[i]);
            if(i>0)printf(" ");//别忘记空格。
        }
    return 0;
}

