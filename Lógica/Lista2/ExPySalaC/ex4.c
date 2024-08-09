#include <stdio.h>

void main()
{   
    float ladoA,ladoB,ladoC;
    
    printf("Digite o valor do lado A: ");
    scanf("%f",&ladoA);
    
    printf("Digite o valor do lado B: ");
    scanf("%f",&ladoB);
    
    printf("Digite o valor do lado C: ");
    scanf("%f",&ladoC);
    
    if (ladoA + ladoB > ladoC && ladoB + ladoC > ladoA && ladoC + ladoA > ladoB){
        if (ladoB == ladoA && ladoA == ladoC && ladoC == ladoB ){
            printf("Equilátero");
        }
        else if (ladoB == ladoA && ladoA != ladoC || ladoC == ladoA && ladoA != ladoB || ladoB == ladoC && ladoC != ladoA){
            printf("Isósceles");
        }
        else{
            printf("Escaleno");
        }
    }
    else{
        printf("Não é um triângulo");
    }
}