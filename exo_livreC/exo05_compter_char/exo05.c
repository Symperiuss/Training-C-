#include <stdio.h>

// compte les charactères en entrée

int main(void)
{
    long nc;

    nc = 0;

    while (getchar() != EOF)
        nc += 1;

    printf("%ld\n", nc);
}