c_curso = int(input('Digite o código do curso: '))

cursos = ['Engenharia', 'Edificações', 'Sistemas Elétricos',
          'Turismo','Análise de Sistemas' ]

if c_curso >= 1 and c_curso <= 5:
    print(cursos[c_curso - 1])
else:
    print('Código inválido!')