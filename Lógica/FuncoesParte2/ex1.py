
t_escala = input("Digite o tipo de escala: ")
c_para = input("Converter para: ")


def converterMedida(temperaturas,tipo_escala,converter_para):
    
    if tipo_escala == "C":
        if converter_para == "F":
            lista_convertida = []
            for i in range(0,len(temperaturas)):
                lista_convertida.append(temperaturas[i] * 9/5 + 32)
            return lista_convertida
        else:
            return temperaturas

    else:
        if converter_para == "C":
            lista_convertida = []
            for i in range(0,len(temperaturas)):
                lista_convertida.append((temperaturas[i] - 32) * 5/9)
            return lista_convertida
        else:
            return temperaturas
        
print(converterMedida([89.6,50],t_escala,c_para ))


