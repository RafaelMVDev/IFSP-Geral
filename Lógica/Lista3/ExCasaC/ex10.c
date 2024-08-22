
#include <stdio.h>

int main()
{   
    float n1,n2;
    char operador;
    
    while(1){
        printf("\nDigite o operador: ");
        fflush(stdin);
        scanf(" %c", &operador);
     
        if (operador == 'S'){
            printf("Saindo do programa! ");
            break;
        }
        
        printf("Digite o número 1: ");
        scanf("%f", &n1);
        
        printf("Digite o número 2: ");
        scanf("%f", &n2);
        
        switch(operador)
        {
            case '+':
                printf("%.2f + %.2f = %.2f", n1,n2,n1+n2);
                break;
            case '-':
                printf("%.2f - %.2f = %.2f", n1,n2,n1-n2);
                break;
            case '*':
                printf("%.2f * %.2f = %.2f", n1,n2,n1*n2);
                break;
            case '/':
                if (n2 == 0){
                    printf("Não é possível dividir por 0 !");
                    continue;
                }
                printf("%.2f / %.2f = %.2f", n1,n2,n1/n2);
                break;
            default:
                printf("Operador inválido");
                break;
           
        }
        
    
    }
    
    return 0;
}