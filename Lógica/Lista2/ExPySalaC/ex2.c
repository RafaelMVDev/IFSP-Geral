#include <stdio.h>

void main()
{   
    float nota1,nota2,media,nota_auxiliar;
    
    printf("Digite a nota 1: ");
    scanf("%f",&nota1);
    
    printf("Digite a nota 2: ");
    scanf("%f",&nota2);

    media = (nota1 + nota2) / 2;
    
    if (media >= 6){
        printf("Aprovado. Média: %.2f",media);
    }
    else{
        printf("Reprovado. Digite a nota auxiliar: ");
        scanf("%f",&nota_auxiliar);
        media = (nota1 + nota2 + nota_auxiliar) / 3;
        
        if (media >=5){
            printf("Aprovado. Média: %.2f", media);
        }
        
        else{
            printf("Reprovado. Média: %.2f", media);
        }
    }
}