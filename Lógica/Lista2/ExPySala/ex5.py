valorA = float(input("Digite o valor A: "))
valorB = float(input("Digite o valor B: "))
valorC = float(input("Digite o valor C: "))

if (valorA > valorB and valorA> valorC and (valorB <= valorC)):
    print(f'{valorB}, {valorC}, {valorA}')
elif (valorA > valorB and valorA> valorC and (valorC <= valorB)):
    print(f'{valorC}, {valorB}, {valorA}')
elif (valorB > valorC and valorB > valorA and (valorC <= valorA)):
    print(f'{valorC}, {valorA}, {valorB}')
elif (valorB > valorC and valorB > valorA and (valorA <= valorC)):
    print(f'{valorA}, {valorC}, {valorB}')
elif (valorC > valorA and valorC > valorB and (valorB <= valorA)):
    print(f'{valorB}, {valorA}, {valorC}')
elif (valorC > valorA and valorC > valorB and (valorA <= valorB)):
    print(f'{valorA}, {valorB}, {valorC}')
