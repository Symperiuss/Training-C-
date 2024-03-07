#include <stdio.h>

/* affiche la table de conversion Farenheit-Celsius pour fahr = 0, 20 ,... ,300*/

int main(void)
{
    float fahr, celsius;
    int mini, maxi, intervalle;

    mini = 0;        // borne inférieur de la table
    maxi = 300;      // borne supérieur
    intervalle = 20; // intervalle entre les valeurs en degrés Farenheit

    fahr = mini;
    printf("ceci est un en-tête \n\n");
    while (fahr <= maxi)
    {
        celsius = 5.0 * (fahr - 32.0) / 9;
        printf("%3.0f\t %6.1f\n", fahr, celsius);
        fahr = fahr + intervalle;
    }
}
