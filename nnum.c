#include <stdio.h>
int main()
{
    int s, i, sum = 0;
    
    printf("Enter a positive integer: ");
    scanf("%d",&s);

    for(i=1; i <= s; ++i)
    { 
        sum = sum+i;
    }

    printf("Sum = %d",sum);

    return 0;
}
