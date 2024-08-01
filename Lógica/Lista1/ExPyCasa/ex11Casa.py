a = input('Digite um número para A: ')
b = input('Digite outro número para B: ')

print(f'Antes da troca: A = {a}, B = {b}')
a,b = b,a
print(f'Depois troca: A = {a}, B = {b}')