valor1 = float(input("Digite o primeiro valor: "))
valor2 = float(input("Digite o segundo valor: "))

if valor1 > valor2:
    d = valor1 - valor2
    print(f"Diferença entre {valor1} e {valor2}: {d}")
else:
    d = valor2 - valor1
    print(f"Diferença entre {valor2} e {valor1}: {d}")