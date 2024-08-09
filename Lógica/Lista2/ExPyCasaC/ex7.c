#include <stdio.h>

int main() {
    float c;
    printf("Digite o codigo de acesso: ");
    scanf("%f", &c);
    if (c==1){
        printf("Engenharia.");
    }
    else if(c==2){
        printf("Edificacoes.");
    }
    else if(c==3){
        printf("Sistemas Eletricos.");
    }
    else if(c==4){
        printf("Turismo.");
    }
    else if(c==5){
        printf("Analise de Sistemas.");
    }
    else{
        printf("Codigo invalido.");
    }
    return 0;
}