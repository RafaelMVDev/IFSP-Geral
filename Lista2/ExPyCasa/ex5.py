total = 0

while True:
    s_bruto = float(input('Digite o salário bruto: '))
    if s_bruto == 0:
        break
    h = int(input('Digite a quantidade de horas trabalhadas: '))
    adicional = 0

    if h > 160:
        adicional = ((s_bruto / 160 * 1.5) * h - 160)

    if s_bruto >= 800:
        s_novo = s_bruto * (1 - ( 0.08 + 0.05)) + adicional
    elif s_bruto <= 1600:
        s_novo = s_bruto * (1 - (0.15 + 0.07)) + adicional

    total += s_novo

print(f'Total dos salários líquidos dos funcionários: {total}')
