#include<stdio.h>
int fac(int n)
{

    if(n==1||n==0){
        return 1;
    }
    else{
            int f=fac(n-1);
            int factorial=n*f;
            return factorial;
    }
}
int main()
{
    int n;
    printf("\nenter number ");
    scanf("%d",&n);
    int ans=fac(n);
    printf("%d",ans);

    return 0;
}
