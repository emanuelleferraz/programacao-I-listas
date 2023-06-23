#include <stdio.h>
#include <stdlib.h>

int main (int argc, char const *argv[])
{
	
	int x;
	int y;
	
	do{
		printf("Digite um numero: ");
		scanf("%d", &x);
		
		printf("Digite outro numero: ");
		scanf("%d", &y);
		
		
	} while ( x == y);
	
	printf("Fim do-while\n");
	
return 0;
}
