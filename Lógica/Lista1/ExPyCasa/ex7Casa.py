import math

r = float(input("Digite o raio da esfera (m): "))
sup = 4*math.pi*r**2
v = (4/3)*math.pi*r**3

print(f'Área da esfera: {sup:.2f}m²\nVolume da esfera: {v:.2f}m3')
