#include <stdio.h>

int main()
{
    float valor,tempo,prestacao;
    int taxa;
    
    printf("Digite o valor: ");
    scanf("%f",&valor);
    
    printf("Digite a taxa: ");
    scanf("%f",&taxa);
    
    printf("Digite o tempo: ");
    scanf("%f",&tempo);
    
    prestacao = valor + (valor*(taxa/ 100)*tempo);
    
    printf("Valor total da prestação: %.2f R$",prestacao);
    return 0;
}