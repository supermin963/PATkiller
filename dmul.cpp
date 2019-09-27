# include<cstdio>
int f(int n){
    if(n==1)
        return 1;
        else
        {
            return n*f(n-1);
        }
        
}
int main(){
    int a= f(6);
    printf("%d\n",a);
    return 0;

}
