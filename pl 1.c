#include <stdio.h>

int main()
{
    char s[100];
    int i,len;
    scanf("%s",&s);
    len=strlen(s);
    for(i=len;i>=0;i--)
    {
        printf("%c",s[i]);
    }
    printf("\n");
    return 0;
    
}
