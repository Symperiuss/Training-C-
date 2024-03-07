#include <stdio.h>

#define MINI 0
#define MAXI 300
#define INTER 20
// affiche la table de conversion Farenheit-Celsius

int main(void)
{
    int fahr;

    for (fahr = 300; fahr >= 0; fahr = fahr - 20)
        printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
}