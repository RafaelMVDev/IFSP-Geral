import math
altura = float(input("Digite a altura da lata de óleo ( em M ): "))
raio = float(input("Digite o raio da lata de óleo (em M) : "))
volume = math.pi * (raio **2) * altura
print(f"Volume da lata de óleo: {volume:.2f}")