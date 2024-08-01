import math

raio = float(input("Digite a medida do raio ( em metros ): "))
comp = 2*math.pi*raio
ar = math.pi*raio**2

print(f"Comprimento: {comp:.2f} m.\nÁrea: {ar:.2f} m²")