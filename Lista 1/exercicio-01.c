#include <stdio.h>
#include <stdlib.h>

int main (int argc, char const *argv[])
{
	
	int  i = 0;
	int cont = 0;
	int idade, soma, num;
	float media;
	
	printf("Digite uma opcao (1 para for ou 2 para while): ");
	scanf("%d", &num);
	
	if(num == 1){
		for (i = 0; i <= 30; i++) {
			
			printf("Digite a idade: ");
			scanf("%d", &idade);
			
			soma += idade;
		}
		media = soma / 30.0;
		
		printf("Soma = %d\n", soma);
		printf("Media = %2.f\n", media);
	}
	else if(num == 2)
	{
		while( idade != -1 ){
			printf("Digite a idade: ");
			scanf("%d", &idade);
			
			cont++;
			soma+= idade;
			
			
		}
		media = soma / cont;
		
		printf("Soma = %d\n", soma);
		printf("Media = %2.f\n", media);
	}
	
	
	system("pause");
	return 0;
}
