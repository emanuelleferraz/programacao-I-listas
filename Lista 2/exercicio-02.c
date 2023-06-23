#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int dado(){
	
	return 1 + rand() % 6;
}

int main (int argc, char const *argv[]){
	
	int i, cont1 = 0, cont2 = 0, cont3 = 0, cont4 = 0, cont5 = 0, cont6 = 0;
	int valorf;
	float porc1, porc2, porc3, porc4, porc5, porc6;
	
	for(i = 0; i < 1000000; i++){
		
		
		valorf = dado();

		
		if( valorf == 1){
			cont1++;
		} else if ( valorf == 2 ){
			cont2++;
		} else if (valorf == 3){
			cont3++;
		} else if ( valorf == 4){
			cont4++;
		} else if (valorf == 5){
			cont5++;
		} else if ( valorf == 6 ){
			cont6++;
		}
	}
	
	porc1 = ((float)(cont1) / 1000000) * 100;
	porc2 = ((float)(cont2) / 1000000) * 100;
	porc3 = ((float)(cont3) / 1000000) * 100;
	porc4 = ((float)(cont4) / 1000000) * 100;
	porc5 = ((float)(cont5) / 1000000) * 100;
	porc6 = ((float)(cont6) / 1000000) * 100;
	
	printf("Porcentagem de vezes que cada numero saiu:\n");
	printf("Numero 1 = %.2f\n", porc1);
	printf("Numero 2 = %.2f\n", porc2);
	printf("Numero 3 = %.2f\n", porc3);
	printf("Numero 4 = %.2f\n", porc4);
	printf("Numero 5 = %.2f\n", porc5);
	printf("Numero 6 = %.2f\n", porc6);
	
	system("pause");
	return 0;
}
