#include <stdio.h>

int main(){
    int n;
    
    printf("== Números pares de 0 à 20 ==");
    
    for (n=0; n<=20; ++n){
        
        if (n % 2 ==0){
            printf("\n %i",n);
        }
    }

    return 0;
}