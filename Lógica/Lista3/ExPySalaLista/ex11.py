n = int(input("Digite um número: "))
maior = n 
menor = n
for i in range(1,4):
    n = int(input("Digite um número: "))
    if n > maior:
        maior = n  
    elif n < menor:
        menor = n
        
print(f"Menor número: {menor} \n Maior número: {maior}")