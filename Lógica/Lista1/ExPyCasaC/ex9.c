#include <stdio.h>

int main()
{
    float nota1,nota2,nota3,nota4,media;

    printf("Digite a nota do 1° Bimestre:  ");
    scanf("%f",&nota1);
    
    printf("Digite a nota do 2° Bimestre:  ");
    scanf("%f",&nota2);
    
    printf("Digite a nota do 3° Bimestre:  ");
    scanf("%f",&nota3);
    
    printf("Digite a nota do 4° Bimestre:  ");
    scanf("%f",&nota4);

    media  = (nota1 + nota2 + nota3 + nota4) /4;

    printf("Á média bimestral é: %.2f ",media);
 
    return 0;
}
