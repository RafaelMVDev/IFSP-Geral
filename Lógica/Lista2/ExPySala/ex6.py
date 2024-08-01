import math
a = float(input('Digite o coeficiente A: '))
b = float(input('Digite o coeficiente B: '))
c = float(input('Digite o coeficiente C: '))

delta = math.sqrt(b**2 - 4*a* c)

if delta <= 0:
    print("Raízes da equação não existentes em R.")
elif a == 0:
    print(f"Valor inválido para o coeficiente A {a})")
else:
    raiz1 = ((b*-1) + delta) / (2*a)
    raiz2 = ((b*-1) - delta) / (2*a)
    print(f'S = [{raiz1:.2f}, {raiz2:.2f}]')