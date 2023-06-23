#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int aleatorio(){
	
	return 1 + rand() % 10;
}

int main (int argc, char const *argv[]){
	
	int C[5][5];
	int i, j, menor, pos, pos2, maior;
	int V[5] = {0, 0, 0, 0, 0}, J[5] = {0, 0, 0, 0, 0};
	
	printf("C[5][5]:\n");
	for(i = 0; i < 5; i++){
		for(j = 0; j < 5; j++){
			C[i][j] = aleatorio();
			printf("%d\t", C[i][j]);
		}
		printf("\n");
	}
	
	for(i = 0; i < 5; i++){
		for(j = 0; j < 5; j++){
			V[i] = V[i] + C[i][j];
		}
	}
	menor = V[0];
	for(i = 0; i < 5; i++){
		if(menor > V[i])
		{
			menor = V[i];
			pos = i;
		}
	}
	
	for(j = 0; j < 5; j++){
		for(i = 0; i < 5; i++){
			J[j] += C[i][j];
		}
	}
	maior = J[0];
	for(j = 0; j < 5; j++){
		if (maior < J[j] ){
			maior = J[j];
			pos2 = j;
		}
	}
	
	printf("Linha com menor soma = [%d]\n", pos);
	printf("Coluna com maior soma = [%d]\n", pos2);
	
	system("pause");
	return 0;
}
