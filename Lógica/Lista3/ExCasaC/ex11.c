#include <stdio.h>

int ex11()
{   
    float n1,n2;
    char operador[] = 'n';
    
    while(operador != "S"){
        printf("Digite o operador: ");
        scanf("%c",&operador);
        
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
           
        }
        
        
    }
    
    return 0;
}