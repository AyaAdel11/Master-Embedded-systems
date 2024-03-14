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
    printf("\nEnter the element to be inserted : ");
    scanf("%d",&x);
    printf("\nEnter the location: ");
    scanf("%d",&l);

    for(int i=1;i<=l;i++)
    {
        a[l]=x;
    }
    for(int i=1;i<=n;i++)
    {
        printf("%d ",a[i]);
    }


    return 0;
}

