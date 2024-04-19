#include <stdio.h>
#include <stdlib.h>
#include "string.h"
char reverse(char s[])
{
    int l,i;
    char temp;
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

}
int main()
{
    char s[1000];
    printf("Enter a sentence : ");
    gets(s);
    reverse(s);
}
