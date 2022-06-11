#include<stdio.h>
 void TOH(int n,char s,char h,char d){
    if(n>=1)
    {
    TOH(n-1,s,h,d);
    printf("transfer disk number %d from %c to %c\n",n,s,d);
    TOH(n-1,h,s,d);
    }
 }
int main()
{
  int n;
   printf("enter no of disk ");
   scanf("%d",&n);
   TOH(n,'S','H','D');
   printf("\n");
   //printf("answer is=%d",ans);
   return 0;
}

