AP = float(input("Digite a altura da parede"))
LP = float(input("Digite a largura da parede"))

LA = float(input("Digite a largura do azulejo"))
AA = float(input("Digite a altura do azulejo"))

AreaP, AreaA = (AP * LP,LA * AA)

QTAzulejos = AreaP / AreaA

print('São necessários aproximadamente: {QTAzulejos:.2f} azulejos')