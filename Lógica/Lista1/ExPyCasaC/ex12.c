#include <stdio.h>

int main(){
	float dp;
	int tempo;
	
	printf("Digite a distância percorrida pelo veículo (em Km): ");
	scanf("%f",&dp);
	
	printf("Digite o tempo gasto (em h): ");
	scanf("%i",&tempo);

	
	printf("Velocidade média do veículo: %.2f km/h",dp/tempo);
	
}
