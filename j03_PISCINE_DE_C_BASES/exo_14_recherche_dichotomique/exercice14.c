#include <stdio.h>

int dicho_search(const int vec[], int size, int elt)
{

    int pivot = (size / 2);
    int Xmin = 0;
    int Xmax = size - 1;

    while (Xmin < Xmax)
    {
        if (elt == vec[pivot])
        {

            return (pivot);
        }
        else if (elt > vec[pivot])
        {
            Xmin = pivot;
            pivot = ((Xmin + Xmax) / 2) + 1;
        }
        else if (elt < vec[pivot])
        {
            Xmax = pivot;
            pivot = ((Xmax + Xmin) / 2) - 1;
        }
    }
}

int main(void)
{
    int elt = 7;
    int vec[3] = {1, 6, 7};
    int size = 3;

    int result = dicho_search(vec, size, elt);
    printf("%d \n", result);
    return (0);
}
