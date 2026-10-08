#include <stdio.h>

int factorial(int a)
{
    int i;
    int res = 1;

    for (i = 0; i < a; i++)
    {
        res = res * (i + 1);
    }

    return res;
}

int combination(int n, int r)
{
    int up, down;

    // Calculate numerator
    up = factorial(n);

    // Calculate denominator
    down = factorial(n - r) * factorial(r);

    return up / down;
}

int get_integer()
{
    int n;

    printf("Input n: ");
    scanf("%d", &n);

    return n;
}

int main(void)
{
    int n, r;
    int result;

    n = get_integer();

    printf("Input r: ");
    scanf("%d", &r);

    result = combination(n, r);

    printf("The combination result is %d\n", result);

    return 0;
}