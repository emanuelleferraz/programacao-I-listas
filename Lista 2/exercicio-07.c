#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int aleatorio() {
    return 1 + rand() % 17;
}

int main (int argc, char const *argv[]){

	int matriz[3][6];
	int i, j, escalar;
	
	srand(time(NULL));
	
	printf("Matriz[3][6]:\n");
	for( i = 0; i < 3; i++){
		for(j = 0; j < 6; j++){
			matriz[i][j] = aleatorio();
			printf("%d\t",matriz[i][j]);
		}
		printf("\n");
	}
	
	printf("\nDigite um numero inteiro para multiplicar a matriz: ");
	scanf("%d", &escalar);
	
	printf("\nResultado de %d * matriz[3][6]:\n", escalar);
	for( i = 0; i < 3; i++){
		for(j = 0; j < 6; j++){
			matriz[i][j] *= escalar;
			printf("%d\t", matriz[i][j]);
		}
		printf("\n");
	}
	
	system("pause");
	return 0;
}
