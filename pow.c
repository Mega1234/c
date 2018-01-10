#include <stdio.h>
int main()
{
    int b, exp;

    long long result = 1;

    printf("Enter a base number: ");
    scanf("%d", &b);

    printf("Enter an exponent: ");
    scanf("%d", &exp);

    while (exp!= 0)
    {
        result *= b;
        --exp;
    }

    printf("Answer = %lld", result);

    return 0;
}
