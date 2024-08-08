#include <stdio.h>

int main()
{
    float a,b,c;

    printf("Digite um valor real para A: ");
    scanf("%f",&a);
    
    printf("Digite um valor real para B: ");
    scanf("%f",&b);
    
    c = a;
    a = b;
    b = c;
    
    printf("Valores trocados. A = %.2f ; B = %.2f", a,b);
 
    return 0;
}