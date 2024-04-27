#include<stdio.h>
#include<string.h>
int main()
{
    char a[100], b[100];
    scanf("%s %s", a, b);

    int result = strcmp(a, b);
    if (result < 0)
        printf("%s\n", a);
    else if (result > 0)
        printf("%s\n", b);
    else // When both strings are equal
        printf("%s\n", a); // or printf("%s\n", b);

    return 0;
}
