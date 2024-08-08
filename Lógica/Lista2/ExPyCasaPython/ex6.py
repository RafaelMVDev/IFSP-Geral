meses = ['Janeiro','Fevereiro','Março','Abril',
         'Maio','Junho','Julho','Agosto',
         'Setembro','Outubro','Novembro','Dezembro'
         ]

mes = int(input('Digite o número do mês: '))

if mes >= 1  and mes <= 12:
    print(meses[mes - 1])
else:
    print('Mês inválido!')