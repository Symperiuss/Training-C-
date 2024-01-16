#include <stdio.h>

int vmax(const int vec[], int size)
{
    int n = 0;
    int max = 0;
    int vmax = 0;

    while (n < size)
    {
        if (max < vec[n])
        {
            vmax = max;
            max = vec[n];
        }
        n += 1;
    }
    printf("%d \n", vmax);
}

int main(void)
{
    const int vec[4] = {95, 50, 75, 42};
    int size = 4;

    vmax(vec, size);

    return (0);
}
