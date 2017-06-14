#include<stdio.h>
int main()
{
    char ch;
    printf("enter character");
    scanf("%c",&ch);
    if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
            printf("The entered character is an alphabet");
        else
            printf("The entered character is not an alphabet");

    return 0;
}
