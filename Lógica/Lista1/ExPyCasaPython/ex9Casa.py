p1 = float(input("Digite a nota da 1° avaliação do semestre: "))
p2 = float(input("Digite a nota da 2° avaliação do semestre: "))
ativ = float(input("Digite a nota da atividade realizada: "))
media = (p1 * 4 + p2 * 4 + ativ * 2) / 10

print('Media do semestre: %.2f'%media)