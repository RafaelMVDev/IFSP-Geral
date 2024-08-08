#include <stdio.h>
#include <math.h>

int main()
{
    float altura,raio,volume;

    printf("Digite a altura da lata de óleo ( em M ): ");
    scanf("%f",&altura);
    
    printf("Digite o raio da lata de óleo (em M): ");
    scanf("%f",&raio);
    
    volume = M_PI * (pow(raio,2)) * altura
    
    printf("Volume da lata de óleo: %.2f ",volume);
 
    return 0;
}