#include <stdio.h>

int my_strlen(char *str)
{
    int n = 0;

    while (str[n] != '\0')
    {
        n += 1;
    }
    return (n);
}

int main(void)
{
    char *str = {"hello"};

    int result = my_strlen(str);

    printf("%d \n", result);
}
