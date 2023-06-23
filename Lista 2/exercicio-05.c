#include <stdio.h>
#include <stdlib.h>
void vetores(float vetor1[], float vetor2[], int tamanhoVetor){
	int i;
	for(i = 0; i < tamanhoVetor; i++){
		printf("Digite o valor da primeira nota: ");
		scanf("%f", &vetor1[i]);
		
		printf("Digite o valor da segunda nota: ");
		scanf("%f", &vetor2[i]);
	}
	
}

void mediavetores(float vetor1[], float vetor2[], float vetorMedia[], int tamanhoVetor){
	int j;
	for(j = 0; j < tamanhoVetor; j++){
		vetorMedia[j] = (vetor1[j] + vetor2[j])/ 2; 
	}

}

void imprimir(float vetor1[], float vetor2[], float vetorMedia[], int tamanhoVetor){
	int x;
	for(x = 0; x < tamanhoVetor; x++){
		printf("\nAluno %d: ", x+1);
		printf("\nNota 1: %.2f", vetor1[x]);
		printf("\nNota 2: %.2f", vetor2[x]);
		printf("\nMedia: %.2f", vetorMedia[x]);
		
	}
	
}

int main (int argc, char const * argv[]){
	int valorT = 10;
	float N1[valorT], N2[valorT], media[valorT];
	
	
	vetores(N1, N2, valorT);
	mediavetores(N1, N2, media, valorT);
	imprimir(N1, N2, media, valorT);
	
	system("pause");
	return 0;
}	
