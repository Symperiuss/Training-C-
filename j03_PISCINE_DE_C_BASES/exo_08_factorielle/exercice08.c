#include <stdio.h>

int recursive(int n)
{
    if (n == -1)
    {
        return (1);
    }

    return (n * recursive(n - 1));
}

int fact(int n)
{

    return (recursive(n));
}

int main(void)
{
    int crampte = fact(5);
    printf("crampté = %d \n", crampte);
    return (0);
}