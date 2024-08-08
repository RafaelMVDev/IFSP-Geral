valor = float(input("Digite o valor: "))
taxa = int(input("Digite a taxa: "))
tempo = float(input("Digite o tempo: "))
prestacao = valor + (valor*(taxa/ 100)*tempo)

print(f"Valor da prestação: {prestacao:.2f}")

