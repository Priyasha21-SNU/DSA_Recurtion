#include<stdio.h>
void printnum(int n){

    if(n==6)
        return;
    printf("%d",n);
    printf("\n");
    printnum(n+1);
    }
int main()
{
  int n;
  printf("\nenter 1st number=");
  scanf("%d",&n);

  printnum(n);
  return 0;
}
