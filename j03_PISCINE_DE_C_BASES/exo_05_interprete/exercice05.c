#include <unistd.h> 

void my_putchar (char c);


void interpreter(char c){
  
read(STDIN_FILENO, &c, 1) ;

   while (c != 'q') {
    my_putchar(c)
   }
    return (0) ; 
}