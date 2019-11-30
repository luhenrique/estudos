#include <stdio.h>
#include <stdlib.h>

// cabecalho de uma funcao =  tipo_retorno nome(tipo_arg1 nome arg1, tipo_arg2 nome arg2){}

int soma(int n1, int n2, int n3){
	int res;
	res = n1 + n2 + n3;
	return res; // retorna a soma

}
void erro(char *msg){// poderia ser feito assim tmb (char msg[])
	fprintf(stderr,"erro %s\n", msg); //fprintf redireciona o erro para a saida de erro  /dev/null, o parametro stderr e o arquivo do erro
	exit(1); // sai do programa mandando 1 que representa erro, qualquer saida diferente de 0 e conciderado erro pelo c
}

int main(void){

	int num1,num2,num3;
	printf("digite 3 numeros para somar");
	scanf("%d\n%d\n%d", &num1, &num2 , &num3);
	if(num1 == -1)
		erro("valor invalido");// chama a funcao erro e envia a mensagem

	printf("%d\n", soma(num1, num2, num3));// chama a funcao soma e imprime o retorno da mesma

	return 0;// retorna 0 para o sistema para indicar que tudo saiu confirme planejado
}
