#include <stdio.h>

void print_vec(const int vec[], int size)
{
    int n = 0;
    printf("[");

    while (n < size - 1)
    {
        printf("%d, ", vec[n]);
        n += 1;
    }

    printf("%d]\n", vec[n]);
}

int main(void)
{
    const int vec[4] = {25, 50, 75, 100};
    int size = 4;

    print_vec(vec, size);

    return (0);
}