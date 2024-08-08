nota1 = float(input("Digite a nota 1: "))
nota2 = float(input("Digite a nota 2: "))
nota3 = float(input("Digite a nota 3: "))

media = (nota1 + nota2 + nota3) / 3

if media >= 6:
    print(f"Aprovado. Média: {media:.2f} ") 
else:
    print(f"Reprovado. Média: {media:.2f}")