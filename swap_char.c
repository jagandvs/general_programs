#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char s[100],temp;
    int j;
    printf("Enter the string");
    scanf("%s",s);
    for(j=0;j<=strlen(s);j=j+2)
    {
       temp=s[j];
       s[j]=s[j+1];
       s[j+1]=temp;
    }
    printf("%s",s);

    return 0;
}
