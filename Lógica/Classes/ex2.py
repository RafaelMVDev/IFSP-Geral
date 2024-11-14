class Carro:
    def __init__(self,marca,modelo,ano):
        self.marca = marca
        self.modelo = modelo
        self.ano = ano
    
    def exibir_detalhes(self):
        print(f'Marca:{self.marca}\nModelo:{self.modelo}\nAno:{self.ano}')

carro1 = Carro("Toyota","Modelo1",2020)
carro1.exibir_detalhes()

carro2 = Carro("Volkswagen","Modelo2",2024)
carro2.exibir_detalhes()

carro3 = Carro("Nissan","Modelo3",2025)
carro3.exibir_detalhes()