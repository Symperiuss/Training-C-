#include <stdio.h>

// compte les charactères en entrée d'un fichier ver2

int main(void)
{
    double nc;

    for (nc = 0; getchar() != EOF; ++nc)
        ;
    printf("%.0f\n", nc);
}