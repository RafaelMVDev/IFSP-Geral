#include <stdio.h>

int main() {
	int i,n,maior,menor,hold;
    
    
    for(i = 1; i <= 3;++i){
        printf("Digite o número %i: ",i);
        scanf("%i",&n);
        if (i == 1){
            maior = n;
            menor = n;
            continue;
        }
        
        if (n > maior){
            maior = n;
        }
        if (n < menor){
            menor = n;
        }
            
    }
    
    printf("Menor: %i \n",menor);
    printf("Maior: %i",maior);
 
	return 0;
}