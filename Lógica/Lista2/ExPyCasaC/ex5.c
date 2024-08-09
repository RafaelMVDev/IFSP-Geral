#include <stdio.h>

int main() {
    float sb, h, dsc, ir, encargos, valor_hora, excedente, adc, sl;
    int nf;
    
    printf("Digite o salario bruto: ");
    scanf("%f", &sb);
    
    printf("Digite as horas trabalhadas: ");
    scanf("%f", &h);
    
    if (sb < 800) {
        dsc = 0;
    } 
    else if (sb >= 800 && sb <= 1600) {
        ir = sb * 0.08;
        encargos = sb * 0.05;
        dsc = ir + encargos;
    } 
    else {
        ir = sb * 0.15;
        encargos = sb * 0.07;
        dsc = ir + encargos;
    }
    if (h > 160) {
        valor_hora = sb / 160;
        excedente = h - 160;
        adc = excedente * (valor_hora * 0.5);
        sl = sb - dsc + adc;
    } 
    else {
        adc = 0;
        sl = sb - dsc + adc;
    }
    
    printf("Salario liquido igual a RS %.2f\n", sl);
    printf("Digite o numero de funcionarios: ");
    scanf("%d", &nf);
    
    float geral = sl * nf;
    printf("Total geral dos salarios liquidos igual a RS %.2f\n", geral);
    return 0;
}
}