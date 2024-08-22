#include <stdio.h>
#include <string.h>

int main()
{   
    char nome[20];
    int i;
    float salario,aumento;
    aumento = 1;
    printf("Digite o nome do funcionário: ");
    scanf("%s",nome);

    printf("Digite o salário do funcionário: ");
    scanf("%f",&salario);
    
    if (salario > 400){
        if (salario <= 700){
            aumento = 0.15;
            salario = salario * (1 + aumento);
        }
        
        else if (salario <= 1000){
            aumento = 0.10;
            salario = salario * (1 + aumento);
        }
        
        else if (salario <= 1800){
            aumento = 0.07;
            salario = salario * (1 + aumento);
        }
        
        else if (salario <= 2500){
            aumento = 0.04;
            salario = salario * (1 + aumento);
        }
        else{
            aumento = 0;
        }
    }
    else{
        aumento = 0.15;
        salario = salario * (1 + aumento);
    }

    printf("Nome do funcionário: %s \n Aumento: %.2f  \n Total: %.2f",nome,aumento * 100,salario);

    return 0;
}