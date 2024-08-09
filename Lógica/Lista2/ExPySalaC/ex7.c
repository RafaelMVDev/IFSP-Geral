#include <stdio.h>

void main()
{   
    float val;
    
    printf("Digite o valor: ");
    scanf("%f",&val);
    
    if (val > 0){
        printf("%.2f",val);
    }
    else{
        printf("%.2f",val*-1);
    }
}