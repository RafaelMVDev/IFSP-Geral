#include <stdio.h>

void main()
{   
    float n,total;
    printf("Digite um número: ");
    scanf("%f",&n);
    total = n;
    while(1){
        if (total*3 >= 250){
            break;
        }
        else{
            total = total *3;
        }
    }
    
    printf("Total: %f",total);

}