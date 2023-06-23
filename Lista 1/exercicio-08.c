#include <stdio.h>

int main (int argc, char const *argv[])
{
    float saldo, valor;
    int menu;
    
    printf("Digite o saldo inicial: ");
    scanf("%f", &saldo);
    
    while(saldo < 0.0){
        printf("Saldo negativo, digite novamente: ");   
        scanf("%f", &saldo);
    }
    
    printf("SELECIONE UMA OPCAO: \n");
    printf("\n1 - DEPOSITO");
    printf("\n2 - SAQUE");
    printf("\n3 - FIM\n");
    scanf("%d", &menu);
    
    while(menu != 3){
        
        if(menu == 1){
            printf("Digite o valor de deposito: ");
            scanf("%f", &valor);
            
            saldo = saldo + valor;
            
            printf("Saldo em conta R$ %.2f \n", saldo);
            
        } else if (menu == 2){
            printf("Digite o valor de saque: ");
            scanf("%f", &valor);
            
            saldo = saldo - valor;
            
            printf("Saldo em conta R$ %.2f \n", saldo);
        } else if (menu == 3){
            break;
        }
        
        printf("SELECIONE UMA OPCAO: \n");
        printf("\n1 - DEPOSITO");
        printf("\n2 - SAQUE");
        printf("\n3 - FIM\n");
        scanf("%d", &menu);
    
    }
    
    if(saldo > 0.0){
        printf("CONTA OPERACIONAL");
        
    } else if (saldo == 0) {
        printf("CONTA ZERADA");
        
    } else {
        printf("CONTA NEGATIVADA");
    }
    
    return 0;

	}    
