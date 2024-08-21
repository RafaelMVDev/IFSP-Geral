while True:
    operador = input("Digite o operador: ")
    
    if operador == 'S':
        print("Saindo do programa... ")
        break
    
    n1 = float(input("Digite o número 1: "))
    n2 = float(input("Digite o número 2: "))
    
    if operador == "+":
        print(f'{n1} + {n2} = {n1+n2}')
    elif operador == "-":
        print(f'{n1} + {n2} = {n1-n2}')
    elif operador == "*":
        print(f'{n1} X {n2} = {n1*n2}')
    elif operador == "/":
        if n2 == 0:
            print("Não é possível dividir por 0!")
            break
        print(f'{n1} / {n2} = {n1/n2}')
    else:
        print("Operador Inválido")