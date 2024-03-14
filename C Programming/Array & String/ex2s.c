#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char s[100] ,temp;
    int l=0,i=0;

    printf("Enter a string : ");
    gets(s);
    l=strlen(s)-1;
    while(i<l)
    {
        temp=s[i];
        s[i]=s[l];
        s[l]=temp;
        i++;
        l--;
    }

    printf("%s",s);

    return 0;
}
