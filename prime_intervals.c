#include<stdio.h>
#include<conio.h>
int main()
{
    int min,max,i,j,count;
    printf("Enter the limits to print a prime number");
    scanf("%d%d",&min,&max);
    printf("The prime numbers are");
    for(i=min;i<=max;i++)
    {
        count=0;
        for(j=2;j<=i/2;j++)
        {

            if(i%j==0)
                count++;
        }
        if(count==0 && i!=1)
            printf("%d\t",i);
    }
    return 0;
}
