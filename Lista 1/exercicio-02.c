#include <stdio.h>
#include <stdlib.h>

int main (int argc, char const *argv[])
{
	
	int i;
	int num;
	char genero;
	int m = 0, f = 0, nb = 0, o = 0;
	
    printf("Digite uma opcao (1 para for ou 2 para while): ");
	scanf("%d", &num);
	
	if (num == 1){
		printf("Generos:\n\tMasculino = m\n\tFeminino = f\n\tNao-Binario = n\n\tOutro = o\n");
		for (i = 0; i < 30; i++){
			
			printf("Digite o genero: ");
			scanf("%s", &genero);
			genero = tolower(genero);
			
			if (genero == 'm') {
				m++;
				
			} else if (genero == 'f') {
				f++;
				
			} else if (genero == 'n') {
				nb++;
				
			} else if (genero == 'o'){
				o++;
			}
			
			
		}
		printf("Masculino = %d\n", m);
		printf("Feminino = %d\n", f);
		printf("Nao-Binario = %d\n", nb);
		printf("Outro = %d\n", o);
		
	} else if (num == 2) {
		printf("Generos:\n\tMasculino = m\n\tFeminino = f\n\tNao-Binario = n\n\tOutro = o\n");
		while ( genero != 'Q') {
			printf("Digite o genero: ");
			scanf("%s", &genero);
						
			if (genero == 'm') {
				m++;
				
			} else if (genero == 'f') {
				f++;
				
			} else if (genero == 'n') {
				nb++;
				
			} else if (genero == 'o'){
				o++;
			}
			
		}
		printf("Masculino = %d\n", m);
		printf("Feminino = %d\n", f);
		printf("Nao-Binario = %d\n", nb);
		printf("Outro = %d\n", o);
	}
	
	
	
	system("pause");
	return 0;
}
