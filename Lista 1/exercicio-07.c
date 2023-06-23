#include <stdio.h>
#include <math.h>

int main (int argc, char const *argv[])
{
    float fator, fatorial;
    float formula = 1;
    
    int valor, i;
    int controle = 2;
    int flag = 0;

    printf("Digite um valor para calular o Cosseno: ");
    scanf("%d", &valor);

    for( i = 1; i <= valor; i++){
        
        fatorial = 1;
        
        for(fator = 1; fator <= controle; fator++){
            
            fatorial = fatorial * fator;
        }

        if(flag == 1){
            formula = formula + (pow(valor, controle)) / fatorial;
            
            flag = 0;
        }
        else {
            formula = formula - (pow(valor, controle)) / fatorial;
            
            flag = 1;
        }

     controle = controle + 2;
    }

    printf("Cosseno = %f", formula);

    return 0;
}
