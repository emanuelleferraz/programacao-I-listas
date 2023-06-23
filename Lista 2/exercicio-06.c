#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void strinv(char str[]){
	
	int i, fim, aux, tamanho;
	tamanho = strlen(str);
	fim = tamanho - 1;	
	
	for(i = 0; i < tamanho/2; i++){
		aux = str[i];
		str[i] = str[fim];
		str[fim] = aux;
		fim--;
	}
	
	
}

int main (int argc, char const *argv[]){
	
	char str[30];

	printf("Digite seu nome: ");
	scanf("%s", &str);
	
	strinv(str);
	
	printf("A string invertida e: %s\n", str);
	
	
	
	
system("pause");	
return 0;	
}
