class ContaBancaria:
    def __init__(self,titular,saldo):
        self.titular = titular
        self.__saldo = saldo

    def sacar(self,quantidade):
        if self.__saldo - quantidade > 0 :
            self.__saldo -= quantidade
            print("Saldo sacado com sucessso!")
        else:
            print("Erro ao sacar! Não há saldo o suficiente em sua conta!")
    
    def depositar(self,quantidade):
        self.__saldo += quantidade
        print("Depositado com sucesso!")
    
conta1 = ContaBancaria("Rodrigo",500)
conta1.sacar(250)
conta1.depositar(50)
conta1.sacar(550)

