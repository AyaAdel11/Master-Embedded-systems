#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n ,x ,l;
    int a[100];
    printf("Enter Number of elements : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nEnter the element to be searched : ");
    scanf("%d",&x);

    int found;


    for(int i=1;i<=n;i++)
    {
        if(a[i]==x)
        {
            printf("Number found at location = %d",i);
            found=1;
            break;
        }

    }
    if(found!=1)
        printf("Number not found");



    return 0;
}


