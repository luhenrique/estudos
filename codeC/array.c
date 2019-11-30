#include <stdio.h>

int main (void){
    
    char c[3];

    printf("%zu\n", sizeof c);

    c[0] = 'a';
    c[1] = 0xff;
    c[2] = 8;
    
    return 0;
}