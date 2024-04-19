#include <stdio.h>
#include <stdlib.h>
int prime_number(int start , int end)
{
    int i,flag;
    for ( i=start+1 ; i<=end ; i++)
    {
        flag=0;
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
            {
                flag=1;
                break;
            }

        }
            if(flag==0)
                printf("%d\t",i);
    }

}

int main()
{
    int n1,n2;
    printf("Enter tow numbers (interval) : ");
    scanf("%d%d",&n1,&n2);
    printf("Prime number between %d to %d : " , n1,n2);
    prime_number(n1,n2);
    return 0;
}
