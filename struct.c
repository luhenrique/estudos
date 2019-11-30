#include <stdio.h>

int main (){

    typedef struct {
        int nota1;
        int nota2;
        int nota3;
    }notas;
    notas media[4];
    media[1].nota1 = 10;
    media[1].nota2 = 5;
    media[1].nota3 = 8;
    
    printf("nota 1 = %d\n",media[1].nota1);
    printf("nota 2 = %d\n",media[1].nota2);
    printf("nota 3 = %d\n",media[1].nota3);
}