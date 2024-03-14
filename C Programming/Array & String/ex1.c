int main()
{
    float a[2][2];
    float b[2][2];
    float c[2][2];

    printf("Enter the elements of 1st matrix\n");
    for(int i=0;i<2;++i)
    {

        for(int j=0;j<2;++j)
        {
            printf("Enter a%d%d: ",i+1,j+1);
            scanf("%f",&a[i][j]);
        }
    }

    printf("Enter the elements of 2nd matrix\n");
    for(int i=0;i<2;++i)
    {

        for(int j=0;j<2;++j)
        {
            printf("Enter b%d%d: ",i+1,j+1);
            scanf("%f",&b[i][j]);
        }
    }

    printf("sum of matrix\n");
        for(int i=0;i<2;i++)
    {

        for(int j=0;j<2;j++)
        {
            c[i][j] = a[i][j]+b[i][j];
        }

    }

   for(int i=0;i<2;i++)
    {

        for(int j=0;j<2;j++)
        {
            printf("%.1f\t",c[i][j]);

        }

    }


    return 0;
}

