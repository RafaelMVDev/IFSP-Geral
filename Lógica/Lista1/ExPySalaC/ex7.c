#include <stdio.h>

int main()
{
    int n_coelhos;
    float valor_total;

    printf("Digite o número de coelhos: ");
    scanf("%i",&n_coelhos);
    
    valor_total = (n_coelhos* 0.7) / 18 + 10;
    
    printf("Valor total: %.2f R$",valor_total);
    return 0;
}