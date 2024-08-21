#include <stdio.h>
#include <math.h>

void main()
{   
    int anterior,posterior,intermediaria,i;
    anterior = 0;
    posterior = 1
    
    for(i=0;i < 15; ++i){
        intermediaria = posterior;
        posterior = posterior + anterior;
        anterior = intermediaria;
        printf("%i",posterior);
    }
    
}