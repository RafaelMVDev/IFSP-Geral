#include <stdio.h>

void main()
{   
    float nota1,nota2,nota3,media;
    
    printf("Digite a nota 1: ");
    scanf("%f",&nota1);
    
    printf("Digite a nota 2: ");
    scanf("%f",&nota2);
    
    printf("Digite a nota 3: ");
    scanf("%f",&nota3);
    
    media = (nota1 + nota2 + nota3) / 3;
    
    if (media >= 6){
        printf("Aprovado. Média: %.2f",media);
    }
    else{
        printf("Reprovado. Média: %.2f", media);
    }
    
    //return 0;
}