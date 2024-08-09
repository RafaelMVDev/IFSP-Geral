#include <stdio.h>

void main()
{   
    int n1,n2;
    
    printf("Digite o número 1: ");
    scanf("%i",&n1);
    
    printf("Digite o número 2: ");
    scanf("%i",&n2);
    
    printf("Números divisíveis por 4 ou 5: ");
    
    if (n1 % 4 == 0 || n1 % 5 == 0){
        printf("%i; ",n1);
    };
    
    if (n2 % 4 == 0 || n2 % 5 == 0){
        printf("%i; ",n2);
    };
    
    
}