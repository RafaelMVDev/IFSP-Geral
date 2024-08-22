#include <stdio.h>

int main(){
    int n,acu;
    
    printf("== Números impares de 0 até 20 ==");
    
    for (n=0; n<=100; ++n){
        acu = acu + n;
    }
    
    printf("Somatória: %i", acu);
    return 0;
}
