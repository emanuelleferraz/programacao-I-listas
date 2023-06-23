#include <stdio.h>
#include <stdlib.h>


typedef struct data_nascimento {
	int dia;
	int mes;
	int ano;
} data_nascimento;

struct tpAluno {
	char nome[40];
	char curso[40];
	int idade;
	double notas[3];
	data_nascimento Data;
};
typedef struct tpAluno tpAluno;


int main (int argc, char const *argv[]){
	
	tpAluno Aluno;
	int n, i;
	double mediaP = 0;
	
	printf("Informe o numero de discentes: ");
	scanf("%d", &n);
	
struct cadastro_turma {
	tpAluno Aluno;
	data_nascimento Data;
} cad_turma[n];

	printf("\n-------- Cadastro dos Clientes --------\n\n");
	for(i = 0; i < n; i++){
		printf("\nNome do Aluno: ");
		fflush(stdin);
		gets(cad_turma[i].Aluno.nome);
		
		printf("Curso: ");
		fflush(stdin);
		gets(cad_turma[i].Aluno.curso);
		
		printf("Idade do Aluno: ");
		scanf("%d", &cad_turma[i].Aluno.idade);
		
		printf("Nota 1: ");
		scanf("%lf", &cad_turma[i].Aluno.notas[0]);
		printf("Nota 2: ");
		scanf("%lf", &cad_turma[i].Aluno.notas[1]);
		printf("Nota 3: ");
		scanf("%lf", &cad_turma[i].Aluno.notas[2]);
		
		printf("\nDia de nascimento: ");
		scanf("%d", &cad_turma[i].Data.dia);
		printf("Mes de nascimento: ");
		scanf("%d", &cad_turma[i].Data.mes);
		printf("Ano de nascimento: ");
		scanf("%d", &cad_turma[i].Data.ano);
	    mediaP = (cad_turma[i].Aluno.notas[0] * 2 + cad_turma[i].Aluno.notas[1] * 3 + cad_turma[i].Aluno.notas[2] * 4) / 9; 
        printf("\n\nMedia Ponderada: %.2lf\n", mediaP);
	}
	
    printf("\n\n----- Saida de Dados -----\n\n");
    for(i = 0; i < n; i++){
    	printf("\n\nNome: %s", cad_turma[i].Aluno.nome);
    	printf("\nCurso: %s", cad_turma[i].Aluno.curso);
    	printf("\nIdade: %d", cad_turma[i].Aluno.idade);
    	printf("\nNota 1: %.2lf", cad_turma[i].Aluno.notas[0]);
        printf("\nNota 2: %.2lf", cad_turma[i].Aluno.notas[1]);
        printf("\nNota 3: %.2lf", cad_turma[i].Aluno.notas[2]);
        printf("\nDia de nascimento: %d", cad_turma[i].Data.dia);
        printf("\nMes de nascimento: %d", cad_turma[i].Data.mes);
        printf("\nAno de nascimento: %d\n", cad_turma[i].Data.ano);

	}
	system("pause");
	return 0;
}
