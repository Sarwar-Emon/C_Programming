#include<stdio.h>
int main()
{
    char a[]="sayem";
    int sz= sizeof(a)/sizeof(char);
    printf("%d\n",sz);
    printf("%s",a);
    
    return 0;
}