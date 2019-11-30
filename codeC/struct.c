#include <stdio.h>
#include <string.h>

struct st{ // declaracao de uma estrutura 
	int num;
	char id;
};

union un { // declaracao de uma uniao

	int num;
	char id;
};

/* a diferenca entre a uniao e a estrutura e que a estrutura
aloca um espaco de memoria equivalente ao tamanho de todas as variaveis somadas,
equanto a uniao aloca o tamanho da maior varival, sendo assim ele vai utilizar o espaco
de uma unica variavel para alocar o valor de todas as outras variavel, fazendos haver conflito entre
os valores gravados e alterando os mesmos */


int main (void){

	struct st s; // criando uma nova estrutura
	union un n; // criando uma nova uniao
	s.num = 25; // adicionando valores na estrutura s
	s.id = 0x30;
	printf("%d\n", s.num);
	printf("%d\n", s.id);
	memset(&s, 0, sizeof(struct st)); // zerando os valores contidos no espaco alocado pela estrutura
	printf("%d\n%d\n", s.num , s.id);
	n.num = 15;
	n.id = 0x90;
	printf("%d\n%d\n", n.num, n.id);
	return(0);


}
