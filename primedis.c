#include <stdio.h>
int main()
{
    int a, b, i, flag;
    printf("Enter two numbers(inter): ");
    scanf("%d %d", &a, &b);

    printf("Prime numbers between %d and %d are: ", a, b);

    while (a< b)
    {
        flag = 0;

        for(i = 2; i <= b/2; ++i)
        {
            if(b % i == 0)
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
            printf("%d ", b);

        ++b;
    }

    return 0;
}
