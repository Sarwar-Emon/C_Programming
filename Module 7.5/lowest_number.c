#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    int mn=__INT_MAX__;
    int pos;
    for(int i=0;i<n;i++){
        if(ar[i]<mn){
            mn=ar[i];
            pos=i+1;
        }
    }
    printf("%d %d ",mn,pos);
    return 0;
}