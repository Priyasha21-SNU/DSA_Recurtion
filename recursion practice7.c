
#include<stdio.h>
int calpow(int x,int n)
{
    if(n==0)
        return 1;
    else if(x==0)
        return 0;
     else if(n%2==0){
        return calpow(x,n/2)*calpow(x,n/2);
    }
    else
        return calpow(x,n/2)*calpow(x,n/2)*x;


}
int main()
{
    int n,x,ans;
    printf("enter x " );
    scanf("%d",&x);
    printf("enter n " );
    scanf("%d",&n);
    //int ans=
    ans=calpow(x,n);
    printf("%d",ans);
    return 0;
}
