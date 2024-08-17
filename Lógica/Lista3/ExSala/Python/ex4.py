ladoA = float(input("Digite o valor do lado A: "))
ladoB = float(input("Digite o valor do lado B: "))
ladoC = float(input("Digite o valor do lado C: "))

if (ladoA + ladoB > ladoC) and (ladoB + ladoC > ladoA) and (ladoC + ladoA > ladoB):
    if (ladoB == ladoA and ladoA == ladoC and ladoC == ladoB ):
        print("Equilatéro")
    elif (ladoB == ladoA and ladoA != ladoC) or (ladoC == ladoA and ladoA != ladoB) or (ladoB == ladoC and ladoC != ladoA):
        print("Isósceles")
    else:
        print("Escaleno")
else:
    print("Não é um triângulo!!!!!!!!!")
