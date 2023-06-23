#include <stdio.h>
#include <stdlib.h>

int soma_numeros(int n){
	if(n <= 1){
		return 1;
	} else {
		return (n + soma_numeros(n - 1));
	}
}

int main (int argc, char const *argv[]){
	
	int n, soma;
	
	printf("Digite um numero: ");
	scanf("%d", &n);
	
	soma = soma_numeros(n);
	
	printf("A soma de todos os numeros e: %d\n ", soma);
	
	system("pause");
	return 0;
}
