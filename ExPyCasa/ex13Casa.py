s0 = 2
v0 = 3
a = 10

t = float(input('Tempo: '))
s = s0 + v0 * t + 1/2*a*t**2

print("Distância: %.2f" %s)