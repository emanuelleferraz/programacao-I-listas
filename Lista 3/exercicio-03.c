#include <stdio.h>
#include <stdlib.h>

void eh_multiplo(int a, int b, int *resp){
	if (a % b == 0){
		*resp = 1;
	} else {
		*resp = 0;
	}
}

int main (int argc, char const *argv[]){
	
	int x, y, p, *ponteiro = NULL, resp = 0;
	int i;
	
	ponteiro = &resp;
	
	printf("Digite o valor de X: ");
	scanf("%d", &x);
	
	printf("Digite o valor de Y: ");
	scanf("%d", &y);
	
	int vet[y];
	
	p = (int *)(malloc(y * sizeof(int)));
	
	for(i = 0; i < y; i++){
		printf("Digite o numero para o indice [%d]: ", i);
		scanf("%d", &vet[i]);
	}
	printf("\n");
	
	for(i = 0; i < y; i++){
		printf("Vet[%d] = %d\n", i, vet[i]);
	}
	printf("\n");
	printf("1 - Multiplo \t  0 - Nao Multiplo\n");
	for(i = 0; i < y; i++){
		eh_multiplo(vet[i], x, ponteiro);
		printf("[%d] = %d\n", i, *ponteiro);
	}
	
	free(p);	
	system("pause");
	return 0;
}
