#include <stdio.h>
#include <math.h>

int main()
{
    float massa,altura,imc;

    printf("Digite seu peso ( em Kg ):  ");
    scanf("%f",&massa);

    printf("Digite sua altura (em M): ");
    scanf("%f",&altura);

    imc = massa / pow(altura,2);
    
    printf("IMC: =  %.2f", imc);

    return 0;
}
