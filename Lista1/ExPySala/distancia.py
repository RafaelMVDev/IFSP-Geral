distancia = float(input("Digite a distância percorrida ( em Km ): "))
tempo = float(input("Digite o tempo gasto na viagem( em Horas ):  "))
velocidade = float(input('Digite a velocidade média durante o percurso (em Km/h): '))
distancia = tempo * velocidade 
litros_usados = distancia / 12

print(f'Litros usados durante a viagem: {litros_usados} ')