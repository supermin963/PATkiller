#include<stdio.h>
int a[200];
int main(){
    int i,j,n;
    int x;
    while(scanf("%d",&n)!=EOF){
        int flag=0;
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        scanf("%d",&x);
        for(j=0;j<n;j++){
            if(a[j]==x){
                printf("%d\n",j);
                flag=1;
                break;
            }
        }
        if(j==n)
        printf("-1\n");
    }
    return 0;
}