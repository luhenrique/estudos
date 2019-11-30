
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (int argc, char **argv){

	int *p;
	int *m;
	p = malloc(5 * sizeof(int)); // alocando um espaco de memoria do tamanho de 5 ints
	memset(p, 0, 5 * sizeof(int));// zerando os espacos alocados dinamicamente na memoria
	printf("o valor contido na memoria alocada  %d\n", *p);
	*p = 25;
	printf("o valor de p %d\n",*p);
	free(p); // liberando o espaco em memoria 
	m = realloc(p, sizeof(int)); // realocado o  espaco de p agora para m
}
