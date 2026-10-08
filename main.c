#include <stdio.h>

int sumTwo(int a, int b);
int square(int n);
int get_max(int x, int y);

int main(void)
{
    printf("Sum = %d\n", sumTwo(2, 5));
    printf("Square = %d\n", square(10));
    printf("Maximum = %d\n", get_max(2, 5));
    return 0;
}

int sumTwo(int a, int b)
{
    return (a + b);
}

int square(int n)
{
    return n * n;
}

int get_max(int x, int y)
{
    if (x > y)
        return x;
    else
        return y;
}