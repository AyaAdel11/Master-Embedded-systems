#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s[100] ,c;
    int x=0;

    printf("Enter a string : ");
    gets(s);
    printf("Enter a char to find freq : ");
    scanf("%c",&c);
    for(int i=0;i<=100;i++)
    {
            if(s[i]==c)
            {
                x++;
            }
    }

    printf("freq of %c = %d",c,x);

    return 0;
}



