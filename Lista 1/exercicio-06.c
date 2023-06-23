#include <stdio.h>
#include <math.h>

int main (int argc, char const *argv[])
{
    float fator, fatorial;
    float formula = 0;
    
    int valor, i;
    int controle = 1;
    int flag = 0;

    printf("Digite um valor para calcular o Seno: ");
    scanf("%d",&valor);

    for( i = 1; i <= valor; i++){
        
        fatorial = 1;
        for(fator = 1; fator <= controle; fator++){
            
            fatorial = fatorial * fator;
        }

        if(flag == 0){
            
            formula = formula + (pow(valor, controle)) / fatorial;
            flag = 1;
            
        } else {
            
            formula = formula - (pow(valor, controle)) / fatorial;
            flag = 0;
        }

     controle = controle + 2;
    }

    printf("Seno = %f", formula);

    return 0;
}
