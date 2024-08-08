#include <stdio.h>

int main()
{
    float b,a;

    printf("Digite a medida da base do triângulo: ");
    scanf("%f",&b);

    printf("Digite a medida da altura do triângulo: ");
    scanf("%f",&a);
    
    printf("Perímetro: %.2f", b * a);
    
    return 0;
}

