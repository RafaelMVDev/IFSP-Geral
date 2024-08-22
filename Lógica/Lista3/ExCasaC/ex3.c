#include <stdio.h>

int ex3()
{   
    int i = 20;
    while (i>=1){
        if (i % 2 == 0){
            printf("%i é par \n",i);
        }
        else{
            printf("%i é ímpar \n",i);
        }
        --i;
    }


    return 0;
}