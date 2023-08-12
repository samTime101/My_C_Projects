#include <stdio.h>
int collatz(int);

void main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    collatz(n);
}

int collatz(int n)
{
    long STEPS = 1;
    do
    {
        STEPS++;

        printf("%d\n", n);
        // EVEN
        if (n % 2 == 0)
        {
            n = n / 2;
        }
        // ODD
        else
        {
            n = 3 * n + 1;
        }
        // FOR 1
        if (n == 1)
        {
            printf("%d", n);
        }

    } while (n != 1);
    printf("\n------NUMBER OF STEPS------\nSTEPS:%ld\n", STEPS);
}