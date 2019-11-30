#include <stdio.h>
#include <stdlib.h>
#define tamanho 5

typedef struct {
    int dados[tamanho];
    int ini;
    int fim;
}fila;

fila filat;

void mostrarFila (){
    for(int i = 0 ; i < tamanho; i++){
        printf("%d - ", filat.dados[i] );
    }
    printf("\n\n");
}
void entrarFila(){
    if (filat.fim == tamanho){
        printf("fila cheia\n");
    }
    printf("Qual valor adicionar a fila\n");
    scanf("%d", &filat.dados[filat.fim]);
    filat.fim++;
}
void sairFila(){
    if (filat.fim == filat.ini){
        printf("fila vazia\n");
    }
    for(int i= 0; i < tamanho; i++){
        filat.dados[i] = filat.dados[i +1];
    }
    filat.dados[filat.fim] = 0;
    filat.fim --;
}

void painel(){
    int op = 1;

    while (op !=0){
        printf("1 - mostrar fila\n");
        printf("2 - adicionar na fila\n");
        printf("3 - remover da fila\n");
        scanf("%d", &op);
        //system("clear");
        switch (op)
        {
        case 1:
            mostrarFila();
            break;
        case 2:
            entrarFila();
            break;
        case 3:
            sairFila();
            break;
        }
    }
}

int main (){

    filat.ini = 0;
    filat.fim = 0;
    painel();
}