#include <stdio.h>

int max(const int vec[], int size)
{
    int n = 0;
    int max = 0;

    while (n < size)
    {
        if (max < vec[n])
        {
            max = vec[n];
        }
        n += 1;
    }
    printf("%d \n", max);
}

int main(void)
{
    const int vec[4] = {25, 50, 75, 42};
    int size = 4;

    max(vec, size);

    return (0);
}