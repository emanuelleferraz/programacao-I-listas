#include <stdio.h>
#include <stdlib.h>

int main (int argc, char const *argv[])
{
	
	float nota1, nota2, nota3, nota4, soma, somaT;
	int i = 0;
	float media, mediaF;
	
	for (i = 0; i < 10; i++) {
		
		printf("Digite o valor da primeira nota: ");
		scanf("%f", &nota1);
		
		printf("Digite o valor da segunda nota: ");
		scanf("%f", &nota2);
		
		printf("Digite o valor da terceira nota: ");
		scanf("%f", &nota3);
		
		printf("Digite o valor da quarta nota: ");
		scanf("%f", &nota4);
		
		soma = (nota1 + nota2) + (nota3 + nota4);
		
		media = soma / 4;
		
		printf("A media das notas e: %.2f\n", media);
		
		
		if ( media >= 6 ) {
			printf("O aluno foi aprovado!\n\n");
			
		} else if ( media < 6 ) {
			printf("O aluno foi reprovado!\n\n");
		}
		
		somaT+= nota1 + nota2 + nota3 + nota4;
	}
	mediaF = somaT / 10;
	
	printf("A media final da turma e: %.2f\n", mediaF);
	
	system("pause");
	return 0;
}
