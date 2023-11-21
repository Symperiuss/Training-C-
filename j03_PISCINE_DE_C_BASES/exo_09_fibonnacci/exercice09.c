#include <stdio.h>

int recursive(int n)
{
    if (n == 0 || n == 1)
    {
        return (n);
    }
    else
    {
        return ((recursive(n - 1) + recursive(n - 2)));
    }
}
int fiboinshape(int n)
{

    return (recursive(n));
}

int main(void)
{
    int crampte = fiboinshape(12);
    printf("crampté = %d \n", crampte);
    return (0);
}