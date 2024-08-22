#include <stdio.h>

int ex9()
{   
    int i;
    while (i<=20){
        if (i % 2 == 0){
            printf("%i é par \n",i);
        }
        else{
            printf("%i é ímpar \n",i);
        }
        ++i;
    }


    return 0;
}