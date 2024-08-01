n = int(input("Digite um número de 0 a 100: "))
n_fixo = 20

dif = n - n_fixo

if dif > 0:
    print(dif)
else:
    print(dif * -1)