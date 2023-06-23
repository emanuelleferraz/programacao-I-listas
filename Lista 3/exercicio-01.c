#include <stdio.h>
#include <stdlib.h>

int aleatorio(){
	return 1 + rand() % 20;
}

int procurar_valor(int vetor[], int n, int pos, int contador){
	if(contador < pos){
		if(vetor[contador] == n){
			return contador;
		} else {
			return procurar_valor(vetor, n, pos, contador + 1);
		}
	} else {
		return -1;
	}
	
}

int main ( int argc, char const *argv[]){
	
	srand (time(NULL));
	int vetor[10];	
	int i, valor, resultado;	
	int contador = 0, posicao = 10;
	
	for(i = 0; i < 10; i++){
		vetor[i] = aleatorio();
		
		printf("Vetor[%d] = %d\n", i, vetor[i]);
	}
	
	printf("Digite o valor a ser procurado: ");
	scanf("%d", &valor);
	
	resultado = procurar_valor(vetor, valor, posicao, contador);
	printf("Resultado = [%d]\n", resultado);
	
	system("pause");
	return 0;
}
