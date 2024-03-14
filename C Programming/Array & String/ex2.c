#include <stdio.h>
#include <stdlib.h>


int main()
{

    int n;
    float a[100],sum=0.0;
    printf("Enter number of data : ");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        printf("%d. Enter number : ",i+1);
        scanf("%f",&a[i]);
        printf("\n");
        sum+=a[i];
    }
    float ava=sum/n;
    printf("the avarage = %.1f",ava);

}




