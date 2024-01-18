#include <stdio.h>

void lowerer(char str[])
{
    int n = 0;
    while (str[n] != '\0')
    {
        if (str[n] >= 65 && str[n] <= 90)
        {
            str[n] += 32;
        }

        n += 1;
    }
    printf("%s \n", str);

    return;
}

int main(void)
{
    char str[6] = {"HELLO"};

    lowerer(str);

    return (0);
}
