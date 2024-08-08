nums = [float(input(f'Número {n + 1}: ')) for n in range(0,3)]
ordenados = sorted(nums)

print(f'Maior número: {ordenados[2]}')
print(f'Número do meio: {ordenados[1]}')
print(f'Menor número: {ordenados[0]}')

