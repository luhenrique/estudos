#include <stdio.h>
#include <stdlib.h>

#define TAM  4 // define uma "constante"
enum pedras {CAVALO , BISPO , TORRE , DAMA}; //enumera palavras com numeros == cavalo = 0 , bispo = 1 etc..

int main (int argc, char **argv){

	char s[4] = "luiz";
	printf("%x\n",*(s+3));// recuperar valor do vetor por ponteiro
	printf("%x\n", s[3]); // recuperar modo padrao
	puts("\n\n");

	int tabu [TAM][TAM] = {};// criando uma matriz de tamanho tamxtam , o {} inicializa todas as posicoes com 0
	int i, j; // contadores

	// colocando as pecas nas suas posicoes
	tabu[0][0] = CAVALO;
	tabu[0][1] = BISPO;
	tabu[1][0] = TORRE;
	tabu[1][1] = DAMA;

	// loop para criar um tabuleiro
	for (i = 0; i < TAM; i ++){ // laco i responsavel por criar as linhas
		for(j=0; j<TAM; j++){ // loop do j responsavel pelas coluas
			printf("%d", tabu[i][j]); // imprimindo as posicoes do i e j
			if (j == TAM-1) // if pra  quando j for menor que o tam-1 pular uma linha
				putchar('\n');
		}
	}
}















