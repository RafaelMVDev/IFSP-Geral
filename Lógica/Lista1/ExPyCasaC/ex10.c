#include <stdio.h>

int main(){
	float a,b,c;
	
	printf("Digite qualquer valor para A: ");
	scanf("%f",&a);
	
	printf("Digite qualquer valor para B: ");
	scanf("%f",&b);
	c = a;
	a = b;
	b = c ;
	printf("Após troca: A = %f B = %f",a,b);
	
}
