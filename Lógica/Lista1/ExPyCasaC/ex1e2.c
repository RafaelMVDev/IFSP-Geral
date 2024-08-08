/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>


int main()
{
	float AP,LP,LA,AA,QTAzulejos ;
	
	printf("Digite a altura da parede: ");
	scanf("%f", &AP);
	
	printf("Digite a largura da parede: ");
	scanf("%f", &LP);
	
	printf("Digite a largura do azulejo: ");
	scanf("%f", &LA);
	
	printf("Digite a altura do azulejo : ");
	scanf("%f", &AA);
	
	QTAzulejos = (AP* LP) / (LA * AA);
	
	printf("São necessários aproximadamente: %.2f azulejos", QTAzulejos);
	return 0;
}
