#include <stdio.h>

void print_vec(int vec[], int size)
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

void sort(int vec[], int size)
{
    int stock;
    int m = 0;
    int n = 0;
    int min = vec[m];

    while (m < size)
    {
        n = 0;
        min = vec[m];
        while (n < size) // recherche de min
        {
            if (min < vec[n])
            {
                printf("%d, ", vec[n]);
                stock = vec[m]; // récup la valeur qui doit être min
                min = vec[n];   // récup la nouvelle valeur plus faible
                vec[m] = min;   // écrit la valeur la plus faible à la case m
                vec[n] = stock; // repose la valeur initale là ou j'ai récupérer la valeur la plus faible
            }
            n += 1;
        }
        m += 1;
    }
}

int main(void)
{
    int vec[6] = {50, 75, 42, 95, 1, 82};
    int size = 6;

    sort(vec, size);
    print_vec(vec, size);

    return (0);
}
