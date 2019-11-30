#include <stdio.h>
#include "teste.h" // incluindo biblioteca com funcoes criadas por mim

#define MULT(x) (x*x) // define macro que multiplica um numero
#define MAX(x,y) (x>y ? x:y)// macro encontra o maior entre 2 numeros
#define MAX3(x,y,z) (MAX(MAX(x,y),MAX(y,z)))// macro maior entre 3

#define DEBUG // chama a macro pre definida de debug
#define VAR(x) printf("a variavel "#x" tem valor %d\n",x);// chama a macro pre definida para debug que mostra o valor da variavel

int main (void){
	int num = 90;

	salve();
	printf("%d\n", MULT(8));// chamada das macros
	printf("%d\n", MAX(6 ,7));
	printf("%d\n", MAX3(6 ,7, 8));
	#ifdef DEBUG // if do debug que mostra a linha caso em o erro esteja nela 
		printf("%s: esotu na linha %d\n", __TIME__,__LINE__); // macro que mostra a linha e o horario
		VAR(num); // chamada da macro var
	#endif
	return 0;
	// as macros sao executadas em tempo de pre compilacao, e nao tem chamadas diretas com isso elas gastam menos memoria
	// comparado com as funcoes 
}
