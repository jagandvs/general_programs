#include <stdio.h>
#include <stdlib.h>

char toUppercase(char x)
{
    return x-32;
}
int main()
{
    char s[100];
    printf("Enter the string");
    scanf("%s",s);
    s[0]=toUppercase(s[0]);
    printf("%s",s);
    return 0;
}
