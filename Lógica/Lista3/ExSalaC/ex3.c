#include <stdio.h>

int main() {
	int n,tab;

	printf("Digite o número para a tabuada: ");
	scanf("%i",&tab);

	for (n=1; n<=10; ++n) {
		printf("%i x %i = %i \n",tab,n,tab * n);
	}

	return 0;
}