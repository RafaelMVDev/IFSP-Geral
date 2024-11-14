class Animal:
    def __init__(self,nome):
        self.nome = nome

    def emitir_som(self):
        print("<Som do animal>")
    
class Cachorro(Animal):
    def emitir_som(self):
        print("AU AU AU")
class Gato(Animal):
    def emitir_som(self):
        print("MIAU MIAU MIAU")

animal_qualquer = Animal('Qualquer animal')
animal_qualquer.emitir_som()

gato1 = Gato("Felix")
gato1.emitir_som()

cachorro1 = Cachorro("Rex")
cachorro1.emitir_som()