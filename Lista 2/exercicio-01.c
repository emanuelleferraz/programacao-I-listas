#include <stdio.h>
#include <stdlib.h>

int contaimpar(int n1, int n2){
	int soma = 0, contador = 0;
	int inicio, fim, i;
	
	if (n1 > n2){
		inicio = n2;
		fim = n1;
	} else {
		inicio = n1;
		fim = n2;
	}
	
	for( i = inicio; i <= fim; i++ ){
		soma+= i;
	}
	
	for( i = inicio; i <= fim; i++ ){
		if ( i % 2 != 0 ){
			contador++;
		}
	}
	return contador;
}

int main (int argc, char const *argv[]){
	
	int n1, n2, soma;
	
	printf("Digite o valor de n1: ");
	scanf("%d", &n1);
	printf("Digite o valor de n2: ");
	scanf("%d", &n2);
	
	soma = contaimpar(n1, n2);
	
	printf("Soma = %d\n", soma);
	
	system("pause");
	return 0;
}
