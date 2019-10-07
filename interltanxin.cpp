#include<cstdio>
#include<algorithm>
using namespace std;
const int maxn=100;
struct interval
{
    int x,y;
}I[maxn];

bool cmp(interval a,interval b){
    if(a.x!=b.x)return   a.x>b.x;//如果两个区间左端点不相等，那么大的放前面
    else     return a.y<b.y;//如果相等，小的放前面
}

int main(){
    int n;
    while (scanf("%d",&n),n!=0)
    {
        for(int i=0;i<n;i++){
            scanf("%d",&I[i].x);
        }
        for(int i=0;i<n;i++){
            scanf("%d",&I[i].y);
        }//将区间的两个端点输入
        sort(I,I+n,cmp);
        int ans =1;
        int lateX=0;
        for(int i=1;i<n;i++){
            if(I[i].y<=I[lateX].x){
                lateX =i;
                ++ans;
            }
        }
        printf("%d\n",ans);


    }
    


}