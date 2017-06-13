#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,fact=1,i;
    printf("Enter the number ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact = fact*i;
    }
    printf("The factorial of %d is %d",n,fact);
    return 0;
}
