#include <stdio.h>
#include <stdlib.h>

void imprimirMA(int **distancia, int linhas, int colunas){
    int i, j;
    printf("\nValores da MatrizA:\n");
    for(i = 0; i < linhas; i++){
        for(j = 0; j < colunas; j++){
            printf("[ %d ]\t", distancia[i][j]);
        }
        printf("\n");
    }
    
} 

void lerMA(int **distancia, int linhas, int colunas){
    int i, j;
    for(i = 0; i < linhas; i++){
         for(j = 0; j < colunas; j++){
         printf("Informe os valores dos indices[%d][%d] : ", i, j);
         scanf("%d", &distancia[i][j]);
        }
    } 
}

void produto_escalar(int **matrizA, int **matrizB, int linhas, int colunas, int escalar){
    int i, j;
    for(i = 0; i < linhas; i++){
        for(j = 0; j < colunas; j++){
            //distancia[i][j] *= escalar;
            matrizB[i][j] = matrizA[i][j] * escalar;
        }
        
    }
}
void imprimirMB(int **distancia, int linhas, int colunas){
    int i, j, escalar;
    printf("\nValores MatrizB:\n");
    for(i = 0; i < linhas; i++){
        for(j = 0; j < colunas; j++){
            printf("[ %d ]\t", distancia[i][j]);
        }
        printf("\n");
    }
}

int main(int argc, char const *argv[]){

    int escalar, linhas, colunas, tamanho;
    int i;
    
    printf("Informe o tamanho da matriz: ");
    scanf("%d", &tamanho);
    
    linhas = tamanho;
    colunas = tamanho;
    
    int **matrizA = (int **) malloc(linhas*sizeof(int*));

	for (i = 0; i < linhas; i++){
			matrizA[i] = (int *) malloc(colunas*sizeof(int));
	}
	lerMA(matrizA, linhas, colunas);
	imprimirMA(matrizA, linhas, colunas);
	
	int **matrizB = (int **) malloc(linhas*sizeof(int*));
	for (i = 0; i < linhas; i++){
			matrizB[i] = (int *) malloc(colunas*sizeof(int));
	}
	
	printf("\nDigite um numero inteiro: ");
	scanf("%d", &escalar);

	produto_escalar(matrizA, matrizB, linhas, colunas, escalar);
	imprimirMB(matrizB, linhas, colunas);
	
	
	system("pause");
    return 0;
}
