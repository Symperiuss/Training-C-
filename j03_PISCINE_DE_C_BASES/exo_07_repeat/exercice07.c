#include <unistd.h> 

int mysterlen(char string[]) {
    int incr = 0; 

    while(string[incr] != '\0'){
        incr += 1; 
    }

    return(incr);
}

int repeat(char s[], int n) {
    int incr = 0;
    int size = mysterlen(s);

    if (n < 0 || n > 9) {
        return (1);
    }

    while(incr < n){
 
        write(STDOUT_FILENO,s,size);
        write(STDOUT_FILENO, "\n",1);
        incr += 1;
    }
    return (0) ; 
}









    int main(void) {
    repeat("test", 5);
    return 0;
    }
        
    