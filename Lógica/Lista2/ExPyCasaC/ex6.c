#include <stdio.h>

void main()
{   
    int mes;
    printf("Digite o número do mês (1 à 12): ");
    scanf("%i",&mes);
    
    if (mes == 1) { printf("Janeiro"); }
    else if (mes == 2) { printf("Fevereiro"); }
    else if (mes == 3) { printf("Março"); }
    else if (mes == 4) { printf("Abril"); }
    else if (mes == 5) { printf("Maio"); }
    else if (mes == 6) { printf("Junho"); }
    else if (mes == 7) { printf("Julho"); }
    else if (mes == 8) { printf("Agosto"); }
    else if (mes == 9) { printf("Setembro"); }
    else if (mes == 10) { printf("Outubro"); }
    else if (mes == 11) { printf("Novembro"); }
    else if (mes == 12) { printf("Dezembro"); }
    else {
        printf("Mês inválido!");
    }
}