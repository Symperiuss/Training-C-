#include <stdio.h>

// copie l'entrée sur la sortie ver.1

int main(void)
{
    int c;

    c = getchar();

    while (c != EOF)
    {
        putchar(c);

        // Check the condition and print the result
        printf("getchar() != EOF: %d\n", (c != EOF));

        c = getchar();
    }

    return 0;
}
