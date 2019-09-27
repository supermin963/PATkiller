#include<cstdio>
#include<algorithm>
using namespace std;
struct mooncake//用来存月饼
{
    double store;//某一种月饼的总量
    double sell;//总销售额
    double price;//单间
} cake[10010];

bool cmp(mooncake a ,mooncake b){
    return a.price>b.price; 
}//编一个cmp函数，sort函数用的

int main(){
    int n;
    double d;//需求量
    scanf("%d%lf",&n,&d);//输入我们的月饼种类和需求量
    for(int i =0;i<n;i++){
        scanf("%lf",&cake[i].store);
    }
    for(int i=0;i<n;i++){
        scanf("%lf",&cake[i].sell);
        cake[i].price=cake[i].sell/cake[i].store;//输完就除好存起来吧
    }
    sort(cake,cake+n,cmp);//sort函数的性质，输入要排序的首尾地址
    //此时cake里面的项目，最前面的最大哦，所以从大的开始搞吧。
    double ans = 0;

    for(int i=0;i<n;i++){
        if(cake[i].store<d){//如果这种cake的量小于d，那么刚好。
            ans+=cake[i].sell;
            d-=cake[i].store;
        }
        else{//小于也不是不行。
            ans +=d*cake[i].price;
            break;//但是小于之后要break
        }
    }
    printf("%0.2f\n",ans);
    return 0;
}

