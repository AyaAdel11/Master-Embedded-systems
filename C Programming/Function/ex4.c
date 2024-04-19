#include <stdio.h>
#include <stdlib.h>
int power_number(int n , int p)
{
    if(p!=0)
        return (n*power_number(n,p-1));
    else
        return 1;
}

int main()
{
    int n , p;
    printf("Enter base number : ");
    scanf("%d",&n);

    printf("Enter power number : ");
    scanf("%d",&p);

    printf("result = %d",power_number(n,p));


    return 0;
}
