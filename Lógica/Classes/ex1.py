class Pessoa:
    def __init__(self,nome,idade):
        self.nome = nome   
        self.idade = idade

    def exibir_informacoes(self):
        print(f"Nome: {self.nome} \nIdade: {self.idade}" )

pessoa1 = Pessoa("Leandro",15)
pessoa2 = Pessoa("Thomas",21)

pessoa1.exibir_informacoes()
pessoa2.exibir_informacoes()