#include <stdio.h>

void main()
{   
    float v1,v2,d;
    
    printf("Digite o primeiro valor: ");
    scanf("%f",&v1);
    
    printf("Digite o segundo valor: ");
    scanf("%f",&v2);
    
    if (v1 >= v2){
        d = v1 - v2;
        printf("Diferença entre %f e %f: %f",v1,v2,d);
    }
    else{
        d = v2 - v1;
        printf("Diferença entre %f e %f: %f",v2,v1,d);
    }
}