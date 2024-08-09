#include <stdio.h>
#include <math.h>

void main()
{   
    float a,b,c,delta,raiz1,raiz2;
    
    printf("Digite o coeficiente A: ");
    scanf("%f",&a);
    
    printf("Digite o coeficiente B: ");
    scanf("%f",&b);
    
    printf("Digite o coeficiente C: ");
    scanf("%f",&c);
    
    //   delta = sqrt((pow(b,2)- 4*a*c));
    delta = pow(b,2)- 4*a*c;
    
    if (delta < 0){
        printf("Raízes da equação não existentes em R.");
    }
    else if (delta == 0){
        printf("Valor inválido para o coeficiente A: %.2f)",delta);
    }
    
    else{
        delta = sqrt(pow(b,2)- 4*a*c);
        raiz1 = ((b*-1) + delta) / (2*a);
        raiz2 = ((b*-1) - delta) / (2*a);
        printf("%.2f ; %.2f ; %.2f ; %.2f ",a,b,c,delta);
        printf("S = {%.2f, %.2f }",raiz1,raiz2);
    }
}