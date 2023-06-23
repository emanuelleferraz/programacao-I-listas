#include <stdio.h>
#include  <stdlib.h>
#include <math.h>

int main (int argc, char const *argv[])
{
	
	int i = 1.0, j;
	int fatorial = 1.0;
	float x = 0.0, soma = 1.0;
	
	printf("Digite o valor de x: ");
	scanf("%f", &x);
	
	for (i = 1; i < 10; i++){
		fatorial = 1;
		
		for (j = i; j > 1; j--) {
			fatorial *= j;
			
		}
		soma = soma + (pow(x,i)/fatorial);
		
		printf("Soma = %f\n", soma);
		printf("Fatorial = %d\n", fatorial);
		printf("Pow = %f\n", pow(x,i));
	}
	
	printf("e = %f\n", soma);
	
	
	
	system("pause");
	return 0;
}
