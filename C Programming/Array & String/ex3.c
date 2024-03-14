#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r,c;
    int a[100][100];
    printf("Enter number of rows and columns :  ");
    scanf("%d%d",&r ,&c);
   printf("Enter the elements of 1st matrix\n");
    for(int i=0;i<r;++i)
    {

        for(int j=0;j<c;++j)
        {
            printf("Enter a%d%d: ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }

    printf("Entered matrix:\n");
    for(int i=0;i<r;++i)
    {

        for(int j=0;j<c;++j)
        {
            printf("%d  ",a[i][j]);
        }
        printf("\n");
    }

    printf("Transpose of matrix:\n");
    for(int i=0;i<c;++i)
    {

        for(int j=0;j<r;++j)
        {
            printf("%d  ",a[j][i]);
        }
        printf("\n");
    }
    return 0;
}

