#include <stdio.h>

int ex8()
{   
    int i;
    printf("Pares de 0 a 20");
    while (i<=20){
        if (i % 2 == 0){
            printf("%i \n",i);
        }
        ++i;
    }


    return 0;
}