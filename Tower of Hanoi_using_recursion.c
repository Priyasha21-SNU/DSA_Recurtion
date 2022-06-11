#include<stdio.h>
void TOH(int num, char source, char helper,char dastingnation )
{
    if(num>=1)
    {
        TOH(num-1,source, helper, dastingnation);
        printf("%d disk move %c to %c\n",num,source,dastingnation);
        TOH(num-1,helper,source,dastingnation);
    }
}
int main()
{
  int num;
    printf("\nenter the number of disk: ");
    scanf("%d",&num);
    printf("\n");
    TOH(num,'s','h','d');
    return 0;

}

