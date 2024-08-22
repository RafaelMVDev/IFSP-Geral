#include <stdio.h>
#include <string.h>

int main()
{   
    int i,n,acum,maior,menor;
    int faixa1,faixa2,faixa3,faixa4,faixa5;
    int tot_par,tot_impar;
    float media_aritmetica;
    char decisao[1];
    i = 0;
    while(1){
        printf("Digite um número: ");
        scanf("%i",&n);
        
        // Média aritmética

        acum = acum + n; // para média aritmética
        ++i; // contabilizar elementos dados pelo usuário
        
        if (i == 1){
            maior = n;
            menor = n;
        }
        
        // Checagem do maior e menor
        if (n>maior){
            maior = n ; 
        }
        if (n < menor){
            maior = n;
        }
        
        // Checagem de ímpar e par
        
        if (n%2 == 0){
            ++tot_par;
        }
        else{

            ++tot_impar;
        }
        
        // Checagem da classificação de faixa
        if (n < 0){
            ++faixa1;
        }
        else {
            if (n < 15){
                ++faixa2;
            }
            else if (n < 100){
                ++faixa3;
            }
            
            else if (n >= 1000){
                ++faixa4;
            }
            
            else if (n >100 && n < 1000){
                ++faixa5;
            }
            
        
        }
        
        printf("Deseja continuar? ");
        scanf("%s",decisao);
    
        if (strcmp(decisao,"n") == 0 || strcmp(decisao,"n") == 0){
            printf("Saindo do programa... \n");
            break;
        }
        
    }
    
    printf("Total de pares: %i \n",tot_par);
    printf("Total de ímpares: %i \n",tot_impar);
    
    printf("Total de números na faixa 1: %i \n",faixa1);
    printf("Total de números na faixa 2: %i \n",faixa2);
    printf("Total de números na faixa 3: %i \n",faixa3);
    printf("Total de números na faixa 4: %i \n",faixa4);
    printf("Total de números na faixa 5: %i \n",faixa5);
    
    printf("Menor: %i \n",menor);
    printf("Maior: %i \n",maior);
    
    media_aritmetica = acum / i;
    printf("Média Aritmética: %.2f", media_aritmetica);
    
    return 0;
}