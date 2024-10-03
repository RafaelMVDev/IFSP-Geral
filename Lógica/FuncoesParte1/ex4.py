def fatorial(a):
   resultado = 1

   if a < 0:
      print("Número menor que 0!")
      return -1
   for c in range(a,0,-1):
      resultado *= c
   return resultado

x = int(input("Dê o valor de a: "))

print(fatorial(x))