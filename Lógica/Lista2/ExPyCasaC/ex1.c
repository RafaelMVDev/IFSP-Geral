#include <stdio.h>
int main() {
    int n, d;
    
    printf("Digite a parte inteira: ");
    scanf("%i", &n);
    
    printf("Digite a parte decimal: ");
    scanf("%i", &d);
    
    if (n%2==0 && d%2==0)
        printf("O numero e par.");
    else
        printf("O numero e impar.");
    return 0;
}