#include <stdio.h>

int ex6()
{   
    int i;
    for (i=20;i >= 0; --i){
        if (i%2){
            printf("%i é par \n",i);
        }
        else{
            printf("%i é ímpar \n",i);
        }
        
    }

    return 0;
}