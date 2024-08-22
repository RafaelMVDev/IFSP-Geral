#include <stdio.h>

int main() {
	int i, somatoria;
	printf("Somatória dos números de 1 à 500: ");

    while(1){
        if (i == 501){
            break;
        }
        somatoria = somatoria + i;
        i += 1;
    }
	
	printf("Somatória: %i",somatoria);

	return 0;
}