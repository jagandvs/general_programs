#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s[100];
    int i,j,alphabet=0,numerics=0,character=0;
    printf("Enter the string");
    scanf("%s",s);
    for(i=0;s[i]!='\0';i++);
    for(j=0;j<i;j++)
    {
        if((s[j]>='a' &&s[j]<='z' )||( s[j]>='A' && s[j]<='Z'))
            alphabet++;
        else if(s[j]>=48 && s[j]<=57)
            numerics++;
        else
            character++;
    }
    printf("alphabet = %d\nnumerics= %d\ncharacter=%d",alphabet,numerics,character);
    return 0;
}
