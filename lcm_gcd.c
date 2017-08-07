#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,i=1,gcd;
    printf("Enter the numbers");
    scanf("%d%d",&a,&b);
    n:
    if(i%a==0 && i%b==0)
    {
        printf("Lcm = %d\n",i);
        goto c;

    }
    else
        i++;
    goto n;
        c:
            gcd=a*b/i;
    printf("gcd =%d",gcd);

    return 0;
}
