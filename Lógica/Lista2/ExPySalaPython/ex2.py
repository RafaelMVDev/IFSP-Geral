nota1 = float(input("Digite a nota 1: "))
nota2 = float(input("Digite a nota 2: "))

media = (nota1 + nota2)/2

if media >= 6:
    print(f"Aprovado. Média: {media:.2f}")
else:
    nota_auxiliar = float(input("Reprovado. Digite a nota auxiliar: "))
    media = (nota1 + nota2 + nota_auxiliar) / 3
    if media >= 5:
        print(f"Aprovado. Média: {media:.2f}")
    else:
        print(f"Reprovado. Média: {media:.2f}")

    