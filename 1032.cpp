/*为了用事实说明挖掘机技术到底哪家强，PAT 组织了一场挖掘机技能大赛。现请你根据比赛结果统计出技术最强的那个学校。

输入格式：
输入在第 1 行给出不超过 10
​5
​​  的正整数 N，即参赛人数。随后 N 行，每行给出一位参赛者的信息和成绩，包括其所代表的学校的编号（从 1 开始连续编号）、及其比赛成绩（百分制），中间以空格分隔。

输出格式：
在一行中给出总得分最高的学校的编号、及其总分，中间以空格分隔。题目保证答案唯一，没有并列。*/




#include <stdio.h>
const int maxn = 100000;
int school [maxn] = {0};//定义一个大的数组 
int main(){
    int n,score,schID;//n用来接收数组数量，score，schid，就是两组数据咯
    int max,maxid =0;
    scanf("%d",&n);
    for(int i = 0;i<n;i++){
        scanf("%d%d",&schID,&score);
        school[schID] +=score;
    }//第一个循环收下这些数据，存到对应的数组里面。
    for(int i = 1; i<=n; i++){
        if(school[i]>max) {
        max = school[i];
        maxid = i;
        }
    }//第二个循环，找到最大的就好了。
    printf("%d %d",maxid,max);
    return 0;
}