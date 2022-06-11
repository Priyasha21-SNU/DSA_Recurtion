#include<stdio.h>
int calpow(int n,int x)
{
    if(n==0)
        return 1;
    else if(x==0)
        return 0;
        else{
    int xpownm1=calpow(n-1,x);
    int xpown=x*xpownm1;
    return xpown;
       }
}
int main()
{
    int n,x,ans;
    printf("enter x " );
    scanf("%d",&x);
    printf("enter n " );
    scanf("%d",&n);
    //int ans=
    ans=calpow(n,x);
    printf("%d",ans);
    return 0;
}
