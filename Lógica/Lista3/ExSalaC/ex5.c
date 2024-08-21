#include <stdio.h>

void main()
{   
    int i;
    
    for(i=1;i < 200; ++i){
        if (!(i%4)){
            printf("%i \n",i);
        }
    }
    
}