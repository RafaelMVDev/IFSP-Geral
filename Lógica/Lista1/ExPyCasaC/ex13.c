#include <stdio.h>
#include <math.h>

int main(){
	int s0,v0,a;
	float t,resultado;
	
	s0 = 2;
	v0 = 3;
	a = 10;
	
	printf("Digite o tempo: ");
	scanf("%f",&t);
	
	resultado = s0 + v0 * t + 1/2*a*pow(t,2);

	printf("Distância: %.2f ",resultado);
	
}
