#include<cstring>
#include<cstdio>

int isnt(char str[]){
    int len=strlen(str);
    int flag=1;
    for(int i=0;i<=len/2;i++){
        if(str[i]!=str[len-i-1]){
            flag=0;
        }
    }
    return flag;
}//函数用来判定是否为回文序列

int main(){
    char str[267];
    int flag;
    while(gets(str)){
        flag = isnt(str);
        if(flag){
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
        
    }
    return 0;
}