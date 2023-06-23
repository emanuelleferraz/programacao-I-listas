#include <stdio.h>
#include <stdlib.h>

int main (int argc, char const *argv[]){
	
	int A[10], B[10];
	int R[10];
	int i;
	
	for(i = 0; i < 10; i++){
		
		printf("Digite o valor para o vetor A [%d]: ", i);
		scanf("%d", &A[i]);	
	}

	for(i = 0; i < 10; i++){
		
		printf("\nDigite o valor para o vetor B [%d]: ", i);
		scanf("%d", &B[i]);	
	}
	
	printf("\nSaida de dados do Vetor R:\n");
	for(i = 0; i < 10; i++){
		R[i] = A[i] * B[i];
		printf("R[%d] = %d\n", i, R[i]);
	}
		
	system("pause");
	return 0;
}
