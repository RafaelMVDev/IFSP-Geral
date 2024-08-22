#include <stdio.h>

int main() {
	int i,base,n,ac;
	printf("Digite o número: ");
	scanf("%i",&n);
	
	printf("Digite a base: ");
	scanf("%i",&base);
    ac = n;
	for (i=1; i<base; ++i) {
	    ac = ac * n;
	}
	
	printf("Resultado da exponenciação: %i",ac);

	return 0;
}