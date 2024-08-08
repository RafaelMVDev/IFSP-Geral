#include <stdio.h>
#include <math.h>
int main()
{
    float n;

    printf("Digite um número real: ");
    scanf("%f",&n);
    
    printf("Quadrado do número: %.2f ",pow(n,2));
 
    return 0;
}