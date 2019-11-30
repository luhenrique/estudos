#include <stdio.h>
#include <stdlib.h>
#define tamanho  5

    typedef struct 
    {
        int dados[tamanho];
        int fim;
        int ini;
    }pilha;
    pilha pilhat;
    int op;

    void mostrarPilha(){
        for (int i = 0; i < tamanho; i++)
        {
            printf("%d -  ",pilhat.dados[i]);
        }
        printf("\n\n");
    }

    void empilha(){
        if (pilhat.fim == tamanho){
            printf("pilha cheia\n");
        }else{
            printf("Digite o valor a ser adicionado na pilha\n");
            scanf("%d", &pilhat.dados[pilhat.fim]);
            printf("o valor adicionado a fila foi %d\n", pilhat.dados[pilhat.fim]);
            pilhat.fim++;
            printf("agora a o topo da pilha é a posição %d\n", pilhat.fim);
        }
    }
    void desempilha(){
        if (pilhat.ini == pilhat.fim){
            printf("Pilha vazia\n");
        }else{
            pilhat.dados[pilhat.fim -1] = 0;
            pilhat.fim--;
            mostrarPilha();
        }
        
    }

    void painel(){
        op = 1;
        while (op != 0){
            printf("1 - Mostrar pilha\n");
            printf("2 - Empilha\n");
            printf("3 - Desempilha\n");
            scanf("%d", &op);
            switch (op)
            {
            case 1:
                mostrarPilha();
                break;
            case 2:
                empilha();
                break;
            case 3:
                desempilha();
                break;    
            }
        }

    }
    

    int main (){
        pilhat.ini = 0;
        pilhat.fim = 0;
        painel();
    }