#include <stdio.h>

void main()
{   
    int n1,n2,n3;
    
    printf("Digite o número 1: ");
    scanf("%i",&n1);
    
    printf("Digite o número 2: ");
    scanf("%i",&n2);
    
    printf("Digite o número 3: ");
    scanf("%i",&n3);
    
    printf("Números divisíveis por 2 e 3: ");
    
    if (n1 % 2 == 0 && n1 % 3 == 0){
        printf("%i; ",n1);
    };
    
    if (n2 % 2 == 0 && n2 % 3 == 0){
        printf("%i; ",n2);
    };
    
    if (n3% 2 == 0 && n3 % 3 == 0){
        printf("%i; ",n3);
    };
    
}