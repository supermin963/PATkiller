#include<cstdio>
const int maxn= 10010;
bool hashTable[maxn]={false};//定义一个false
int main(){
    int n,m,x;
    scanf("%d%d",&n,&m);//先输入的是接受的数量
    for(int i =0;i<n;i++){
        scanf("%d",&x);//x存进来。
        hashTable[x]=true;        
    }
    for(int i=0;i<m;i++){
        scanf("%d",&x);
        if(hashTable[x]=true){
            printf("I have it!!");
        }
        else
        printf("meidemeide");
    }
    return 0;
}