#include<stdio.h>
void printsum(int n,int sum,int i){
    if(i==n){
        return;
    }
     sum=0;
    //sum=sum+i;
    //printf("%d",sum);

    printsum(n,sum,i+1);
    sum=sum+i;
    printf("%d",sum);
}
int main()
{
    int n,i=1,sum=0;
  printf("\nenter number=");
  scanf("%d",&n);
  printsum( n, sum, i);
    return 0;
}
