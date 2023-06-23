#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int aleatorio(){
	
	return 10 + rand() % 10;
}

int main ( int argc, char const *argv[]){
	
	srand (time(NULL));
	int vetor[10];	
	int i;	
	
	for(i = 0; i < 10; i++){
		vetor[i] = aleatorio();
		
		printf("Vetor[%d] = %d\n", i, vetor[i]);
	}
	
	system("pause");
	return 0;
}
