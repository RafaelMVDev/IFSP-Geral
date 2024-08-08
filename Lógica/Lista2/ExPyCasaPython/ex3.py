nota = float(input('Digite a nota: '))

resto = nota - int(nota)

if resto > 0.5:
    nota = int(nota) + 1 
    print(nota)
else:
    nota = int(nota)
    print(nota)