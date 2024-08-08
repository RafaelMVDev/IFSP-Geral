#include <stdio.h>

int main()
{
    float reais,dolares;
    printf("Digite um valor em reais: ");
    scanf("%f", &reais);
    dolares = reais * 2.4;
    printf("Valor correspondente em dólares: $%.2f",dolares);
    
    return 0;
}
