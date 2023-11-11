#include <unistd.h> 

void my_putchar (char c);


int kitty(void) {
    char copy[100];
    int i = 0;
    read(STDIN_FILENO, copy, 100);


    while ('\0' != copy[i]) { 
        my_putchar(copy[i]);
        i += 1;  
   
    }
    write(STDOUT_FILENO, "\n", 1);
    return (0) ; 
}

int main (void) {
return (kitty()); 
}
