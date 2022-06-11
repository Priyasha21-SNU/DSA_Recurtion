#include<stdio.h>
int fibo(int n,int x,int y)
{

   if(n==1){
   return x;
   }
   else if (n==2){
        return y;
   }
   else{
    return(n-1,y,x+y);
   }
}
int main()
{
  int n;
  int x=0;
  int y=1;
  printf("\nenter number ");
  scanf("%d",&n);
  printf("%d",x);
  printf("%d",y);
    int ans=fibo( x,y,n-2);
    printf("%d",ans);

  return 0;
}

