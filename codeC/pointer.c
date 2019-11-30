#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv){
	int i = 0;
	printf(" valor de i %d\n", i);
	printf (" o endereco  de i %p\n", &i);// endereco de memoria de i
	
	int *p = NULL;//atribui como nulo valor de p pois senao ele aponta para local aleatorio
	printf (" endereco de p %p\n", &p);//mostra endereco que p esta alocado
	printf (" conteudo de p  vazio %p\n\n", p);//mostra conteudo dentro de p

	p = &i;//p recebe o endereco de i
	printf (" o endereco de p apontando para i %p\n",p);//endereco que p esta apontando
	printf (" o valor que p referencia  %d\n", *p);//mostra o valor dentro da variavel apontada por p

	*p =15;// o endereco que p aponta recebe 15
	       // nao e possivel fazer p =  15 poisu um  ponteiro so recebe enderecos de memoria

	printf (" o valor da variavel que p aponta %d\n\n", *p);// valor da  varialvel referenciada
	/*
	*p vai mostrar o valor da variavel que ele referencia
	 p vai mostrar o endereco contido em p 
	 %p usado para mostrar enderecos
	*/
	int **j;// essa notacao serve para um ponteiro apontar para outro ponteiro
		// pois nao e possivel fazer *j = &p
	j = &p;
	**j = 25; // mundo o valor de i que p aponta, atraves do j que aponta para  p

	printf (" o valor contido em j e %p\n", j);// mostra o endereco contido de j
	printf (" o endereco contido em p que j referencia %p\n", *j);// mostra o endereco contido em p
								     // do qual j ta referenciando
	printf (" o valor contido em p que j referencia %d\n", **j); // mostra o valor contido em p
								    // do qual j ta referenciando 
	printf (" o valor de i mudado pelo ponteiro do ponteiro %d\n", i);// mostrando que e possivel
									// mudar o valor de  i atraves de j

}

