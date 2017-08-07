#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[200],i,n,j,temp;
    printf("Enter the number of elements into an array");
    scanf("%d",&n);
    printf("Enter the elements into an array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
                {
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }

        }
    }
    for(i=0;i<n;i++)
        printf("%d\n",a[i]);
    return 0;
}
