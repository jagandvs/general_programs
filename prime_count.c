#include<stdio.h>
#include<conio.h>
int main()
{
    int c=0,min,max,i,j,count;
    printf("Enter the limits to print a prime number");
    scanf("%d%d",&min,&max);

    for(i=min;i<=max;i++)
    {
        count=0;
        for(j=2;j<=i/2;j++)
        {

            if(i%j==0)
                count++;
        }
        if(count==0 && i!=1)
        {

            c++;
        }


    }
    printf("\nthe count of prime numbers between the range %d and %d is %d",min,max,c);

    return 0;
}