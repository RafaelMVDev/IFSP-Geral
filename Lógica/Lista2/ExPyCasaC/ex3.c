#include <stdio.h>
#include <math.h>

int main() {
    float n, resto, na;
    
    printf("Digite a nota: ");
    scanf("%f", &n);
    
    resto = fmod(n,1);
    if (resto>0.5) {
        na = (n-resto)+1;
        printf("A nota e igual a %.f\n", na);
    } 
    else {
        na = n - resto;
        printf("A nota e igual a %.f\n", na);
    }
    
    return 0;
}