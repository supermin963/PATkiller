/*美国总统奥巴马不仅呼吁所有人都学习编程，甚至以身作则编写代码，成为美国历史上首位编写计算机代码的总统。2014 年底，为庆祝“计算机科学教育周”正式启动，奥巴马编写了很简单的计算机代码：在屏幕上画一个正方形。现在你也跟他一起画吧！

输入格式：
输入在一行中给出正方形边长 N（3≤N≤20）和组成正方形边的某种字符 C，间隔一个空格。

输出格式：
输出由给定字符 C 画出的正方形。但是注意到行间距比列间距大，所以为了让结果看上去更像正方形，我们输出的行数实际上是列数的 50%（四舍五入取整）。*/
#include <cstdio>
int main(){
    int clo,row;//n为边长，r，c分别为行列数目。
    int i = 0;//tag
    char ch;
    scanf("%d %c",&clo,&ch);
    if(clo%2==0)row = clo/2;
    else row = clo/2+1;
    for(i=0;i<clo;i++){
        printf("%c",ch);
    }//打印第一行的char
    printf("\n");//别忘了换行
    for(i=2;i<row;i++){
        printf("%c",ch);
        for(int j=1;j<clo-1;j++)
        {printf(" ");}
        printf("%c\n",ch);
    }//循环打印里面的
    for(i=0;i<clo;i++){
        printf("%c",ch);
    }
    printf("\n");//打印最后一行
    return 0;

}
