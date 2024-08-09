#include <stdio.h>

int main() {
    float n1, n2, n3, M, m, mid;
    printf("Digite o primeiro numero: ");
    scanf("%f", &n1);
    
    printf("Digite o segundo numero: ");
    scanf("%f", &n2);
    
    printf("Digite o terceiro numero: ");
    scanf("%f", &n3);
    
    if (n1>=n2 && n1>=n3){
        M = n1;}
    else if (n2>=n1 && n2>=n3){
        M = n2;}
    else {
        M = n3;
    }
    
    if (n1<=n2 && n1<=n3){
        m = n1;}
    else if (n2<=n1 && n2<=n3){
        m = n2;}
    else {
        m = n3;}
    if (n1 != M && n1 != m){
        mid = n1;}
    else if (n2 != M && n2 != m){
        mid = n2;}
    else{
        mid = n3;}
        
    printf("Maior: %.2f\n", M);
    printf("Menor: %.2f\n", m);
    printf("Meio: %.2f\n", mid);
    
    return 0;
}
