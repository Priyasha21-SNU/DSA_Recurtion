#include<stdio.h>
#include<string.h>
 Bool issort(int arr[],int n){
     if(n==arr.length-1)
        return true;
    if(arr[n]<arr[n+1]){
        issort( arr[],n+1);
    }
    else
        return false;
 }
int main(){
    int arr[]={1,3,5};
int ans = issort( arr[],0);
    printf("\n%d",ans);
    return 0;

    }
