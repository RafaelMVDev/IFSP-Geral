#include <stdio.h>

int main()
{
    float distancia,velocidade,tempo,litros_usados;

    printf("Digite o tempo gasto na viagem( em Horas ): ");
    scanf("%f",&tempo);
    
    printf("Digite a velocidade média durante o percurso (em Km/h): ");
    scanf("%f",&velocidade);
    
    distancia = tempo * velocidade; 
    litros_usados = distancia / 12;

    printf("Litros usados durante a viagem: %.2f",litros_usados);
 
    return 0;
}
