#include <stdio.h>
int main()
{
    long  a;
    int count = 0;

    printf("Enter an integer: ");
    scanf("%f", &a);

    while(a != 0)
    {
        a /= 10;
        ++count;
    }

    printf("Number of digits: %d", count);
}
