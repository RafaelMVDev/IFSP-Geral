n_coelhos = int(input("Digite o número de coelhos: "))
valor_total = (n_coelhos* 0.7) / 18 + 10
print(f"Valor total: R${valor_total:.2f}")

a = input('Digite um valor para A: ')
b = input('Digite outro valor para B: ')
print(f'Antes da troca: A = {a}, B = {b}')
a,b = b,a
print(f'Depois da troca: A = {a}, B = {b}')
