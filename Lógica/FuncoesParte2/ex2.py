
def contarLetras(palavra):
    contagem_letras = {}
    for i in range(0,len(palavra.replace(" ",""))):
        letra = palavra[i]
        if contagem_letras.get(letra):
            contagem_letras[letra] += 1
        else:
            contagem_letras[letra] = 1
    return contagem_letras

print(contarLetras("oOiii"))
print(contarLetras("Rafael M32131."))