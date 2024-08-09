#include <stdio.h>

int main() {
    int n, nc, d;
    
    printf("Digite um numero inteiro: ");
    scanf("%i", &n);
    
    nc = 20;
    if(n<=100 && n>=20){
        d = n - nc;
        printf("O numero esta a uma distancia de %i do numero chave", d);
    }
    else if(n<20 && n>=0){
        d = nc - n;
        printf("O numero esta a uma distancia de %i do numero chave", d);
    }
    else{
        printf("Numero invalido.");
    }
    
    return 0;
}