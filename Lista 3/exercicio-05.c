#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
	
	int x;
	int y;
}pontos;

int main (int argc, char const *argv[]){
	
	float distancia;
	pontos posicoes;
	
	printf("Informe a coordenada de X: ");
	scanf("%d", &posicoes.x);
	
	printf("Informe a coordenada de Y: ");
	scanf("%d", &posicoes.y);
	
	distancia = sqrt(pow((posicoes.x - 0), 2) + pow((posicoes.y - 0), 2));
	
	printf("Distancia ate a posicao (0,0) = %.2f\n", distancia);
	
	system("pause");
	return 0;
}
