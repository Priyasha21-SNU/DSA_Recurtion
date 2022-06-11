#include<stdio.h>
void printnumber(int n){
    if(n==0){
        return;
    }
    printf("%d",n);
    printf("\n");
    printnumber(n-1);
    }


int main()
{
    int n;
    printf("\nenter the value of n");
    scanf("%d",&n);
     printnumber( n);
     return 0;

}
